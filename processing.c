#include "processing.h"
#include "system.h"
#include "statemodel.h"

state_t processing = {
    default_event_handler, // order_recieved
    invalid_payment,       // invalid_payment
    valid_payment,         // valid_payment
    default_event_handler, // manufacture_failed
    default_event_handler, // manufacture_completed
    default_event_handler, // shipment_arrived
    default_event_handler, // shipment_lost
    entry_to_processing,   // entry_to
    default_action    // exit_from
};

state_t* invalid_payment()
{
    if (increment_attempts() >= 3) {
        payment_rejected();
        return &accepting;
    }
    return &processing;
}

state_t* valid_payment()
{
    return &manufacturing;
}

void entry_to_processing()
{
    get_pymnt_method();
}

