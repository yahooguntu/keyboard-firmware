#include <Arduino.h>
#include "tables.h"

const PROGMEM byte SL_TO_UID[9][18] = {
  { 41, 60, 64, 68, 0, 101, 33, 0, 0, 32, 31, 48, 0, 0, 30, 0, 0, 34},
  { 58, 63, 67, 69, 0, 0, 21, 0, 0, 8, 26, 47, 0, 226, 20, 0, 0, 23},
  { 59, 62, 66, 46, 72, 77, 9, 0, 0, 7, 22, 0, 229, 0, 4, 0, 0, 10},
  { 70, 61, 65, 42, 82, 0, 25, 0, 0, 6, 27, 49, 52, 80, 29, 0, 0, 5},
  { 35, 36, 37, 38, 45, 78, 89, 0, 0, 90, 91, 39, 40, 79, 99, 0, 0, 43},
  { 28, 24, 12, 18, 71, 74, 92, 0, 0, 93, 94, 19, 225, 0, 98, 0, 0, 44},
  { 11, 13, 14, 15, 0, 73, 95, 0, 0, 96, 97, 51, 0, 230, 87, 0, 0, 57},
  { 17, 16, 54, 55, 76, 75, 83, 0, 0, 84, 85, 56, 88, 81, 86, 0, 0, 53},
  { 0, 0, 0, 0, 0, 0, 0, 224, 227, 0, 0, 0, 0, 0, 0, 228, 231, 0}
};

const char S0L0_REP[] PROGMEM = "Esc";
const char S0L1_REP[] PROGMEM = "F3";
const char S0L2_REP[] PROGMEM = "F7";
const char S0L3_REP[] PROGMEM = "F11";
const char S0L5_REP[] PROGMEM = "App";
const char S0L6_REP[] PROGMEM = "4";
const char S0L9_REP[] PROGMEM = "#3";
const char S0L10_REP[] PROGMEM = "@2";
const char S0L11_REP[] PROGMEM = "]}";
const char S0L14_REP[] PROGMEM = "!1";
const char S0L17_REP[] PROGMEM = "%5";

const char S1L0_REP[] PROGMEM = "F1";
const char S1L1_REP[] PROGMEM = "F6";
const char S1L2_REP[] PROGMEM = "F10";
const char S1L3_REP[] PROGMEM = "F12";
const char S1L6_REP[] PROGMEM = "R";
const char S1L9_REP[] PROGMEM = "E";
const char S1L10_REP[] PROGMEM = "W";
const char S1L11_REP[] PROGMEM = "[{";
const char S1L13_REP[] PROGMEM = "LAlt";
const char S1L14_REP[] PROGMEM = "Q";
const char S1L17_REP[] PROGMEM = "T";

const char S2L0_REP[] PROGMEM = "F2";
const char S2L1_REP[] PROGMEM = "F5";
const char S2L2_REP[] PROGMEM = "F9";
const char S2L3_REP[] PROGMEM = "=+";
const char S2L4_REP[] PROGMEM = "Pause";
const char S2L5_REP[] PROGMEM = "End";
const char S2L6_REP[] PROGMEM = "F";
const char S2L9_REP[] PROGMEM = "D";
const char S2L10_REP[] PROGMEM = "S";
const char S2L12_REP[] PROGMEM = "RShift";
const char S2L13_REP[] PROGMEM = "";
const char S2L14_REP[] PROGMEM = "A";
const char S2L17_REP[] PROGMEM = "G";

const char S3L0_REP[] PROGMEM = "PrSc";
const char S3L1_REP[] PROGMEM = "F4";
const char S3L2_REP[] PROGMEM = "F8";
const char S3L3_REP[] PROGMEM = "Bksp";
const char S3L4_REP[] PROGMEM = "Up";
const char S3L6_REP[] PROGMEM = "V";
const char S3L9_REP[] PROGMEM = "C";
const char S3L10_REP[] PROGMEM = "X";
const char S3L11_REP[] PROGMEM = "\\|";
const char S3L12_REP[] PROGMEM = "\"";
const char S3L13_REP[] PROGMEM = "Left";
const char S3L14_REP[] PROGMEM = "Z";
const char S3L17_REP[] PROGMEM = "B";

const char S4L0_REP[] PROGMEM = "^6";
const char S4L1_REP[] PROGMEM = "&7";
const char S4L2_REP[] PROGMEM = "*8";
const char S4L3_REP[] PROGMEM = "(9";
const char S4L4_REP[] PROGMEM = "-_";
const char S4L5_REP[] PROGMEM = "PgDn";
const char S4L6_REP[] PROGMEM = "K1";
const char S4L9_REP[] PROGMEM = "K2";
const char S4L10_REP[] PROGMEM = "K3";
const char S4L11_REP[] PROGMEM = ")0";
const char S4L12_REP[] PROGMEM = "Enter";
const char S4L13_REP[] PROGMEM = "Right";
const char S4L14_REP[] PROGMEM = "K.";
const char S4L17_REP[] PROGMEM = "Tab";

const char S5L0_REP[] PROGMEM = "Y";
const char S5L1_REP[] PROGMEM = "U";
const char S5L2_REP[] PROGMEM = "I";
const char S5L3_REP[] PROGMEM = "O";
const char S5L4_REP[] PROGMEM = "ScrLk";
const char S5L5_REP[] PROGMEM = "Home";
const char S5L6_REP[] PROGMEM = "K4";
const char S5L9_REP[] PROGMEM = "K5";
const char S5L10_REP[] PROGMEM = "K6";
const char S5L11_REP[] PROGMEM = "P";
const char S5L12_REP[] PROGMEM = "Lshift";
const char S5L14_REP[] PROGMEM = "K0";
const char S5L17_REP[] PROGMEM = "Space";

const char S6L0_REP[] PROGMEM = "H";
const char S6L1_REP[] PROGMEM = "J";
const char S6L2_REP[] PROGMEM = "K";
const char S6L3_REP[] PROGMEM = "L";
const char S6L5_REP[] PROGMEM = "Ins";
const char S6L6_REP[] PROGMEM = "K7";
const char S6L9_REP[] PROGMEM = "K8";
const char S6L10_REP[] PROGMEM = "K9";
const char S6L11_REP[] PROGMEM = ";:";
const char S6L13_REP[] PROGMEM = "RAlt";
const char S6L14_REP[] PROGMEM = "K+";
const char S6L17_REP[] PROGMEM = "Caps";

const char S7L0_REP[] PROGMEM = "N";
const char S7L1_REP[] PROGMEM = "M";
const char S7L2_REP[] PROGMEM = ",<";
const char S7L3_REP[] PROGMEM = ".>";
const char S7L4_REP[] PROGMEM = "Del";
const char S7L5_REP[] PROGMEM = "PgUp";
const char S7L6_REP[] PROGMEM = "Num";
const char S7L9_REP[] PROGMEM = "K/";
const char S7L10_REP[] PROGMEM = "K*";
const char S7L11_REP[] PROGMEM = "/?";
const char S7L12_REP[] PROGMEM = "KEnter";
const char S7L13_REP[] PROGMEM = "Down";
const char S7L14_REP[] PROGMEM = "K-";
const char S7L17_REP[] PROGMEM = "`~";

const char S8L7_REP[] PROGMEM = "LControl";
const char S8L8_REP[] PROGMEM = "LGUI";
const char S8L15_REP[] PROGMEM = "RControl";
const char S8L16_REP[] PROGMEM = "RGUI";

const char NULL_REP[] PROGMEM = "NULL";

PGM_P const SL_TO_ASCII_REP[][18] PROGMEM = {
  {S0L0_REP, S0L1_REP, S0L2_REP, S0L3_REP, NULL_REP, S0L5_REP, S0L6_REP, NULL_REP, NULL_REP, S0L9_REP, S0L10_REP, S0L11_REP, NULL_REP, NULL_REP, S0L14_REP, NULL_REP, NULL_REP, S0L17_REP},
  {S1L0_REP, S1L1_REP, S1L2_REP, S1L3_REP, NULL_REP, NULL_REP, S1L6_REP, NULL_REP, NULL_REP, S1L9_REP, S1L10_REP, S1L11_REP, NULL_REP, S1L13_REP, S1L14_REP, NULL_REP, NULL_REP, S1L17_REP},
  {S2L0_REP, S2L1_REP, S2L2_REP, S2L3_REP, S2L4_REP, S2L5_REP, S2L6_REP, NULL_REP, NULL_REP, S2L9_REP, S2L10_REP, NULL_REP, S2L12_REP, S2L13_REP, S2L14_REP, NULL_REP, NULL_REP, S2L17_REP},
  {S3L0_REP, S3L1_REP, S3L2_REP, S3L3_REP, S3L4_REP, NULL_REP, S3L6_REP, NULL_REP, NULL_REP, S3L9_REP, S3L10_REP, S3L11_REP, S3L12_REP, S3L13_REP, S3L14_REP, NULL_REP, NULL_REP, S3L17_REP},
  {S4L0_REP, S4L1_REP, S4L2_REP, S4L3_REP, S4L4_REP, S4L5_REP, S4L6_REP, NULL_REP, NULL_REP, S4L9_REP, S4L10_REP, S4L11_REP, S4L12_REP, S4L13_REP, S4L14_REP, NULL_REP, NULL_REP, S4L17_REP},
  {S5L0_REP, S5L1_REP, S5L2_REP, S5L3_REP, S5L4_REP, S5L5_REP, S5L6_REP, NULL_REP, NULL_REP, S5L9_REP, S5L10_REP, S5L11_REP, S5L12_REP, NULL_REP, S5L14_REP, NULL_REP, NULL_REP, S5L17_REP},
  {S6L0_REP, S6L1_REP, S6L2_REP, S6L3_REP, NULL_REP, S6L5_REP, S6L6_REP, NULL_REP, NULL_REP, S6L9_REP, S6L10_REP, S6L11_REP, NULL_REP, S6L13_REP, S6L14_REP, NULL_REP, NULL_REP, S6L17_REP},
  {S7L0_REP, S7L1_REP, S7L2_REP, S7L3_REP, S7L4_REP, S7L5_REP, S7L6_REP, NULL_REP, NULL_REP, S7L9_REP, S7L10_REP, S7L11_REP, S7L12_REP, S7L13_REP, S7L14_REP, NULL_REP, NULL_REP, S7L17_REP},
  {NULL_REP, NULL_REP, NULL_REP, NULL_REP, NULL_REP, NULL_REP, NULL_REP, S8L7_REP, S8L8_REP, NULL_REP, NULL_REP, NULL_REP, NULL_REP, NULL_REP, NULL_REP, S8L15_REP, S8L16_REP, NULL_REP}
};

int slToKeyNum(int s, int l) {
  return l * 9 + s - 10;
}

int slToUid(int s, int l) {
  return pgm_read_byte(&(SL_TO_UID[s][l]));
}

void slToAsciiRep(int s, int l, char *buf) {
  strcpy_P(buf, (PGM_P)pgm_read_word(&(SL_TO_ASCII_REP[s][l])));
}
