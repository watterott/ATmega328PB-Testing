// I2C Digital Potentiometer
// by Nicholas Zambetti <http://www.zambetti.com>
// and Shawn Bonkowski <http://people.interaction-ivrea.it/s.bonkowski/>

// Demonstrates use of the Wire library
// Controls AD5171 digital potentiometer via I2C/TWI

// Created 31 March 2006

// This example code is in the public domain.

// This example code is in the public domain.

// Dual wire example

#include <Wire.h>
#include <Wire1.h>

void setup() {
  Wire.begin(); // join i2c bus (address optional for master)
  Wire1.begin();
}

byte val = 0;

void loop() {
  Wire.beginTransmission(44); // transmit to device #44 (0x2c)
  Wire1.beginTransmission(44); // transmit to 2nd device #44 (0x2c) 
  // device address is specified in datasheet
  Wire.write(byte(0x00));            // sends instruction byte
  Wire.write(val);             // sends potentiometer value byte
  Wire.endTransmission();     // stop transmitting
  
  // 2nd I2C
  Wire1.write(byte(0x00));            // sends instruction byte
  Wire1.write(val);             // sends potentiometer value byte
  Wire1.endTransmission();     // stop transmitting

  val++;        // increment value
  if (val == 64) { // if reached 64th position (max)
    val = 0;    // start over from lowest value
  }
  delay(500);
}

