//-----------------------------------------------------------------------------
//  Assignment  :   PA1-FSM
//  Date        :   09/24/2018
//
//  Author      :   PA1 Team 18
//
//  File Name   :   state.h
//-----------------------------------------------------------------------------

#ifndef state_h
#define state_h

// Add an alias for a type to the global name space.
typedef struct state    state_t ; 

// Add an alias for event handlers.
typedef      state_t *   event_handler(void);
 
// Add an alias for actions.
typedef      void        action(void);

// Define the format of a state struct.
struct state {
  event_handler*  order_recieved;
  event_handler*  invalid_payment;
  event_handler*  valid_payment;
  event_handler*  manufacture_failed;
  event_handler*  manufacture_completed;
  event_handler*  shipment_arrived;
  event_handler*  shipment_lost;
  action*         entry_to;
  action*         exit_from;
};

// Declare the default event handler and the default action. 
// They are extern because they are used in each
// of the individual state files but defined in state.c.
extern state_t *  default_event_handler();
extern void       default_action();

#endif


