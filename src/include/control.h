/***************************************************************************
 * LPRng - An Extended Print Spooler System
 *
 * Copyright 1988-1999, Patrick Powell, San Diego, CA
 *     papowell@astart.com
 * See LICENSE for conditions of use.
 * $Id: control.h,v 5.2 1999/10/23 02:37:11 papowell Exp papowell $
 ***************************************************************************/


#ifndef _CONTROL_H_
#define _CONTROL_H_ 1

#define  OP_START		1
#define  OP_STOP		2
#define  OP_ENABLE		3
#define  OP_DISABLE		4
#define  OP_ABORT		6
#define  OP_KILL		7
#define  OP_HOLD		8
#define  OP_RELEASE		9
#define  OP_TOPQ		10
#define  OP_LPQ			11
#define  OP_LPRM		12
#define  OP_STATUS		13
#define  OP_REDIRECT	14
#define  OP_LPD			15
#define  OP_PRINTCAP	16
#define  OP_UP			17
#define  OP_DOWN		18
#define  OP_REREAD		19
#define  OP_MOVE		20
#define  OP_DEBUG		21
#define  OP_HOLDALL		22
#define  OP_NOHOLDALL	23
#define  OP_CLASS 		24
#define  OP_DEFAULTQ	25
#define  OP_ACTIVE		26
#define  OP_REDO		27
#define  OP_CLIENT		28
#define  OP_SERVER		29
#define  OP_MSG			30
#define  OP_DEFAULTS	31

/* PROTOTYPES */

int Get_controlword( char *s );
char *Get_controlstr( int c );

#endif
