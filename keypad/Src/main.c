#include<stdio.h>     // 4*4 keypad interface
#include<stdint.h>
#include "keypad.h"
void delay(uint32_t );
int main()
{
	 RCC_AHB1ENR_t volatile*const ptrclk     = ( RCC_AHB1ENR_t*)   0X40023830;
	 gpio_mode     volatile*const ptrmode    = ( gpio_mode*    )   0x40020C00;
	 gpio_output   volatile*const ptroutput  = ( gpio_output*  )   0x40020C14;
	 pullupdown    volatile*const ptrpull    = ( pullupdown*   )   0x40020C0C;
	 gpio_input    volatile*const ptrinput   = ( gpio_input*   )   0x40020C10;
        ptrclk->gpio_den=1;

        ptrmode->MODER0		=0;
	ptrmode->MODER1		=0;
	ptrmode->MODER2		=0;
	ptrmode->MODER3		=0;
	ptrmode->MODER8		=1;
	ptrmode->MODER9 	=1;
        ptrmode->MODER10 	=1;
        ptrmode->MODER11 	=1;
        ptrpull->PUPDR0		=2;
	ptrpull->PUPDR1		=2;
	ptrpull->PUPDR2		=2;
	ptrpull->PUPDR3		=2;
	while(1)
	{
		delay(30000);//BUTTON DEBOUNCE **STOP**
		ptroutput->odr8=0;
		ptroutput->odr11=1;
		if(ptrinput->ODR3)
			printf("1\n");
		else if (ptrinput->ODR2)
			printf("2\n");
		else if (ptrinput->ODR1)
			printf("3\n");
		else if (ptrinput->ODR0)
			printf("#\n");
		 else{
		ptroutput->odr11=0;
		ptroutput->odr10=1;
		if(ptrinput->ODR3)
		printf("4\n");
		else if (ptrinput->ODR2)
			printf("5\n");
		else if (ptrinput->ODR1)
			printf("6\n");
		else if (ptrinput->ODR0)
		printf("*\n");
		else{
		ptroutput->odr10=0;
		ptroutput->odr9=1;
		if(ptrinput->ODR3)
			printf("7\n");
		else if (ptrinput->ODR2)
			printf("8\n");
		else if (ptrinput->ODR1)
			printf("9\n");
		else if (ptrinput->ODR0)
			printf("A\n");
		else{
		ptroutput->odr9=0;
		ptroutput->odr8=1;
		if(ptrinput->ODR3)
			printf("B\n");
		else if (ptrinput->ODR2)
			printf("C\n");
		else if (ptrinput->ODR1)
			printf("D\n");
		else if (ptrinput->ODR0)
			printf("&\n");
		}
		}
		 }


	}
}
void delay(uint32_t max)
{
	uint32_t dump;
	for(int i=0;i<=max;i++)
	{
		dump++;
	}
}
