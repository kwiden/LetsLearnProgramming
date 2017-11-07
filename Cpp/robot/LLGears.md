## Let's Get Some Gears!
[<- Previously: Let's Climb!](LLClimb.md)

*Objectives* : Read Button Input, Drive Motors, Read limit switches

*Task*: Control the intake roller to gobble up gears and automatically stop when a gear is inside the roller (when the limit switch is pressed).

*Starting Point* - Working drivetrain and climber code.

*Process* -

1. Create a command for intaking with the roller and another for releasing gears using the buttons of your choosing.


2. We don’t want our rollers to continue intaking when we have the gear fully seated. To detect when the gear is completely inside the roller, we put a limit switch at the bottom - it looks and acts like a giant button. When the button is pressed, it returns a value of 1 and when it's released it returns a value of 0. Find which Talon the limit switch is connected to, and then do the following:

    1. In the init section, add the following line

    ```` someMotor->ConfigLimitMode(CANTalon::kLimitMode_SwitchInputsOnly); ````

    Talons can do a lot for us. We can set them up so that when we push a limit switch, the motor stops running. We can also set them up  so that the limit switch is just an input that doesn’t affect the motor. The line above is telling the motor that there will be a limit switch but it’s just for us to read.
    
     2. On your intake command, add an if statement that stops the motor from sucking gears in if the button is pressed (but it should still let the arm release gears) You’ll need the following function:

    ```` someMotor->IsRevLimitSwitchClosed() ````

    The function will return 1 when its closed (pushed) and 0 when it’s open (not pushed). 


3. Test it! 


4. Instead of us writing the code to use the limit switch, what if the Talon did that for us? Comment out the lines you added in step 2. Another way we can set the motor to limit is by using the web-based configuration tool. While connected to the robot - open firefox or internet explorer (chrome will not work) and go to “ roborio-XXXX-frc.local “ where XXXX is the team number of the rio (ie 1296, 1297, etc). There, find the talon for the gear intake and mess with the settings to get the motor to stop when the limit switch is pressed. This will take some trial and error.

![IMAGE](/Images/talonlimit.PNG)

5. Reflect - think about reasons why we would monitor the limit switch in our software vs why we would use the Talon’s auto-limiting feature. Are there any advantages or disadvantages to either approach? 

[Next: Let's Learn PID! ->](LLpid.md)

[Back to Main](../README.md)
