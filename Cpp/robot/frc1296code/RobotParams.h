/** \file
 *  Defines task parameters, hardware assignments and controller button/axis assignment.
 *
 * This header contains basic parameters for the robot. All parameters must be constants with internal
 * linkage, otherwise the One Definition Rule will be violated.
 */

// TODO: please go over these items with a knowledgeable mentor and check to see what we need/don't need
#ifndef ROBOT_PARAMS_H
#define ROBOT_PARAMS_H

//Robot Params
const char* const ROBOT_NAME =		"RhsRobot2017";	//Formal name
const char* const ROBOT_NICKNAME =  "Unknown";		//Nickname
const char* const ROBOT_VERSION =	"0.5";			//Version


//Task Params - Defines component task priorites relative to the default priority.
//EXAMPLE: const int DRIVETRAIN_PRIORITY = DEFAULT_PRIORITY -2;
const int DEFAULT_PRIORITY    = 50;
const int COMPONENT_PRIORITY 	= DEFAULT_PRIORITY;
const int KATIE_PRIORITY      = DEFAULT_PRIORITY;

//Task Names - Used when you view the task list but used by the operating system
//EXAMPLE: const char* DRIVETRAIN_TASKNAME = "tDrive";
const char* const COMPONENT_TASKNAME	= "tComponent";
const char* const KATIE_TASKNAME	= "tKatie";

//TODO change these variables throughout the code to PIPE or whatever instead  of QUEUE
//Queue Names - Used when you want to open the message queue for any task
//NOTE: 2015 - we use pipes instead of queues
//EXAMPLE: const char* DRIVETRAIN_TASKNAME = "tDrive";

const char* const COMPONENT_QUEUE 	= "/tmp/qComp";
const char* const KATIE_QUEUE 	= "/tmp/qKatie";


//PWM Channels - Assigns names to PWM ports 1-10 on the Roborio
//EXAMPLE: const int PWM_DRIVETRAIN_FRONT_LEFT_MOTOR = 1;

//CAN IDs - Assigns names to the various CAN IDs
//EXAMPLE: const int CAN_PDB = 0;
/** \page motorID Motor Controller IDs
 * \verbatim
0 - PDB
1 - left drive motor
2 - right drive motor
Add more as needed.
 \endverbatim
 */
 
 //Add your motor IDs here

const int CAN_PDB = 19;
const int CAN_CLIMBER_MOTOR = 5;


/*****************************************/
// Logitech 310

#define L310_BUTTON_A				1
#define L310_BUTTON_B				2
#define L310_BUTTON_X				3
#define L310_BUTTON_Y				4
#define L310_BUTTON_BUMPER_LEFT		5
#define L310_BUTTON_BUMPER_RIGHT	6
#define L310_BUTTON_BACK			7
#define L310_BUTTON_START			8
#define L310_BUTTON_THUMB_LEFT		9
#define L310_BUTTON_THUMB_RIGHT		10

#define L310_THUMBSTICK_LEFT_X		0
#define L310_THUMBSTICK_LEFT_Y		1
#define L310_THUMBSTICK_RIGHT_X		4
#define L310_THUMBSTICK_RIGHT_Y		5

#define L310_POV					1   //D-pad

#define L310_TRIGGER_LEFT			2	// value > 0
#define L310_TRIGGER_RIGHT			3	// value < 0

/***********************************************/

//pController_1 is assuming that I named my cotroller pController_1 -> change to be whatever you named your controller
#define TANK_DRIVE_LEFT				(pController_1->GetRawAxis(L310_THUMBSTICK_LEFT_Y))
#define TANK_DRIVE_RIGHT			(-pController_1->GetRawAxis(L310_THUMBSTICK_RIGHT_Y))

#define KATIE_BUTTON					(pController_1->GetRawButton(L310_BUTTON_A))


#endif //ROBOT_PARAMS_H
