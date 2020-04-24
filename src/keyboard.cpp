#include <Arduino.h>
#include <SPI.h>
#include "MCP23S17.h"
#include "tables.h"

#define NRESET A5
#define CS 10

#define GAINTA A0
#define GAINTB A1
#define GBINTA A2
#define GBINTB A3

#define GAINPUTSEL 0x0003

// used by incrementScan
byte scanNum = 0xA; // immediately roll over to 0 on first pass
word scanLine;

byte keyState[180];

MCP gpioA(0, CS);
MCP gpioB(1, CS);

void setup() {
  Serial.begin(115200);

  pinMode(GAINTA, INPUT);
  pinMode(GAINTB, INPUT);
  pinMode(GBINTA, INPUT);
  pinMode(GBINTB, INPUT);

  pinMode(NRESET, OUTPUT);
  digitalWrite(NRESET, 1);

  delay(10);

  gpioA.begin();
  gpioB.begin();

  gpioA.pinMode(0xFFFF); // input
  gpioB.pinMode(GAINPUTSEL); // GPIO 0-2 as input, rest as output

  gpioA.pullupMode(0xFFFF);
  gpioB.pullupMode(GAINPUTSEL);
  gpioA.inputInvert(0xFFFF);
  gpioB.inputInvert(GAINPUTSEL);
  gpioB.digitalWrite(0xff80);

  Serial.println(F("Initialized"));
}

void updateKeyState(int s, int l, int state) {
  int keyNum = slToKeyNum(s, l);

  if (keyState[keyNum] != state) {
    keyState[keyNum] = state;

    Serial.print(F("S"));
    Serial.print(s, DEC);
    Serial.print(F(" L"));
    Serial.print(l, DEC);
    Serial.print(F(" "));

    char buf[10];
    slToAsciiRep(s, l, buf);
    Serial.print(buf);

    if (keyState[keyNum]) {
      Serial.print(F(" Dn\r\n"));
    } else {
      Serial.print(F(" Up\r\n"));
    }
  }
}

/*
 * Loops through the 9 scan lines on the S connector
 */
void incrementScan() {
  scanNum++;
  scanLine = scanLine << 1;

  if (scanNum > 8) {
    scanNum = 0;
    scanLine = 128;
  }

  // invert scanLine where output pins are
  gpioB.digitalWrite(scanLine ^ 0xff80);
}

void loop() {
  incrementScan();
  delay(1);

  word cAState = gpioA.digitalRead();
  word cBState = gpioB.digitalRead() & GAINPUTSEL;

  for (int connL = 0; connL < 16; connL++) {
    updateKeyState(scanNum, connL, cAState & 1);
    cAState = cAState >> 1;
  }

  updateKeyState(scanNum, 16, cBState & 1);
  updateKeyState(scanNum, 17, (cBState >> 1) & 1);
}
