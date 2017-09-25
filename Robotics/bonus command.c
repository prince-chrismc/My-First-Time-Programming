task main()
{
  bIfiAutonomousMode=false;                      //JSV is joystick vertical
  while(1==1)
  {
    if ((vexRT[Ch5]==127)&&(vexRT[Ch6]==127)) motor[port7]=75;
    if ((vexRT[Ch5]==-127)&&(vexRT[Ch6]==-127)) motor[port7]=-15;
	}                                              //Barrier is both top buttons (servo is in up position) - servo at 75
}                                                //Barrier is both bottom buttons (servo is in down position) - servo at -15
