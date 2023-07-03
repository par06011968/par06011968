#include <Arduino.h>

#define NUM_PARKING_SPACES 10

int parkingSpaces[NUM_PARKING_SPACES] = {0}; // 0 = empty, 1 = occupied

void setup() {
  Serial.begin(9600);

  for (int i = 0; i < NUM_PARKING_SPACES; i++) {
    pinMode(i, INPUT);
  }
}

void loop() {
  for (int i = 0; i < NUM_PARKING_SPACEs; i++)
   {
    int parkingSpaceStatus = digitalRead(i);
    parkingSpaces[i] = parkingSpaceStatus;
  }

  // Send the parking space status to the serial port
  for (int i = 0; i < NUM_PARKING_SPACES; i++) {
    Serial.print(parkingSpaces[i]);
    Serial.print(" ");
  }
  Serial.println();

  delay(1000);
}

