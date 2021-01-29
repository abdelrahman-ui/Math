#include <stdio.h>
#include <stdlib.h>
#define  Ture  1
#define  False 0


void ds_d(void);
void ds_d_1(void);
void ds_d_2(void);
void Push(void *var);
 void Pop(void);
 int Top_Val(void);
 int IsEmpty(void);

	void (*ptr[100])(void);
	 int top=-1;

int main(void)
{

    ptr[0]= ds_d;
    ptr[1]=ds_d_1;
    ptr[2]=ds_d_2;
    push(*ptr);

}




 void ds_d(void)
 {
     printf("sjhs\n");
 }
 void ds_d_1(void)
 {
     printf("sjcscschs\n");
 }
  void ds_d_2(void)
 {
     printf("scscscss\n");
 }




  void *prt [5](void)

 void Push(void *var)
 {
	 if (top ==99)
	 return ;
	 top++;
	 void *array[top]=(void *) var;

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
