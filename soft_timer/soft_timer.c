#include "soft_timer.h"

void *sleep_thread(void *v_arg)
{
    s_timer_t s_tmr;
    memcpy(&s_tmr, v_arg, sizeof(s_tmr));
    sleep(s_tmr.time);
    s_tmr.cb();
}

void soft_timer(int interval, TIMER_CB_FP function)
{
    s_timer_t *s_timer;
    s_timer = malloc(sizeof(s_timer_t));
    s_timer->time = interval,
    s_timer->cb = function;

    pthread_t async_timer;
    pthread_create(&async_timer, NULL, sleep_thread, s_timer);
    return;
}