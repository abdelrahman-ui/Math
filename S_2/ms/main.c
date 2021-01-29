#include <stdio.h>
#include <stdlib.h>

void d(int d)
{
    printf("gnbjhbjb\n");

}
void c(int d)
{
    printf("cjbjmn");

}
void f(int d)
{
    printf("mnnnks");

}
int main()
{
    void (* ptr[1]) (void) ;
    ptr[0]=d;
    ptr[0]();

     //printf("fdfd");
    return 0;
}

