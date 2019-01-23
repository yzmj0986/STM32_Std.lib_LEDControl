#include "stm32f10x.h"
#include "led.h"

typedef unsigned int u32;

void delay(u32 i)
{
	while(i--);
}

int main()
{
	LED_Init();
	
	while(1)
	{
		GPIO_ResetBits(LED_PORT,GPIO_Pin_0);
		delay(0xfffff);
		GPIO_ResetBits(LED_PORT,GPIO_Pin_1);
		delay(0xfffff);
		GPIO_ResetBits(LED_PORT,GPIO_Pin_2);
		delay(0xfffff);
		GPIO_ResetBits(LED_PORT,GPIO_Pin_3);
		delay(0xfffff);
		GPIO_ResetBits(LED_PORT,GPIO_Pin_4);
		delay(0xfffff);
		GPIO_ResetBits(LED_PORT,GPIO_Pin_5);
		delay(0xfffff);
		GPIO_ResetBits(LED_PORT,GPIO_Pin_6);
		delay(0xfffff);
		GPIO_ResetBits(LED_PORT,GPIO_Pin_7);
		delay(0xfffff);
		
		GPIO_SetBits(LED_PORT,GPIO_Pin_7);
		delay(0xfffff);
		GPIO_SetBits(LED_PORT,GPIO_Pin_6);
		delay(0xfffff);
		GPIO_SetBits(LED_PORT,GPIO_Pin_5);
		delay(0xfffff);
		GPIO_SetBits(LED_PORT,GPIO_Pin_4);
		delay(0xfffff);
		GPIO_SetBits(LED_PORT,GPIO_Pin_3);
		delay(0xfffff);
		GPIO_SetBits(LED_PORT,GPIO_Pin_2);
		delay(0xfffff);
		GPIO_SetBits(LED_PORT,GPIO_Pin_1);
		delay(0xfffff);
		GPIO_SetBits(LED_PORT,GPIO_Pin_0);
		delay(0xfffff);
		
	}
	
}
