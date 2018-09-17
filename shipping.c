#include "acceping.h"
#include "system.h"
#include "statemodel.h" // For the other states

// Create the object of the accpeting state
state_t shipping = {
    default_event_handler, // order_recieved
    default_event_handler, // invalid_payment
    default_event_handler, // valid_payment
    default_event_handler, // manufacture_failed
    default_event_handler, // manufacture_completed
    shipment_arrived,      // shipment_arrived
    shipment_lost,         // shipment_lost
    entry_to_shipping,     // entry_to
    exit_from_shipping     // exit_from
};

state_t* shipment_arrived() {
    startWarranty();
    updateStats(DONE);
    return &accepting;
} 

state_t* shipment_lost() {
    refund();
    updateStats(LOST);
    return &accepting;
}

void entry_to_shipping() {
    getAddress();
}

void exit_from_shipping() {}
