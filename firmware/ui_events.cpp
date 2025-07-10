#include "ui.h"
#include <Wire.h>
#include <Arduino.h>

#define PUMP1_ADDRESS 109
#define PUMP2_ADDRESS 110
#define PUMP3_ADDRESS 111

char response[20];
byte responseLength = 0;
String volume, deltaMinutes;

void splitString(const String& txt, String& volume, String& time) {
  int pos = txt.indexOf('.');
  if (pos != -1) {
    volume = txt.substring(0, pos);
    time = txt.substring(pos + 1);
  }
}

void communicateWithPump(int pumpAddress, const char* command) {
    Wire.beginTransmission(pumpAddress);
    Wire.write(command);
    Wire.endTransmission();
}

void volumeDispense(lv_event_t* e)
{
    if (selectedPumpAddress != 0) {
        char command[20];
        snprintf(command, sizeof(command), "D, %s", txt);
        // AH, LOOK HOW CLEAN ( ˘ω˘)
        communicateWithPump(selectedPumpAddress, command);
    }
}

void overTimeDispense(lv_event_t * e)
{
	    if (selectedPumpAddress != 0) {
        char command[20];
        splitString(String(txt), volume, deltaMinutes);
        snprintf(command, sizeof(command), "D, %s, %s", volume, deltaMinutes);
        // AH, LOOK HOW CLEAN ( ˘ω˘)
        communicateWithPump(selectedPumpAddress, command);
    }
}

void constantDispense(lv_event_t * e)
{
	    if (selectedPumpAddress != 0) {
        char command[20];
        splitString(String(txt), volume, deltaMinutes);
        snprintf(command, sizeof(command), "DC, %s, %s", volume, deltaMinutes);
        // AH, LOOK HOW CLEAN ( ˘ω˘)
        communicateWithPump(selectedPumpAddress, command);
    }
}

void stopDispense(lv_event_t * e)
{
    if (selectedPumpAddress != 0) {
        char command[20];
        snprintf(command, sizeof(command), "X");

        communicateWithPump(selectedPumpAddress, command);
  }
}

void pauseDispense(lv_event_t * e)
{
    if (selectedPumpAddress != 0) {
        char command[20];
        snprintf(command, sizeof(command), "P");

        communicateWithPump(selectedPumpAddress, command);
  }
}

void setPump1(lv_event_t * e)
{
  selectedPumpAddress = PUMP1_ADDRESS;
  char command[20];
  splitString(String(txt), volume, deltaMinutes);
  snprintf(command, sizeof(command), "Cal, %s", volume);
  communicateWithPump(selectedPumpAddress, command);
}

void setPump2(lv_event_t * e)
{
  selectedPumpAddress = PUMP2_ADDRESS;
  char command[20];
  splitString(String(txt), volume, deltaMinutes);
  snprintf(command, sizeof(command), "Cal, %s", volume);
  communicateWithPump(selectedPumpAddress, command);
}
