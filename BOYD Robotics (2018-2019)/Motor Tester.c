#pragma config(Motor,  port1,           A,             tmotorVex393_HBridge, openLoop)
#pragma config(Motor,  port2,           B,             tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port3,           C,             tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port4,           D,             tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port5,           E,             tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port6,           F,             tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port7,           G,             tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port8,           H,             tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port9,           I,             tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port10,          J,             tmotorVex393_HBridge, openLoop)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

task main()
{
	while(1==1)
	{
	motor[port1] = 127;
	motor[port2] = 127;
	motor[port3] = 127;
	motor[port4] = 127;
	motor[port5] = 127;
	motor[port6] = 127;
	motor[port7] = 127;
	motor[port8] = 127;
	motor[port9] = 127;
	motor[port10] = 127;
}


}
