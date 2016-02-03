/****************************************************************************
 *
 * MODULE:             msocket.c
 *
 * COMPONENT:          socket interface
 *
 * REVISION:           $Revision:  0$
 *
 * DATED:              $Date: 2016-01-04 17:04:13 $
 *
 * AUTHOR:             PCT
 *
 ****************************************************************************
 *
 * Copyright panchangtao@gmail.com 2016. All rights reserved
 *
 ***************************************************************************/

/****************************************************************************/
/***        Include files                                                 ***/
/****************************************************************************/
#include "msocket.h"
/****************************************************************************/
/***        Macro Definitions                                             ***/
/****************************************************************************/
#define DBG_SOCK 1
/****************************************************************************/
/***        Type Definitions                                              ***/
/****************************************************************************/

/****************************************************************************/
/***        Local Function Prototypes                                     ***/
/****************************************************************************/

/****************************************************************************/
/***        Exported Variables                                            ***/
/****************************************************************************/
extern uint8 verbosity;
/****************************************************************************/
/***        Local Variables                                               ***/
/****************************************************************************/

/****************************************************************************/
/***        Exported Functions                                            ***/
/****************************************************************************/
temSocketStatus mSocketInit(tsmSocket *psmSocket, int iPort, char *paNetAddress, bool_t isServer)
{
    DBG_vPrintf(DBG_SOCK, "mSocketInit\n");

    mSocketCheckNull(psmSocket, E_SOCKET_NULL);
    mSocketCheckNull(paNetAddress, E_SOCKET_NULL);
    signal(SIGPIPE, SIG_IGN);//ingnore signal interference
    if(isServer){
        
    } else {

    }
    return E_SOCKET_OK;
}


