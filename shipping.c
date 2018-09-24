//-----------------------------------------------------------------------------
//  Assignment  :   PA1-FSM
//  Date        :   09/24/2018
//
//  Author      :   PA1 Team 18
//
//  File Name   :   shipping.c
//-----------------------------------------------------------------------------

#include "shipping.h"
#include "system.h"
#include "statemodel.h" // For the other states

// Create the object of the shipping state
state_t shipping = {
    default_event_handler, // order_recieved
    default_event_handler, // invalid_payment
    default_event_handler, // valid_payment
    default_event_handler, // manufacture_failed
    default_event_handler, // manufacture_completed
    shipment_arrived,      // shipment_arrived
    shipment_lost,         // shipment_lost
    entry_to_shipping,     // entry_to
    default_action         // exit_from
};

state_t* shipment_arrived() {
    start_warranty();
    update_stats(DONE);
    return &accepting;
} 

state_t* shipment_lost() {
    refund();
    update_stats(LOST);
    return &accepting;
}

void entry_to_shipping() {
    get_address();
}

