## Let's Climb
[<- Previously: Let's Learn Tank Drive!](LLTank.md)

*Objectives* : Read Button Input, Drive Motors, read current and limit to stop climber

*Task*: Make the robot climb the rope and stop automatically when it hits the top

*Starting Point* - Working drivetrain code. Feel free to use last week’s write-up to help you remember how to do this week’s tasks. 

*Process* - 
1. Make two motors for the climber. Declare and initialize them. We will NOT be using follow mode. If you don’t know what CAN ID the talons are, ask Katie how you can find that information.

2. Using the same joystick object as the drive train, pick a button to be the climb button. When that button is pressed, we want to run both climbing motors (remember to run one in reverse). One direction is ratcheting - so do a little bit of testing with single motors before programming everything. To read the button you will use the command:

	```` joystick->GetRawButton(button_id); ````
  
It will return 1 if the button is pressed and 0 if not pressed. Remember to use an “if” statement.

3. Read the electrical current draw from the talons. As the robot climbs, the talons will pull some constant amount of current (electricity), but when the robot hit the top, the motors will try harder to climb thus pulling more current (electricity). We want to stop climbing when we pull too much current. We can use the following command to see how much current a single motor is pulling:

	 ```` ClimberMotor->GetOutputCurrent(); ````
   
4. Stop climbing when the motor is pulling a current larger than ~30 amps. 


![Image](/Images/01dpapprec.jpg)

[Next: Let's Get Some Gears! ->](LLGears.md)

[Back to Main](../../README.md)
