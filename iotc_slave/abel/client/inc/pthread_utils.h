/****************************************************************************
 *
 * MODULE:             pthread_utils.h
 *
 * COMPONENT:          Utils interface
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


#ifndef __H_PTHREAD_UTILS_H_
#define __H_PTHREAD_UTILS_H_

#if defined __cplusplus
extern "C"{
#endif
/****************************************************************************/
/***        Include files                                                 ***/
/****************************************************************************/
#include <pthread.h>

/****************************************************************************/
/***        Macro Definitions                                             ***/
/****************************************************************************/

/****************************************************************************/
/***        Type Definitions                                              ***/
/****************************************************************************/
typedef void *(* ThreadProc)(void *);
 
typedef struct _Thread{
	pthread_t id;
	ThreadProc proc;
	void *arg;
	bool_t flag;
}Thread;

/****************************************************************************/
/***        Local Function Prototypes                                     ***/
/****************************************************************************/

/****************************************************************************/
/***        Exported Variables                                            ***/
/****************************************************************************/

/****************************************************************************/
/***        Local Variables                                               ***/
/****************************************************************************/

/****************************************************************************/
/***        Exported Functions                                            ***/
/****************************************************************************/
eRetStatus DetachedThreadInit(Thread *th);




#if defined __cplusplus
}
#endif
#endif

