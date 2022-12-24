#ifndef SOFT_TIMER_H
#define SOFT_TIMER_H

#include <pthread.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>

typedef void (*TIMER_CB_FP)();

typedef struct {
    unsigned int time;
    TIMER_CB_FP cb;
} s_timer_t ;

void soft_timer(int, TIMER_CB_FP);

#endif /* SOFT_TIMER_H */