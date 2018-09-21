#ifndef system_h
#define system_h

private static int attempts = 0;
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

void get_order_size() {}
void payment_rejected() {}
void charge_client() {}
void start_warranty() {}
void refund() {}
void dispatch_factory_lines() {}
void shut_down_factory_lines() {}
void get_address() {}


void reset_attempts()
{
    attempts = 0;
}

void increment_attempts()
{
    attempts++;
}


