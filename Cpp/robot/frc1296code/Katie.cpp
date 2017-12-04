/** \file
 * Example of Katie Subsystem
 */

#include <Katie.h>
#include <Component.h>
#include <ComponentBase.h>
#include <RobotParams.h>
#include "WPILib.h"

//Robot

Katie::Katie()
: ComponentBase(KATIE_TASKNAME, KATIE_QUEUE, KATIE_PRIORITY)
{
	//TODO: add member objects
	pTask = new std::thread(&Katie::StartTask, this, KATIE_TASKNAME, KATIE_PRIORITY);
	wpi_assert(pTask);
};

Katie::~Katie()
{
	//TODO delete member objects
	delete(pTask);
};

void Katie::OnStateChange()	
{
};

void Katie::Run()
{
	switch(localMessage.command)			//Reads the message command
	{
	//TODO add command cases for Component
		case COMMAND_COMPONENT_TEST:
			break;

		default:
			break;
		}
};
