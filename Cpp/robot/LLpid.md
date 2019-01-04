## Let's Learn PID
[<- Previously: Let's Get Some Gears!](LLGears.md)

**Objectives** : Learn about PID loops, practice tuning PID loops ,read buttons to set position, use the can talon's positional encoder, tune can talon's PID loops 


**Task**: Implement positional arm control.


**Starting Point** - Your code from last time.

**Process** - 

1. Learn about PID loops from Katie. 

2. Practice tuning loops on [here](https://sites.google.com/site/fpgaandco/pid).

3. Control the arm motor.

4. Learn how to read encoder values. Use your resourced from CTRE to find what methods you will need to use.
  
    Methods you will use:
  ```cpp
   motor->SetTalonControlMode(CANTalon::kPositionMode); // We will need to set the motor to position mode
   motor->GetPulseWidthPosition(); //This will give you the absolute position in ticks. There are 4096 ticks in a rotation
   motor->Set(); //We will set the position of the motor using the set command. This expects an absolute position in rotations (not ticks).
   ```

5. Find the encoder values (relative to fully retracted) of the different positions.

6. Use the Talon function that tells the motor to go to an encoder value. Confirm with Katie before testing.

7. Create an init command that uses current limiting to 0 the arm in the fully retracted state.

8. Create commands for each position.

9. PID Tuning - Work with Katie

10. Minor Adjustments. Allow the operator do small adjustments outside of the positional control that will update the offset of the current position.


**Want more PID loops? [Write your own PID loops for these simulators](https://janismac.github.io/ControlChallenges/).**

[Back to Main](../../README.md)
