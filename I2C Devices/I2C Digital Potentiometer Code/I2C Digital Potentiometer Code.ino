/*
Ultrasonic Range Finder over i2c Protocol
Pinout:
SDA -> A4
SCL -> A5
NC  -> None
5V  -> 5V
GND -> GND

██╗░░░██╗██╗░█████╗░██╗░█████╗░██╗░░░██╗░██████╗
██║░░░██║██║██╔══██╗██║██╔══██╗██║░░░██║██╔════╝
╚██╗░██╔╝██║██║░░╚═╝██║██║░░██║██║░░░██║╚█████╗░
░╚████╔╝░██║██║░░██╗██║██║░░██║██║░░░██║░╚═══██╗
░░╚██╔╝░░██║╚█████╔╝██║╚█████╔╝╚██████╔╝██████╔╝
░░░╚═╝░░░╚═╝░╚════╝░╚═╝░╚════╝░░╚═════╝░╚═════╝░
Cedric McEnroe
*/

#include <Wire.h>

void setup() {
  Wire.begin(); //join the i2c bus, can optionally add an adress to find the master
}

byte val = 0; //Placeholder for sensor value

void loop() {
  Wire.beginTransmission(44);
  Wire.write(byte(0x00));
  Wire.write(val);
  Wire.endTransmission();
  val++;
  if(val==64){//if the value reaches its maximum
    val=0;    //return value to 0 to reset
  }
  delay(500);
}
