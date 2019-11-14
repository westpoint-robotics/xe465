/*
ColorPAL.h - Library for interacting with the ColorPAL sensor
Created by Pratheek Manjunath, November 12, 2019.
Released into the public domain.
*/
#ifndef ColorPAL_h
#define ColorPAL_h
#include "Arduino.h"
#include "SoftwareSerial.h"

class ColorPAL
{
  public:    
    void attachPAL(int userPin);
	void readPAL(int* r, int* g, int* b);
	int redPAL();
	int greenPAL();
	int bluePAL();
	char detectPAL(int a, int b, int c);
	void resetPAL();
  private:
	SoftwareSerial serin = SoftwareSerial(6,255);
	SoftwareSerial serout = SoftwareSerial(255,6);
	int red, green, blue;
	int pin;
	//char color;
};
#endif