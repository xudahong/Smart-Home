#include "rled.h"
#include "hal_led.h"

void Sys_Rled_On(u32 led_type)
{
	Hal_RLed_ON(led_type);
}

void Sys_Rled_Off(u32 led_type)
{
	Hal_RLed_ON(led_type);
}

