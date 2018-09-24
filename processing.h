//-----------------------------------------------------------------------------
//  Assignment  :   PA1-FSM
//  Date        :   09/24/2018
//
//  Author      :   PA1 Team 18
//
//  File Name   :   processing.h
//-----------------------------------------------------------------------------

#ifndef processing_h
#define processing_h

#include "state.h"

static state_t* invalid_payment();
static state_t* valid_payment();
static void     entry_to_processing();

#endif
