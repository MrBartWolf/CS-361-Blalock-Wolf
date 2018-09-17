#include "processing.h"
#include "statemodel.h"

state_t processing = {
    default_event_handler,
    invalid_payment,
    valid_payment,
    default_event_handler,
    default_event_handler,
    default_event_handler,
    default_event_handler,
    entry_to_processing,
    exit_from_processing
};

state_t* invalid_payment()
{
    return @processing;
}

state_t* valid_payment()
{
    return @manufacturing;
}

void entry_to_processing()
{
    get_pymnt_method();
}

void exit_from_processing()
{}
