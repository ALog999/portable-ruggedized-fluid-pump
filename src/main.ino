#include <Wire.h>
#include <Arduino.h>

#define SDA_PIN 21   
#define SCL_PIN 22   
#define PUMP_ADDRESS_1 109 
#define PUMP_ADDRESS_2 110 

String actualVolume; 

//Function to send commands from microcontroller to pump
void sendCommandToPump(int pump, String command) {
  int pumpAddress = (pump == 2) ? PUMP_ADDRESS_2 : PUMP_ADDRESS_1; // Determine pump address based on the selected pump
  Wire.beginTransmission(pumpAddress); // Begin transmission to the specified pump
  Wire.write(command.c_str()); // Write the command
  Wire.endTransmission(); // End transmission
}

//Function for dispensing specific volume
void volumeDispensing(int pump) {
  Serial.println("Enter volume:");
  while (!Serial.available()) {} // Wait for user input
  String volume = Serial.readStringUntil('\n'); // Read the volume input
  sendCommandToPump(pump, "D," + volume); 
  Serial.println("Volume dispensing mode activated for Pump " + String(pump) + " with volume: " + volume);
}

// Function for constant flow rate 
void constantFlowrate(int pump) {
  Serial.println("Enter flowrate [ml/min]:");
  while (!Serial.available()) {} // Wait for user input for flowrate
  String flowrate = Serial.readStringUntil('\n'); // Read the flowrate input

  Serial.println("Enter desired time or * to run continously:");
  while (!Serial.available()) {} // Wait for user input for time
  String time = Serial.readStringUntil('\n'); // Read the time input
  sendCommandToPump(pump, "DC," + flowrate + "," + time); 
  Serial.println("Constant flowrate mode activated for Pump " + String(pump) + " with flowrate: " + flowrate + " and time: " + time);
}

// Function for dispensing a fixed volume over a fixed time 
void doseOverTime(int pump) {
  Serial.println("Enter the fixed volume:");
  while (!Serial.available()) {} // Wait for user input for dose
  String dose = Serial.readStringUntil('\n'); // Read the dose input

  Serial.println("Enter time:");
  while (!Serial.available()) {} // Wait for user input for time
  String timeDose = Serial.readStringUntil('\n'); // Read the time input
  sendCommandToPump(pump, "D," + dose + "," + timeDose); 
  Serial.println("Dose over time mode activated for Pump " + String(pump) + " with dose: " + dose + " and time: " + timeDose);
}

//Function to calibrate pumps
void calibratePump(int pump) {
  Serial.println("Enter actual volume dispensed:");
  while (!Serial.available()) {} // Wait for user input for actual volume dispensed
  actualVolume = Serial.readStringUntil('\n'); // Read the actual volume input
  sendCommandToPump(pump, "Cal," + actualVolume); 
  Serial.println("Pump " + String(pump) + " calibrated with actual volume dispensed: " + actualVolume);
}

void setup() {
  Serial.begin(9600); // Serial port initialization
  Wire.begin();        // Initialize I2C communication
  
  // Print the pump selection menu
  Serial.println(F("Select Pump:"));
  Serial.println(F("1 - Pump 1"));
  Serial.println(F("2 - Pump 2"));
  Serial.println(F("Enter your choice:"));
}

void loop() {
  if (Serial.available() > 0) { // Check if data is available from serial port
    String input = Serial.readStringUntil('\r'); // Read the input string
    
    if (input == "1" || input == "2") {
      handlePumpSelection(input.toInt()); // Handle pump selection
    } else {
      Serial.println("Invalid choice. Please enter either '1' or '2'.");
    }
  }
  while (Wire.available()) {          
    char in_char = Wire.read();            
    Serial.print(in_char);            
  }
}

void handlePumpSelection(int pump) {
  // Print the operation menu for the selected pump
  Serial.println("Selected Pump: " + String(pump));
  Serial.println(F("Operation Modes:"));
  Serial.println(F("1 - Continuous dispensing"));
  Serial.println(F("2 - Volume Dispensing"));
  Serial.println(F("3 - Constant flowrate"));
  Serial.println(F("4 - Dose over time"));
  Serial.println(F("5 - Calibrate pump"));
  Serial.println(F("6 - Pause"));
  Serial.println(F("7 - Stop"));
  Serial.println(F("Enter your choice followed by the parameters if required:"));
  
  // Continue to handle user input for operation modes
  while (Serial.available() == 0); // Wait for user input
  String modeInput = Serial.readStringUntil('\r'); // Read the input string
  handleUserInput(modeInput, pump); // Handle user input for operation modes
}

void handleUserInput(String input, int pump) {
  int mode = input.toInt();
  switch (mode) {
    case 1: // Continuous dispensing
      sendCommandToPump(pump, "D,*"); // Command for continuous dispensing
      Serial.println("Continuous dispensing mode activated for Pump " + String(pump) + ".");
      break;
    case 2: // Volume dispensing
      volumeDispensing(pump);
      break;
    case 3: // Constant flowrate
      constantFlowrate(pump);
      break;
    case 4: // Dose over time
      doseOverTime(pump);
      break;
    case 5: // Calibrate pump
      calibratePump(pump);
      break;
    case 6: // Pause
      sendCommandToPump(pump, "P"); // Command to pause and unpause the pump
      Serial.println("Pump " + String(pump) + "  paused. Enter 'p' again to unpause or 'x' to stop completely.");
      break;
    case 7: // Stop
      sendCommandToPump(pump, "X"); // Command to stop the pump completely
      Serial.println("Pump " + String(pump) + "  stopped.");
      break;
    default:
      Serial.println("Invalid mode selected. Please try again.");
      break;
  }
}
