#include<stdio.h>
int main()
{
   int arr[100],i,sum=0;

   for(i=0;i<100;i++){
    arr[i]=rand()%100;
   }
    for(i=0;i<100;i++){
        printf("\narr[%d]=%d",i,arr[i]);
   }

   for(i=0;i<100;i++){
        sum=sum+arr[i];
   }
   printf("\nsum of arr = %d",sum);

   return 0;
}


