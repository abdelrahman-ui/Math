#include <stdio.h>
#include <stdlib.h>

#define NUM_OF_STATE 3


void red_on(void);
void green_on(void);
void yellow_on(void);



int main()
{
    void (*ptr[NUM_OF_STATE])(void) = {red_on,yellow_on,green_on};
    int press=0;
   printf("Press To Start The Finit State machine \n");
   scanf("%d",&press);

  while(press)
  {
      for(int i =0 ;i<=NUM_OF_STATE;i++)
      {
          printf("now \n");
        ptr[i]  ;

      }
  }
    return 0;
}


void red_on(void)
{
    printf("Red is On and green of and yellow off");
}
void green_on(void)
{
    printf("Red is On and green oon and yellow off");
}
void yellow_on(void)
{
    printf("Red is On and green oon and yellow on");
}
