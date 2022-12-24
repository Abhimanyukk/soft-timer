#include <stdio.h>
#include "soft_timer.h"

#define log(buff) printf("%s\n", buff)

void sleep_cb()
{
    log("Timer Callback");
}

int main()
{
    soft_timer(3, sleep_cb);
    while (1)
    {   
        log("Main loop");
        sleep(1);
    }
}