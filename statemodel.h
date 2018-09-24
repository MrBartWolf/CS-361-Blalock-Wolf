//-----------------------------------------------------------------------------
//  Assignment  :   PA1-FSM
//  Date        :   09/24/2018
//
//  Author      :   PA1 Team 18
//
//  File Name   :   statemodel.h
//-----------------------------------------------------------------------------

#ifndef statemodel_h
#define statemodel_h

#include <stdlib.h>
#include <stdio.h>
#include "system.h"
#include "state.h"

extern state_t accepting;
extern state_t processing;
extern state_t manufacturing;
extern state_t shipping;

void printStateName(void);
void handle_event(event current_event);

#endif
