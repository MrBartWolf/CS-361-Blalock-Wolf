#include "system.h"
#include <stdio.h>

static int attempts = 0;

void get_order_size() 
{
    printf("Got an order of size = 0 items\n");
}

void reset_attempts() 
{
    printf("Invalid Payment-Attempts Reset to 0\n");
    attempts = 0;
}

void get_pymnt_method() 
{
    printf("Getting Payment Method\n");
}

int increment_attempts() 
{
    printf("Invalid Payment-Attempts Incremented to %d\n", (attempts+1));
    return ++attempts;
}

void payment_rejected() 
{
    printf("Payment Rejected\n");
}

void dispatch_factory_lines() 
{
    printf("Dispatching Factory Lines\n");
}

void shut_down_factory_lines() 
{
    printf("Shutting Down Factory Lines\n");
}

void charge_client() 
{
    printf("Client has been charged\n");
}

void get_address() 
{
    printf("Getting Ship-To Address\n");
}

void start_warranty() 
{
    printf("Warranty has started\n");
}

void refund() 
{
    printf("Refund Issued\n");
}

void update_stats(int order_status) 
{
    printf("Updating Statistics for ");
    switch (order_status)
    {
        case FAIL:
            printf("FAILED manufacturing\n");
            break;
        case LOST:
            printf("LOST packages\n");
            break;
        default:
            printf("SUCCESSFUL orders\n");
            break;
    }
} 
