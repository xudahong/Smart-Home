#include "hal_led.h"

#define MACR_RLED_ON		0
#define MACR_RLED_OFF		1

void Hal_LED_Init(void)
{
	 //  红灯管脚为PF8(LED0),PF9(LED1) ,PF10(LED2)
	RCC->AHB1ENR |= (0x1 << 5);		// 开启GPIO5时钟
	
	//LED0				PF8
	GPIOF->MODER |= 0x1 << 16;			// 通用输出模式
	GPIOF->PUPDR &= ~(0x3 << 16);		// 无上下拉模式
	GPIOF->OSPEEDR &= ~(0x1 << 16);		// 配置为中速(25M)
	
	//LED1				PF9
	GPIOF->MODER |= 0x1 << 18;			// 通用输出模式
	GPIOF->PUPDR &= ~(0x3 << 18);		// 无上下拉模式
	GPIOF->OSPEEDR &= ~(0x1 << 18);		// 配置为中速(25M)
	
	//LED2				PF10
	GPIOF->MODER |= 0x1 << 20;			// 通用输出模式
	GPIOF->PUPDR &= ~(0x3 << 20);		// 无上下拉模式
	GPIOF->OSPEEDR &= ~(0x1 << 20);		// 配置为中速(25M)
	
	// 初始化管脚(低电平导通)
	GPIOF->ODR = 0;
	GPIOF->ODR |= (0x7 << 8);	// 初始化PF8,9,10为高电平
}

void Hal_RLed_ON(u32 rled)
{
	if (rled == MACR_RLED_LED0)
	{
		PFout(8) = MACR_RLED_ON;
	}
	else if (rled == MACR_RLED_LED1) 
	{
		PFout(9) = MACR_RLED_ON;
	}
	else if (rled == MACR_RLED_LED2)
	{
		PFout(10) = MACR_RLED_ON;
	}
	else
	{
		return;
	}
}

void Hal_RLed_OFF(u32 rled)
{
	if (rled == MACR_RLED_LED0)
	{
		PFout(8) = MACR_RLED_OFF;
	}
	else if (rled == MACR_RLED_LED1) 
	{
		PFout(9) = MACR_RLED_OFF;
	}
	else if (rled == MACR_RLED_LED2)
	{
		PFout(10) = MACR_RLED_OFF;
	}
	else
	{
		return;
	}
}
