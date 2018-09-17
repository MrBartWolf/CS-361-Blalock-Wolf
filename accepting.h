#ifndef accepting_h
#define accepting_h 

#include "state.h"

// Declare all of the functions performed when in the shipping state
static state_t* order_received();
static void     entry_to_accepting();
static void     exit_from_accepting();
