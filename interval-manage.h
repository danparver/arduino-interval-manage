#include <Arduino.h>

typedef unsigned long SYSTICK;

#define get_sys_ticks()                          millis()
#define systmr_set_timemark(my_var)              (my_var = millis())
#define systmr_check_interval(my_var, interval)  ((millis() - my_var) >= interval)
