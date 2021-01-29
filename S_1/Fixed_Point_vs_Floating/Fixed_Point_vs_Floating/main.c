/*
 * Fixed_Point_vs_Floating.c
 *
 * Created: 1/22/2021 1:35:33 AM
 * Author : Abdelrahman_Magdy
 */ 
#define F_CPU 16000000UL
#include <avr/io.h>
#include <stdio.h>
#include "Fixed_VS_Float.h"

int main(void)
{
    	
	DDRC=0XFF;
	Fixed FIX= FLOAT2FIXED(Num);
	float flo =Num ;
	int TIMES =Sum_10000_Times(Num);
	
    while (1) 
    {
		Floating_sum(flo,TIMES);
		Fixed_Point_sum(FIX,TIMES);
		
    }
}

