//-----------------------------------------------------------------------------
//  Assignment  :   PA1-FSM
//  Date        :   09/24/2018
//
//  Author      :   PA1 Team 18
//
//  File Name   :   shipping.h
//-----------------------------------------------------------------------------

#ifndef shipping_h
#define shipping_h

#include "state.h"

// Declare all of the functions performed when in the shipping state
static state_t* shipment_arrived();
static state_t* shipment_lost();
static void     entry_to_shipping();

#endif
