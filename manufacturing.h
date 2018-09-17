#ifndef manufacturing_h
#define manufacturing_h

#include "state.h"

static state_t* manufacture_failed();
static state_t* manufacture_completed();
static void     entry_to_manufacturing();
static void     exit_from_manufacturing();

#endif
