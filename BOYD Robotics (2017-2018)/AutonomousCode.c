#pragma config(Motor,  port2,           LeftDrive,     tmotorVex393_MC29, openLoop, driveLeft)
#pragma config(Motor,  port3,           RightDrive,    tmotorVex393_MC29, openLoop, driveRight)
#pragma config(Motor,  port4,           ArmBackup1,    tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port6,           Arm,           tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port7,           ArmBackup2,    tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port8,           ConeScoop,     tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port9,           Lift,          tmotorVex393_MC29, openLoop)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

task main()
{
	//#################################################################//2.6 Seconds
	motor[port2] = 127;

	motor[port3] = 127;																								 //
	motor[port6] = 127;																								 //Start Lift
	wait1Msec(1500);																									 //
	motor[port6] = 0;																									 //Stop Lift
	motor[port9] = 127;																								 //Start Base Intake Out
	wait1Msec(950);			  																						 //
	motor[port9] = 0;																									 //Stop Base Intake Out
	wait1Msec(400);																										 //
	motor[port2] = 0;																									 //Stop Driving
	motor[port3] = 0;																									 //
	//#################################################################//0.8 Seconds
	motor[port2] = 127;																								 //Start Driving
	motor[port3] = 120;																								 //
	wait1Msec(800);																										 //
	motor[port2] = 0;																									 //Stop Driving
	motor[port3] = 0;																									 //
	//#################################################################//0.95 Seconds
	motor[port9] = -127;																							 //Start Base Intake In
	wait1Msec(950);																									   //
	motor[port9] = 0;																									 //Stop Base Intake In
	//#################################################################//1.0 Seconds
	motor[port2] = -127;																							 //Start Driving Backwards
	motor[port3] = -120;																							 //
	wait1Msec(2000);																									 //
	//#################################################################//3.0 Seconds
	motor[port2] = -75;																							 //Turn 180 Degrees
	motor[port3] = 127;																								 //
	wait1Msec(2600);																									 //
	//#################################################################//2.0 Seconds
	motor[port2] = 127;																								 //Move Forwards
	motor[port3] = 120;																								 //
	motor[port8] = -127;																							 //Drop Cone If in Robot Skills Challenge
	wait1Msec(500);																								  	 //
	motor[port6] = 127;																								 //Raise Lift
	wait1Msec(1500);																								   //
	motor[port6] = 0;																									 //Stop Lift
	motor[port2] = 0;																									 //Stop Drive
	motor[port3] = 0;																									 //
	motor[port8] = 0;																									 //Stop ConeScoop
	//#################################################################//2.9 Seconds
	motor[port9] = 127;																								 //Start Base Intake Out
	wait1Msec(950);																				  					 //
	motor[port9] = 0;																									 //Stop Base Intake Out
	motor[port2] = -127;																							 //Move Backwards
	motor[port3] = -120;																							 //
	wait1Msec(1000);																									 //
	motor[port9] = -127;																							 //Start Base Intake In
	wait1Msec(950);		  																							 //
	motor[port9] = 0;																									 //Stop Base Intake In
	motor[port2] = 0;																									 //
	motor[port3] = 0;																									 //
	//#################################################################//Total: 13.25 Seconds
}
