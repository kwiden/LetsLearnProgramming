## Let's Learn Tank Drive!

**Objectives** - Read joystick input, control motors, become more comfortable with creating variables and using objects.

**Starting Point** - Create a new project.

**Process** - 
Before we write the drivetrain code, lets get familiar with the robot template and the objects we will be using:

_Robot Template_:

There are three and a half sections we will be using:
First, we have the **declaration** of the robot object. Below this is where we declare our variables. We can only declare variable in this space to tell the computer that we want to use them. We can’t write any instructions here.

Second, we have **robot_init**, which is where we will initialize our variables. This code will be called once.

Thirdly, we have **teleop_periodic**. This code will be called over and over again while in teleop mode. This is where we tell motors to run.

The half section is at the very top and is where all the lines with “#include” are - we’ll call this the **header section** because we are #including files ending in “.h” which indicated that they are header files. This is where we tell the computer we will be using various libraries.  I’ll be referring to where to put code by the location names (bolded), make sure you know where they are before continuing.

**Objects**:

The first object we will use is the Joystick object. We have to tell the computer we are using this object by writing in the **header section**:

```	#include “Joystick.h” ```

Next we need to declare our joystick. This is where we tell our code that we are going to be using a controller(called a Joystick) and what we want to call it, but we don’t tell it anything else. Below the **declaration**, add the line:

```	Joystick* j1;```
	
I named my Joystick object “j1” but you call yours whatever you’d like (within the limits of variable names). We put the * after the object type for computer-memory management reasons that we don’t care about right now.
	
	
Lastly, we need to initialize our joystick. Go to **robot_init**, and add the line:

```	j1 = new Joystick(0); ```
	
Remember to make sure the name at the beginning matches the name you gave it in the declaration. We use the keyword “new” to tell the computer we want to make a new object. If you want to know why we put a 0 in the parenthesis, ask Katie as she can show you why (it’s not well explained via text).

The second object we will be using is the speed controller, which controls the motor. 1296 uses Talons that we talk to via a CAN Bus (briefly explained in a moment). To let our code know we will be using it, we need to include “CANTalon.h” in the **header section**.
	
Next we need to declare a CANTalon below the **declaration,** I called mine motor1:
	
``` CANTalon* motor1; ```
	
Whenever we declare an object, we will need to use the ‘*’. Lastly, we need to initialize our CANTalon in robot_init:

```	motor1 = new CANTalon(8); ```
	
So why did we use 8? The CAN bus works like passing notes in class. At the beginning of the note, there is a name. You pass the note to the person sitting next to you and if their name is on the note, they read it, otherwise they pass is to the next person… until it gets to the right person. Instead of giving the talons names, we assign them ID numbers and the process works the exact same. 8 is the ID of the motor that controls the gear intake. If we wanted to control a different motor, we would find its ID and put that number in the parenthesis. 

	
Let’s make a motor move! Navigate in the code to **teleop_periodic**. There are two things we need to do to make the motor move:

1) **Get the input from the joystick**. The joystick returns a decimal value between -1 and 1 where 1 is pushed fully forward and -1 is pulled all the way back.

To get input from the joystick, we’ll need this command, which will return a number between -1 and 1:

```	j1->GetRawAxis(axis_ID) ```

I recommend making a variable (which variable type holds numbers with decimal points?) to set equal to what it returns. What should you put instead of “axis_ID”? This is the number ID of the joystick axis you want to read. Ask Katie and she will show you where to find it.


2) **Give that input to the motor**. The motor intakes a value between -1 (full speed back) and 1 (full speed forward). 0 is no speed. 

To set the speed of the motor, we’ll need this command:

```	motor1->Set(motor_percent)```

This command doesn’t return anything. The value in the parenthesis, “motor_percent”, is what speed (percentage) you want to set the motor to. This should be the value _returned_ from controller->GetRawAxis() command. 


Once you think you have it right, right click on your project name and click “Build Project” - alternatively you can hit ctrl-b. At the bottom on the screen is the “console”. If everything went right, it should “build succeeded.” There will be some lines about missing gcc or g++ or something like that, don’t worry about those. There may be other errors written in red - that means something in your code is wrong. Ask for help to fix these. 


Once it looks like it’s building successfully (feel free to ask if you need), we need to put the code on the robot. Make sure you are connected to the robot via wifi or tether - the driver station is a good way to check your connection to the robot. If you aren’t connected, double check under the settings in the driver station that you are trying to connect to the right team number (practice bot is 1297, kiwibot is 1299, comp bot is 1296). If you still are connected, ask for help. 

Back in eclipse, go to Window->preferences->WPILib, and make sure that the team number is listed as the team number for the robo-rio . If the number is wrong, update it and click “apply”. Then click “ok”.

Right click on your project and click “Run As” -> “Robot C++ Deploy”. There will be a lot of text scrolling through in the console. If everything goes well, there will be a message about success. You should now be able to enable the robot on the driver station and control the motor with your joystick! Woo!

Ok, now that we’re feeling good about controlling motors - lets try making motors follow each other. If you think about our drivetrain, we have two motors working together on each side. If we had to write “motor->set()” for every motor, it would get repetitive. So instead, we can make one motor “follow” the other - it follows all the same commands as the motor its following.

Just to demonstrate that this works, let’s make the climber follow the gear intake. First we need to create another CANTalon. This time it’s ID will be 6. Remember to declare it and then initialize it. 

After initializing it, still in robot init, we’ll need to set its mode so that it will be a follower. We do this with the command “SetControlMode()”. We’ll need to give SetControlMode() a new mode inside the parenthesis - the follow mode. It’ll look something like this:

```	my_motor->SetControlMode(CANSpeedController::kFollower);```

“kFollower” is the mode type, and we put “CANSpeedController::” in front of it to tell the computer where kFollower is defined. It’s a similar idea to how we import libraries.

Still in robot init, we need to tell the climber which motor its following. We’ll use the Set() function for that. **Wait, but that’s we used to set the speed!** Yup, because we were in a different control mode for that motor. In follow mode, you use Set() to say which motor to follow and not how fast to go. So, instead of giving Set() the value of the Joystick, instead you’re going to give it the CANTalon ID of the motor to follow:

```	my_motor->Set(8); //we used 8 because that’s the ID of the gear intake```

Build the project and deploy it to the robot! Notice what happens.


By now, you’re a pro at controlling motors. So, using the ideas from before lets see what you can do with less instruction. Now you’re going to implement tank drive! Go!


It seemed to cruel to give you no help, so here’s the rough outline:

``` 
Declare and initialize 4 CANTalon objects for the 4 motors. 
The left motors are ID 1 and 2, and the right are 3 and 4. 
Set up two motors to follow the other motors. 
Be careful not to mix up sides, we don’t want to destroy the motors or the gearboxes. 
Before we used one axis on the joystick and now we need to use two. 
You only need one Joystick object, you just need to read multiple axis.
Use the left axis to drive the left motors and the right axis to drive the right motor.
Test your code - does it work the way you expected?
Fix anything that behaves wrong.
Tada! 
```


If time permits, try arcade drive. I don’t want to give you all the answers, so I’ll leave you with this diagram:

*diagram to be added*

Make sure that when you add the axis, the number doesn’t exceed 1 (or go below -1). You can use an if-statement to check and correct it (if it's greater than 1/less than -1, set the value to 1 or -1). 

[Back to Main](../readme.md)
