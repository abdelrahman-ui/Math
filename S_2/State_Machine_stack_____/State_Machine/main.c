/*
 * State_Machine.c
 *
 * Created: 1/29/2021 12:57:08 AM
 * Author : Abdelrahman_Magdy
 */ 

#include <avr/io.h>
#define  Ture  1
#define  False 0

void Push(int var);
void Pop(void);
int Top_Val(void);
int IsEmpty(void);

int array[100];
int top=-1;




int main(void)
{
	Push(1);
	Push(5);
	Push(2);
	while (!IsEmpty())
	{
		Top_Val();
		Pop();
	}
}

void Push(int var)
{
	if (top ==99)
	return ;
	top++;
	array[top]=var;

}
void Pop(void)
{
	if(IsEmpty()) return ;
	top--;

}
int Top_Val()
{
	if(IsEmpty())
	return -1 ;
	else
	return array[top];
}
int IsEmpty(void)
{
	if(top==-1)
	return Ture;
	else
	return False;
}
