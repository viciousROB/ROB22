#pragma config(Motor,  port2,           DriveLeft,     tmotorVex393_MC29, openLoop, reversed, driveLeft)
#pragma config(Motor,  port3,           DriveRight,    tmotorVex393_MC29, openLoop, driveRight)
#pragma config(Motor,  port4,           BackDown,      tmotorVex393_MC29, openLoop, reversed)
#pragma config(Motor,  port5,           BackUp,        tmotorVex393_MC29, openLoop, reversed)
#pragma config(Motor,  port6,           Front,         tmotorVex393_MC29, openLoop, reversed)
#pragma config(Motor,  port7,           Claw,          tmotorVex393_MC29, openLoop)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

/*---------------------------------------------------------------------------*/
/*                                                                           */
/*        Description: Competition template for VEX EDR                      */
/*                                                                           */
/*---------------------------------------------------------------------------*/

// This code is for the VEX cortex platform
#pragma platform(VEX2)

// Select Download method as "competition"
#pragma competitionControl(Competition)

//Main competition background code...do not modify!
#include "Vex_Competition_Includes.c"

/*---------------------------------------------------------------------------*/
/*                          Pre-Autonomous Functions                         */
/*                                                                           */
/*  You may want to perform some actions before the competition starts.      */
/*  Do them in the following function.  You must return from this function   */
/*  or the autonomous and usercontrol tasks will not be started.  This       */
/*  function is only called once after the cortex has been powered on and    */
/*  not every time that the robot is disabled.                               */
/*---------------------------------------------------------------------------*/

void pre_auton()
{
  // Set bStopTasksBetweenModes to false if you want to keep user created tasks
  // running between Autonomous and Driver controlled modes. You will need to
  // manage all user created tasks if set to false.
  bStopTasksBetweenModes = true;

	// Set bDisplayCompetitionStatusOnLcd to false if you don't want the LCD
	// used by the competition include file, for example, you might want
	// to display your team name on the LCD in this function.
	// bDisplayCompetitionStatusOnLcd = false;

  // All activities that occur before the competition starts
  // Example: clearing encoders, setting servo positions, ...
}

/*---------------------------------------------------------------------------*/
/*                                                                           */
/*                              Autonomous Task                              */
/*                                                                           */
/*  This task is used to control your robot during the autonomous phase of   */
/*  a VEX Competition.                                                       */
/*                                                                           */
/*  You must modify the code to add your own robot specific commands here.   */
/*---------------------------------------------------------------------------*/

task autonomous()
{
		motor[DriveLeft] = 127;//Set Left motor to Y axis on Left Joystick
		motor[DriveRight] = 127;//Set Right motor to Y axis on Right Joystick
		wait1Msec(3000);
		motor[DriveLeft] = 0;//Set Left motor to Y axis on Left Joystick
		motor[DriveRight] = 0;//Set Right motor to Y axis on Right Joystick
  AutonomousCodePlaceholderForTesting();
}

/*---------------------------------------------------------------------------*/
/*                                                                           */
/*                              User Control Task                            */
/*                                                                           */
/*  This task is used to control your robot during the user control phase of */
/*  a VEX Competition.                                                       */
/*                                                                           */
/*  You must modify the code to add your own robot specific commands here.   */
/*---------------------------------------------------------------------------*/

task usercontrol()
{
  // User control code here, inside the loop

  while (true)
  {
		motor[DriveLeft] = vexRT[Ch2];//Set Left motor to Y axis on Left Joystick
		motor[DriveRight] = vexRT[Ch3];//Set Right motor to Y axis on Right Joystick
//---------------------------------------------------------------------------
		if (vexRT[Btn6U] == 1)
		{
				motor[Front] = 127;
				motor[BackUp] = 127;
		}
			else if (vexRT[Btn6D] == 1)
		{
				motor[Front] = -127;
				motor[BackUp] = -127;

		}
			else
		{
				motor[Front] = 0;
				motor[BackUp] = 0;
		}
//---------------------------------------------------------------------------

		if (vexRT[Btn8R] == 1)
		{
				motor[Claw] = 127;
		}
			else if (vexRT[Btn8D] == 1)
		{
				motor[Claw] = -127;
		}
			else
		{
				motor[Claw] = 0;
		}
//--------------------------------------------------------------------------
		if (vexRT[Btn5U] == 1)
		{
				motor[BackDown] = 127;
		}
			else if (vexRT[Btn5D] == 1)
		{
				motor[BackDown] = -127;
		}
			else
		{
				motor[BackDown] = 0;
		}

  }
}
