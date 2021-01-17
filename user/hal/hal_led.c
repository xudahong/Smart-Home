#include "hal_led.h"

#define MACR_RLED_ON		0
#define MACR_RLED_OFF		1

void Hal_LED_Init(void)
{
	 //  ��ƹܽ�ΪPF8(LED0),PF9(LED1) ,PF10(LED2)
	RCC->AHB1ENR |= (0x1 << 5);		// ����GPIO5ʱ��
	
	//LED0				PF8
	GPIOF->MODER |= 0x1 << 16;			// ͨ�����ģʽ
	GPIOF->PUPDR &= ~(0x3 << 16);		// ��������ģʽ
	GPIOF->OSPEEDR &= ~(0x1 << 16);		// ����Ϊ����(25M)
	
	//LED1				PF9
	GPIOF->MODER |= 0x1 << 18;			// ͨ�����ģʽ
	GPIOF->PUPDR &= ~(0x3 << 18);		// ��������ģʽ
	GPIOF->OSPEEDR &= ~(0x1 << 18);		// ����Ϊ����(25M)
	
	//LED2				PF10
	GPIOF->MODER |= 0x1 << 20;			// ͨ�����ģʽ
	GPIOF->PUPDR &= ~(0x3 << 20);		// ��������ģʽ
	GPIOF->OSPEEDR &= ~(0x1 << 20);		// ����Ϊ����(25M)
	
	// ��ʼ���ܽ�(�͵�ƽ��ͨ)
	GPIOF->ODR = 0;
	GPIOF->ODR |= (0x7 << 8);	// ��ʼ��PF8,9,10Ϊ�ߵ�ƽ
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
