#include <Servo.h> //Servo library
#include <Wire.h>
#include <LiquidCrystal_I2C.h> //LCD Library
#include <stdbool.h> 
LiquidCrystal_I2C lcd(0x27,16,2);
Servo AO;
Servo AT;
Servo BO;
Servo BT;
int AOPIN = 13;
int ATPIN = 12;
int BOPIN = 8;
int BTPIN = 7;
int coin = 100;
int cost = 2;
int refreshLCD = 0;


void setup() {
  lcd.init();
  lcd.begin(16,2);
  lcd.backlight();          // Power on the back light
  /*
  AO.attach(9);             // attaches the servo signal pin on pin D3
  AT.attach(5);             // attaches the servo signal pin on pin D5
  BO.attach(6);             // attaches the servo signal pin on pin D6
  BT.attach(3);             // attaches the servo signal pin on pin D9
  AO.write(90);             // stop the movement
  AT.write(90);             // stop the movement
  BO.write(90);             // stop the movement
  BT.write(93);             // stop the movement 
  */
  pinMode(AOPIN, INPUT_PULLUP);    // button input A1
  pinMode(ATPIN, INPUT_PULLUP);    // button input A2
  pinMode(BOPIN, INPUT_PULLUP);    // button input B1
  pinMode(BTPIN, INPUT_PULLUP);    // button input B2
  lcd.clear();
  lcd.setCursor(0,0);       // Set the LCD to start at 0,0... This is spot first and row second
  lcd.print("    Welcome!");    // Print Welcome on the LCD
}

void loop() {

//-------------------------------------------------PRINTING THE NUMBER OF COINS IF ANY ARE FOUND----------------------------------------------------------------------------UPDATE IF ANOTHER CLEARS REFRESH VALUE
              if ((coin == 1) && (refreshLCD==10)){
                lcd.clear();
                lcd.setCursor(0,0);
                lcd.print("    Welcome!");
                lcd.setCursor(0,1);               // Set the LCD to the second row
                lcd.print("        coins: 1");  // Print the coins text to set how many are there
                refreshLCD=0;
              }
              else if ((coin == 2) && (refreshLCD==10)){
                lcd.clear();
                lcd.setCursor(0,0);
                lcd.print("    Welcome!");
                lcd.setCursor(0,1);               // Set the LCD to the second row
                lcd.print("        coins: 2");  // Print the coins text to set how many are there
                refreshLCD=0;
              }
              else if ((coin == 3) && (refreshLCD==10)){
                lcd.clear();
                lcd.setCursor(0,0);
                lcd.print("    Welcome!");
                lcd.setCursor(0,1);               // Set the LCD to the second row
                lcd.print("        coins: 3");  // Print the coins text to set how many are there
                refreshLCD=0;
              }
              else if ((coin == 4) && (refreshLCD==10)){
                lcd.clear();
                lcd.setCursor(0,0);
                lcd.print("    Welcome!");
                lcd.setCursor(0,1);               // Set the LCD to the second row
                lcd.print("        coins: 4");  // Print the coins text to set how many are there
                refreshLCD=0;
              }
              else if ((coin >= 5) && (refreshLCD==10)){
                lcd.clear();
                lcd.setCursor(0,0);
                lcd.print("    Welcome!");
                lcd.setCursor(0,1);               // Set the LCD to the second row
                lcd.print("        coins:5+");  // Print the coins text to set how many are there
                refreshLCD=0;
              }
              else if ((coin == 0) && (refreshLCD==10)){
                lcd.clear();
                lcd.setCursor(0,0);
                lcd.print("    Welcome!");
                refreshLCD=0;
              }
              else if(refreshLCD==200){
                lcd.clear();
                lcd.setCursor(0,0);
                lcd.print("    Welcome!");
              }
//-------------------------------------------------CHECK IF THE BUTTON A1 IS PRESSED----------------------------------------------------------------------------------------
              if ((digitalRead(AOPIN) == LOW) && (coin>=cost)) {           // check if the input is LOW (button pressed)
                  coin = coin - cost;       // subtract the cost from the number of credits
                  AO.attach(9);
                  AO.write(180);              // Turn clockwise to let out the item
                  lcd.clear();              // Wipe the LCD
                  lcd.setCursor(0,0);       // Set the cursor to Origin
                  delay(1050);               // wait 0.5 seconds before next command
                  AO.detach();             // stop the movement
                  delay(500);
                  }
                  else if((digitalRead(AOPIN) == LOW) && (coin!=cost)){
                  lcd.clear();
                  lcd.setCursor(0,0);
                  lcd.print("    Price = 2");
                  lcd.setCursor(0,1);               // Set the LCD to the second row
                  lcd.print("Not Enough Funds");  // Print the coins text to set how many are there
                  delay(1000);
                  }
                  else if ((digitalRead(BOPIN) == LOW) && (coin>=cost)) {           // check if the input is LOW (button pressed)
                  coin = coin - cost;       // subtract the cost from the number of credits
                  BO.attach(3);
                  BO.write(0);              // Turn clockwise to let out the item
                  lcd.clear();              // Wipe the LCD
                  lcd.setCursor(0,0);       // Set the cursor to Origin
                  delay(1150);               // wait 0.5 seconds before next command
                  BO.detach();             // stop the movement
                  delay(500);
                  }
                  else if((digitalRead(BOPIN) == LOW) && (coin!=cost)){
                  lcd.clear();
                  lcd.setCursor(0,0);
                  lcd.print("    Price = 2");
                  lcd.setCursor(0,1);               // Set the LCD to the second row
                  lcd.print("Not Enough Funds");  // Print the coins text to set how many are there
                  delay(1000);
                  }
                  else if ((digitalRead(BTPIN) == LOW) && (coin>=cost)) {           // check if the input is LOW (button pressed)
                  coin = coin - cost;       // subtract the cost from the number of credits
                  BT.attach(5);
                  BT.write(180);              // Turn clockwise to let out the item
                  lcd.clear();              // Wipe the LCD
                  lcd.setCursor(0,0);       // Set the cursor to Origin
                  delay(2250);               // wait 0.5 seconds before next command
                  BT.detach();             // stop the movement
                  delay(500);
                  }
                  else if((digitalRead(BTPIN) == LOW) && (coin!=cost)){
                  lcd.clear();
                  lcd.setCursor(0,0);
                  lcd.print("    Price = 2");
                  lcd.setCursor(0,1);               // Set the LCD to the second row
                  lcd.print("Not Enough Funds");  // Print the coins text to set how many are there
                  delay(1000);
                  }
                  else if ((digitalRead(ATPIN) == LOW) && (coin>=cost)) {           // check if the input is LOW (button pressed)
                  coin = coin - cost;       // subtract the cost from the number of credits
                  AT.attach(6);
                  AT.write(180);              // Turn clockwise to let out the item
                  lcd.clear();              // Wipe the LCD
                  lcd.setCursor(0,0);       // Set the cursor to Origin
                  delay(850);               // wait 0.5 seconds before next command
                  AT.detach();             // stop the movement
                  delay(500);
                  }
                  else if((digitalRead(ATPIN) == LOW) && (coin!=cost)){
                  lcd.clear();
                  lcd.setCursor(0,0);
                  lcd.print("    Price = 2");
                  lcd.setCursor(0,1);               // Set the LCD to the second row
                  lcd.print("Not Enough Funds");  // Print the coins text to set how many are there
                  delay(1000);
                  }
/*
 * Correct direction is below
  AO.write(180); //Turn clockwise at high speed
  AT.write(180);
  BO.write(180);
  BT.write(0);  
*/




  
  /*
    SERVO INFO
    write(0); = clockwise high speed
    write(180); = counterclockwise high speed
    detach(); = stop
    attach(pin#); = re-connect
    delay(1000); = pause for 1 second
  */   
  delay(100);
  refreshLCD = refreshLCD + 1; 
}
