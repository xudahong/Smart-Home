#ifndef __HAL_LED_H__
#define __HAL_LED_H__

#include "common.h"

#define MACR_RLED_LED0		0
#define MACR_RLED_LED1		1
#define MACR_RLED_LED2		2

void Hal_LED_Init(void);
void Hal_RLed_ON(u32 rled);
void Hal_RLed_OFF(u32 rled);

#endif
