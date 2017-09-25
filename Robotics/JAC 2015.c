#pragma config(Motor, port2, RightMotor, tmotorNormal, openLoop, reversed) 				//Drill A
#pragma config(Motor, port3, LeftMotor, tmotorNormal, openLoop)						 	//Drill B
#pragma config(Motor, port4, ScissorLiftMotor, tmotorNormal, openLoop)		 			//Banebot || servo switch
#pragma config(Motor, port5, RightGathererMotor, tmotorNormal, openLoop, reversed)	    //Vex
#pragma config(Motor, port6, LeftGathererMotor, tmotorNormal, openLoop)					//Vex
#pragma config(Motor, port7, GathererWinch, tmotorNormal, openLoop)					    //Vex
#pragma config(Motor, port8, FlywheelMotor, tmotorNormal, openLoop)						//Vex
#pragma config(Motor, port9, ClawMotor, tmotorNormal, openLoop)							//Vex

task Controlled()
{
  repeat(forever)
  {
    motor[rightmotor] == vexRT[Ch2];
    motor[leftmotor] == vexRT[Ch3];

    if (vexRT[Btn5U] == true) motor[scissoriftmotor] = 127;
  	else if (vexRT[Btn5D] == true) motor[scissorliftmotor] = -127;
  	else motor[scissorliftmotor] = 63;

  	if (vexRT[Btn6U] == true){motor[rightgathermotor] = 127; motor[leftgathermotor] = 127;}
  	else if (vexRT[Btn6D] == true){ motor[rightgathermotor] = -127; motor[leftgathermotor] = -127;}
  	else {motor[rightgathermotor] = 0; motor[leftgathermotor] = 0;}

  	if (vexRT[btn7U] == true) motor[flwheelmotor] = 127;
  	if (vexRT[btn7R] == true) motor[flwheelmotor] = 63;
  	if (vexRT[btn7L] == true) motor[flwheelmotor] = -63;
  	else motor[flwheelmotor] = 0;

  	if (vexRT[Btn8R == true) motor[ClawMotor] = 127;
  	else if (vexRT[btn8L == true) motor[ClawMotor] = -127;
  	else motor[ClawMotor] = 0;
  }
}

task Autonomous()
{
  body
}

task main() //starts autonomus if btn are pressed
{
	clearTimer(timer1);
	while (time1[timer1] < 750)
 	{
   if (vexRT[Btn5U] == true && vexRT[Btn5D] == true && vexRT[Btn7R] == true && vexRT[Btn7L] == true) startTask(Autonomous);
	}
	startTask(Controlled);
}

task breaking()
{
    //in order to break u need to slow down the motor not put in reverse these vex motors are far to weak
    if(vexRT[Btn8R == true)
    {
        motor[example] = 127;
        if(vexRT[Btn8R == false)
        {
            for(int x = 127; x < 0; x--;)
            {
                motor[example] = x
                sleep(10);
            }
        }
    }
}
