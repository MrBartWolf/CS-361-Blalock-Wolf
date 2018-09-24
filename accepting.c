//-----------------------------------------------------------------------------
//  Assignment  :   PA1-FSM
//  Date        :   09/24/2018
//
//  Author      :   PA1 Team 18
//
//  File Name   :   accepting.c
//-----------------------------------------------------------------------------

#include "accepting.h"
#include "system.h"
#include "statemodel.h" // For the other states

// Create the object of the accpeting state
state_t accepting = {
    order_received, // order_received
    default_event_handler, // invalid_payment
    default_event_handler, // valid_payment
    default_event_handler, // manufacture_failed
    default_event_handler, // manufacture_completed
    default_event_handler, // shipment_arrived
    default_event_handler, // shipment_lost
    default_action,    // entry_to
    default_action    // exit_from
};

state_t* order_received() {
    get_order_size();
    reset_attempts();
    return &processing;
}

