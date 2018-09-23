#include "manufacturing.h"
#include "system.h"
#include "statemodel.h"

state_t manufacturing = {
    default_event_handler,
    default_event_handler,
    default_event_handler,
    manufacture_failed,
    manufacture_completed,
    default_event_handler,
    default_event_handler,
    entry_to_manufacturing,
    exit_from_manufacturing
};

state_t* manufacture_failed()
{
    exit_from_manufacturing();
    update_stats(FAIL);
    return &accepting;
}

state_t* manufacture_completed()
{
    exit_from_manufacturing();
    charge_client();
    return &shipping;
}

void entry_to_manufacturing()
{
    dispatch_factory_lines();
}

void exit_from_manufacturing()
{
    shut_down_factory_lines();
}
