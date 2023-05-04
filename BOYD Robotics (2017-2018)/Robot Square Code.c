#pragma config(Motor,  port2,           left,          tmotorVex393_MC29, openLoop, reversed, driveRight)
#pragma config(Motor,  port3,           right,         tmotorVex393_MC29, openLoop, driveLeft)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

task main()
{
	motor[port2] = 70;					//Right Motor Turn Forwards
	motor[port3] = 70;					//Left Motor Turn Forwards
	wait1Msec(2000);						//Wait 2 Seconds

	motor[port2] = -70;					//Right Motor Turn Backwards
	motor[port3] = 70;					//Left Motor Turn Forwards
	wait1Msec(2000);						//Wait 2 Seconds

	motor[port2] = 70;					//Right Motor Turn Forwards
	motor[port3] = 70;					//Left Motor Turn Forwards
	wait1Msec(2000);						//Wait 2 Seconds

	motor[port2] = -70;					//Right Motor Turn Backwards
	motor[port3] = 70;					//Left Motor Turn Forwards
	wait1Msec(2000);						//Wait 2 Seconds

	motor[port2] = 70;					//Right Motor Turn Forwards
	motor[port3] = 70;					//Left Motor Turn Forwards
	wait1Msec(2000);						//Wait 2 Seconds

	motor[port2] = -70;					//Right Motor Turn Backwards
	motor[port3] = 70;					//Left Motor Turn Forwards
	wait1Msec(2000);						//Wait 2 Seconds


}
