#ifndef __TIMEBASE_H__
#define __TIMEBASE_H__
#include <stdint.h>
uint32_t get_tick(void);
void timebae_init(void);
void delay(uint32_t delay);
#endif

