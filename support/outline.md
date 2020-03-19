# Basics

### Thinking     
* Break down problem
* Code executes sequentially
* vars hold their value
* (little sister problem)

### Variables        
* ints
* doubles
* chars
* bools   
* #define
* formatting

### Functions        
* library functions (printf)
* user defined

### Logic        
* if/else   
* and `&&` or `||`  not `!`
* Comparisons
    * Greater Than `>` Less Than '<'
    * Equal to `==` Not Equal to `!=`
    * Greater Than or Equal to `>=`, Less Than or Equal to `<=`

### Loops
* while loop  
* for loop

### Objects      
* basic idea of an object
* Objects we'll use in robots
   * motor controllers (set speed, get encoder, etc)
   * joystick/controller (get button, get joystick, etc)
* Attributes (variables stored inside of the object)
* Methods (functions tied to the object, e.g. `motor->set()`)

# Robot!    

### Basic Subsystem  
* read button
* drive motor

### Basic Driving  
* read joystick(s)
* drive motors

### Intermediate Subsystem
* conditionals
* read buttons
* run motors / pneumatics
* use digital sensors (limit switch, light sensor, etc)

### Basic Auto
* use timing to control distances
* sequential instructions

### Beyond "Go": SparkMax & TalonSRX Libraries
* curent sensing/limiting
* read/use sensors
* motor modes

### Advanced Subsystem
* positional/velocity control (arm v shooter)
* use encoders
* tune PID loops

### Combining Steps
* Combine/modify commands
* keep track of states
* control multiple subsystems with one command

### Advanced Auto
* use encoders to drive specific distances
* read gyro/use to control turn angle
* combining instructions

### Advanced Controls
* "Cheesy Drive"
   * Constant Radius Turn
   * Quick Turn Button
   * Velocity Control (Feed Forward, PID)
