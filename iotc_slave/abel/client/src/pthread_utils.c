/****************************************************************************
 *
 * MODULE:             pthread_utils.c
 *
 * COMPONENT:          pthread Utils interface
 *
 * REVISION:           $Revision:  0$
 *
 * DATED:              $Date: 2015-11-06 15:13:17 +0100 (Thu, 21 Oct 2015 $
 *
 * AUTHOR:             Abel
 *
 ****************************************************************************
 *
 * Copyright IOTC Project Group 2015. All rights reserved
 *
 ***************************************************************************/

/****************************************************************************/
/***        Include files                                                 ***/
/****************************************************************************/
#include <pthread.h>

#include "utils.h"
#include "pthread_utils.h"
/****************************************************************************/
/***        Macro Definitions                                             ***/
/****************************************************************************/

/****************************************************************************/
/***        Local Function Prototypes                                     ***/
/****************************************************************************/

/****************************************************************************/
/***        Local Variables                                               ***/
/****************************************************************************/

/****************************************************************************/
/***        Exported Functions                                            ***/
/****************************************************************************/
eRetStatus DetachedThreadInit(Thread *th)
{
	pthread_attr_t attr;

	pthread_attr_init(&attr);
	pthread_attr_setdetachstate(&attr, PTHREAD_CREATE_DETACHED);

	th->flag = T_TRUE;
	if(-1 == pthread_create(&(th->id), &attr, th->proc, th))
	{
		ERR_vPrintf(T_TRUE, "Creat detached pthread failed\n");
		th->flag = T_FALSE;
		pthread_attr_destroy(&attr);
		return E_ERROR;
	}

	pthread_attr_destroy(&attr);

	return E_OK;
}


