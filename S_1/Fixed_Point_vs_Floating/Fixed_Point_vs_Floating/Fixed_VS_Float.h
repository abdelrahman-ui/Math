/*
 * Fixed_VS_Float.h
 *
 * Created: 1/22/2021 3:47:09 AM
 *  Author: Abdelrahman_Magdy
 */ 


#ifndef FIXED_VS_FLOAT_H_
#define FIXED_VS_FLOAT_H_

#define F_CPU 16000000UL
#include <avr/io.h>
#include <stdio.h>
#include <util/delay.h>
typedef int Fixed;

#define FRACT_BITS 16
#define FRACT_BITS_D2 8
#define FIXED_ONE (1 << FRACT_BITS)
#define INT2FIXED(x) ((x) << FRACT_BITS)
#define FLOAT2FIXED(x) ((int)((x) * (1 << FRACT_BITS)))
#define FIXED2INT(x) ((x) >> FRACT_BITS)
#define FIXED2DOUBLE(x) (((double)(x)) / (1 << FRACT_BITS))
#define MULT(x, y) ( ((x) >> FRACT_BITS_D2) * ((y)>> FRACT_BITS_D2) )

#define Num    10.35
#define  Sum_10000_Times(Num)  (Num*10000000)

#define  SUM_FIX_LED PC0
#define  SUM_FLO_LED PC1
#define  MUL_FIX_LED PC2
#define  MUL_FLO_LED PC3
#define  DIV_FIX_LED PC4
#define  DIV_FLO_LED PC5

void Fixed_Point_sum(Fixed FIX ,int times);
void Floating_sum(float flo ,int times);
void Fixed_Point_MUL(Fixed FIX ,int times);
void Floating_MUL(float flo ,int times);
#endif /* FIXED_VS_FLOAT_H_ */