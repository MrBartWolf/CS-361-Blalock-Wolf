//-----------------------------------------------------------------------------
//  Assignment  :   PA1-FSM
//  Date        :   09/24/2018
//
//  Author      :   PA1 Team 18
//
//  File Name   :   manufacturing.h
//-----------------------------------------------------------------------------

#ifndef manufacturing_h
#define manufacturing_h

#include "state.h"

static state_t* manufacture_failed();
static state_t* manufacture_completed();
static void     entry_to_manufacturing();
static void     exit_from_manufacturing();

#endif
