#include <Wire.h>
#include <Arduino.h>

#define SDA_PIN 22   // Green SDA
#define SCL_PIN 21   // White SCL
#define ADDRESS_PUMP1 109  
#define ADDRESS_PUMP2 110  

char command[20];             
byte commandLength = 0;       
bool commandReceived = false; 

char response[20];            
byte responseLength = 0;      

void setup() {
  Serial.begin(9600);
  Wire.begin(SDA_PIN, SCL_PIN);
}

void serialEvent() {
  commandLength = Serial.readBytesUntil('\n', command, sizeof(command));
  command[commandLength] = '\0';
  commandReceived = true;
}

void loop() {
  if (commandReceived) {
    if (strncmp(command, "P1,", 3) == 0) {
      controlPump(ADDRESS_PUMP1);
    } else if (strncmp(command, "P2,", 3) == 0) {
      controlPump(ADDRESS_PUMP2);
    } else {
      Serial.println("Invalid command format.");
    }
    commandReceived = false;
  }
}

void controlPump(int address) {
  Wire.beginTransmission(address);
    
  for (byte i = 3; i < commandLength; i++) {
    Wire.write(command[i]);
  }
  
  Wire.endTransmission();

  if (strcmp(command + 3, "sleep") != 0) {
    delay(250);

    Wire.requestFrom(address, sizeof(response));
    responseLength = Wire.readBytesUntil('\0', response, sizeof(response));
    
    for (byte i = 0; i < responseLength; i++) {
      Serial.write(response[i]);
    }
    Serial.println();
  }
}
