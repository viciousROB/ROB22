#pragma config(Motor,  port1,           DriveRight,    tmotorVex393_HBridge, openLoop, driveRight)
#pragma config(Motor,  port6,           Claw,          tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port7,           Lift,          tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port10,          DriveLeft,     tmotorVex393_HBridge, openLoop, driveLeft)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

task main()
{
	while(1==1)
	{
		//Tank Control Drive Motors
		motor[DriveLeft] = vexRT[Ch3];//Set Left motor to Y axis on Left Joystick
		motor[DriveRight] = vexRT[Ch2];//Set Right motor to Y axis on Right Joystick

		//Claw Control
		if(vexRT[Btn8U] == 1)
		{
			motor[port6] = 127;
		}
		else if (vexRT[Btn8R] == 1)
		{
			motor[port6] = -127;
		}
		else
		{
			motor[port6] = 0;
		}

		//Lift Control
		if(vexRT[Btn6U] == 1)
		{
			motor[port7] = 127;
		}
		else if (vexRT[Btn6D] == 1)
		{
			motor[port7] = -127;
		}
		else
		{
			motor[port7] = 0;
		}
	}

}
