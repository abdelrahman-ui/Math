#include <stdio.h>
#include <stdlib.h>


void enter_element_of_array( int *arr , int size);
void show_element_of_array( int *arr , int size);
void binary_search(int fn_arr[],int element,int MAX_SIZE);
void quicksort(int number[25],int first,int last);

int main()
{
    int size =0,target =0 , Second_Num =0, frist_Num=0;
    printf("Enter the Size of array =  ");
    scanf("%d",&size);
    printf("Enter the target =  ");
    scanf("%d",&target);
    int arr[size];
    enter_element_of_array(arr,size);
    show_element_of_array(arr,size);
    quicksort(arr,0,size-1);
    printf("\nThe Sorting Array ");
    show_element_of_array(arr,size);

    for(int i=0;i<size;i++)
    {
       Second_Num=target-arr[i];
       printf("\n frist number :  %d , ",arr[i]);
       binary_search(arr,Second_Num,size-1);
    }
    return 0;
}









void binary_search(int fn_arr[],int element,int MAX_SIZE) {
   int f = 0, r = MAX_SIZE,mid;

   while (f <= r) {
	  mid = (f+r)/2;

	  if (fn_arr[mid] == element) {
         printf("\n second  element  : %d  : Found : Position : %d.\n ", element, mid+1);
         break;
	  }
      else if (fn_arr[mid] < element)
         f = mid + 1;
      else
         r = mid - 1;
   }

   if (f > r)
      printf("\n: Not Found \n");
}





void quicksort(int number[25],int first,int last){
   int i, j, pivot, temp;

   if(first<last){
      pivot=first;
      i=first;
      j=last;

      while(i<j){
         while(number[i]<=number[pivot]&&i<last)
            i++;
         while(number[j]>number[pivot])
            j--;
         if(i<j){
            temp=number[i];
            number[i]=number[j];
            number[j]=temp;
         }
      }

      temp=number[pivot];
      number[pivot]=number[j];
      number[j]=temp;
      quicksort(number,first,j-1);
      quicksort(number,j+1,last);


   }

}






void enter_element_of_array( int *arr , int size)
  {
    printf(" Enter the element of array [%d]=\n ",size);
   for(int i=0 ;i< size ;i++)
    {
        scanf("%d",&arr[i]);
    }
  }


void show_element_of_array( int *arr , int size)
{

   printf("\n array [%d] = ",size);
    for(int i=0 ;i< size ;i++)
    {
        printf("%d   ",arr[i]);
    }
}




