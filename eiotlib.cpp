#include "eiotlib.h"
#include <Arduino.h>

board::board(){
    
}

void board::set(byte data){
    pinMode(sdaPin, OUTPUT);
    pinMode(sckPin, OUTPUT);
    pinMode(sclPin, OUTPUT);
    delayMicroseconds(1);
    shiftOut(sdaPin, sckPin, LSBFIRST, data);
    digitalWrite(sclPin, LOW);
    delayMicroseconds(1);
    digitalWrite(sclPin, HIGH);
    delayMicroseconds(1);
    digitalWrite(sclPin, LOW);
    pinMode(sclPin, INPUT);
}


