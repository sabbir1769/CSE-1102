#include<stdio.h>
int main()
{
   int arr[10],i;

   for(i=0;i<10;i++){
    arr[i]=rand()%100;
   }

   for(i=0;i<10;i++){
        printf("\narr[%d]=%d",i,arr[i]);
   }
    return 0;
}
