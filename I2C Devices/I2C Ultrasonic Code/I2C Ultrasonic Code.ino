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
  Serial.begin(9600); //serial connection at 9600 baud
}

int reading = 0; //Placeholder for sensor value

void loop() {
  //First we must instruct the sensor what is being read
  Wire.beginTransmission(112); //Transmit to device #112 (0x70)
  Wire.write(byte(0x00));
  Wire.write(byte(0x50)); //Tells the sensor to work in inches (replace with 51 for cm)
  Wire.endTransmission();
  //Now we wait until data has been collected
  delay(70);
  //Now we tell the sensor to echo the information
  Wire.beginTransmission(112);
  Wire.write(byte(0x02));
  Wire.endTransmission();
  //Request a reading from the sensor
  Wire.requestFrom(112,2);
  if(2 <= Wire.available()){
    reading = Wire.read();
    reading = reading <<8;
    reading |= Wire.read();
    Serial.println(reading);
  }
  delay(250);
}
