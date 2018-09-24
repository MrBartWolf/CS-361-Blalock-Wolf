//-----------------------------------------------------------------------------
//  Assignment  :   PA1-FSM
//  Date        :   09/24/2018
//
//  Author      :   PA1 Team 18
//
//  File Name   :   system.h
//-----------------------------------------------------------------------------

#ifndef system_h
#define system_h

static int attempts;
typedef enum
{
    DONE,
    LOST,
    FAIL
} order_status;

typedef enum
{
    ORDER_RECEIVED,
    INVALID_PAYMENT,
    VALID_PAYMENT,
    MANUFACTURE_FAILED,
    MANUFACTURE_COMPLETED,
    SHIPMENT_LOST,
    SHIPMENT_ARRIVED,
    NUMBER_OF_EVENTS
} event;
#define INVALID_EVENT -1

void get_order_size();
void reset_attempts();
void get_pymnt_method();
int increment_attempts();
void payment_rejected();
void dispatch_factory_lines();
void shut_down_factory_lines();
void charge_client();
void get_address();
void start_warranty();
void refund();
void update_stats(int order_status);

#endif
