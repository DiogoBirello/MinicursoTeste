#include <Arduino.h>
#include <Ultrasonic.h>

// Lista de nomes
// Diogo Birello
// Daniel Evandir :)
// Gustavo Mazetto

/*
 * Pass as a parameter the trigger and echo pin, respectively,
 * or only the signal pin (for sensors 3 pins), like:
 * Ultrasonic ultrasonic(13);
 */
Ultrasonic ultrasonic(12, 13);
int distance;

void setup() {
  Serial.begin(9600);
}

void loop() {
  // Pass INC as a parameter to get the distance in inches
  distance = ultrasonic.read();
  
  Serial.print("Distance in CM: ");
  Serial.println(distance);
  if(distance <= 10)
  {
    delay(125);
    digitalWrite(13, HIGH);
    delay(125);
  }
  else if (distance <= 20)
  {
    delay(500);
    digitalWrite(13, HIGH);
    delay(500);
  }
  else
  {
    delay(1000);
    digitalWrite(13, HIGH);
    delay(1000);
  }
  digitalWrite(13, LOW);
}