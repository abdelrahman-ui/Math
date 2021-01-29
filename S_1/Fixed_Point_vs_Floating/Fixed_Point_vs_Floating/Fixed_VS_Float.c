/*
 * Fixed_VS_Float.c
 *
 * Created: 1/22/2021 3:46:52 AM
 *  Author: Abdelrahman_Magdy
 */ 
#include "Fixed_VS_Float.h"
void Fixed_Point_sum(Fixed FIX ,int times)
{
	
	Fixed SUM_FIX =0 ;
	for(int i =0; i <times;i++ )
	{
		SUM_FIX+=FIX;
	}
	PORTC^=(1<<SUM_FIX_LED);
	
}



void Floating_sum(float flo ,int times)
{
	float sum =0 ;
	for(int i =0; i <times;i++ )
	{
		sum+=flo;
	}
	PORTC^=(1<<SUM_FLO_LED);
	
	
}


void Fixed_Point_MUL(Fixed FIX ,int times)
{
	
	Fixed MUL_FIX =1 ;
	for(int i =0; i <times;i++ )
	{
		MUL_FIX*=FIX;
	}
	PORTC^=(1<<MUL_FIX_LED);
	
}


void Floating_MUL(float flo ,int times)
{
	float MUL_flo =1 ;
	for(int i =0; i <times;i++ )
	{
		MUL_flo*=flo;
	}
	PORTC^=(1<<MUL_FLO_LED);
	
}