

#ifndef BOARD_TYPE
  #define BOARD_TYPE 1
#endif

#ifndef eiotlib_h
#define eiotlib_h
#include <Arduino.h>

class board {
  public:
    board();
    void set(byte data);
  private:
};

#endif

#if (BOARD_TYPE == 1)
  #define reedPin  D0
  #define wakePin  D0
  #define sdaPin   D1
  #define dhtPin   D1
  #define sckPin   D2
  #define fButton  D3
  #define buzzPin  D3
  #define rLedPin  D6
  #define yLedPin  D5
  #define bLedPin  D5
  #define gLedPin  D4
  #define pwOutPin D7
  #define btnPin   D8
  #define sclPin   D8
  #define lSensPin A0
  #define ledSWpin D9
  #define relayPin D10

  #define buzzer  0b10000000
  #define leds    0b01110000
  #define rgb     0b01110010
  #define button  0b00000100
  #define pwOut   0b00000100
  #define relay   0b00000001
  #define all     0b11111111
#endif
