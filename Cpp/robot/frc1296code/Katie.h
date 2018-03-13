/** \file
 * Example of Katie task declaration.
 *
 */
#ifndef KATIE_H
#define KATIE_H

/**
	A template class for creating new components
 */
#include <ComponentBase.h>			//For ComponentBase class
#include <pthread.h>
#include <string>

//Robot
#include "WPILib.h"


class Katie : public ComponentBase
{
public:
	Katie();
	virtual ~Katie();
	static void *StartTask(void *pThis, const char* szKatie, int iPriority)
	{
		pthread_setname_np(pthread_self(), szKatie);
		pthread_setschedprio(pthread_self(), iPriority);
		((Katie *)pThis)->DoWork();
		return(NULL);
	}

private:
	void OnStateChange();
	void Run();
};

#endif			//COMPONENT_H
