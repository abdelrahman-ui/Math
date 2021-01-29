#include <stdio.h>
#include <stdlib.h>

#define NUM_OF_STATE 3


void red_on(void);
void green_on(void);
void yellow_on(void);



int main()
{
    void (*ptr[NUM_OF_STATE])(void) = {red_on,yellow_on,green_on};
    int i=0 ;

  while(1)
  {
   ptr[i]();
   i++;
   if(i==NUM_OF_STATE)
    i=0;

  }
    return 0;
}


void red_on(void)
{
    printf("Red is On and green of and yellow off\n");
}
void green_on(void)
{
    printf("Red is On and green on and yellow off\n");
}
void yellow_on(void)
{
    printf("Red is On and green on and yellow on\n");
}
