#ifndef __RLED_H__
#define __RLED_H__

#include "common.h"

#define MACR_SYS_STATUS_LED		MACR_RLED_LED0

void Sys_Rled_On(u32 led_type);
void Sys_Rled_Off(u32 led_type);

#endif
