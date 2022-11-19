/*
Driver Control Program
██╗░░░██╗██╗░█████╗░██╗░█████╗░██╗░░░██╗░██████╗
██║░░░██║██║██╔══██╗██║██╔══██╗██║░░░██║██╔════╝
╚██╗░██╔╝██║██║░░╚═╝██║██║░░██║██║░░░██║╚█████╗░
░╚████╔╝░██║██║░░██╗██║██║░░██║██║░░░██║░╚═══██╗
░░╚██╔╝░░██║╚█████╔╝██║╚█████╔╝╚██████╔╝██████╔╝
░░░╚═╝░░░╚═╝░╚════╝░╚═╝░╚════╝░░╚═════╝░╚═════╝░
Cedric McEnroe

Run these on RPI
wget https://raw.githubusercontent.com/FRC4564/Xbox/master/xbox.py
wget https://raw.githubusercontent.com/FRC4564/Xbox/master/sample.py
*/
import xbox
joy = xboxJoystick()

//Left Xbox Joystick
LeftX = joy.leftX() //Left joystick X Axis
LeftY = joy.leftY() //Left joystick Y Axis

//Right Xbox Joystick
RightX = joy.rightX() //Right joystick X Axis
RightY = joy.rightY() //Right Joystick Y Axis

//Trigger Controls
LTrigger = joy.leftTrigger()
RTrigger = joy.rightTrigger()

//ABXY Buttons are boolean, can be plugged directly into if statements
//joy.A()
//joy.B()
//joy.X()
//joy.Y()

//Set right motors to RightY
//Set left motors to LeftY
//Add dead zone of 20 (while STICK <= 20 ==0)
//Arm control is done by triggers
//Claw open and close is done by A and B Buttons
