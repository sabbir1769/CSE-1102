#include<stdio.h>
#define range 10
int main()
{
   int arr[range],i,oddsum=0,evensum=0;

   for(i=0;i<range;i++){
    arr[i]=rand()%range;
   }
    for(i=0;i<range;i++){
        printf("\narr[%d]=%d",i,arr[i]);
   }

   for(i=0;i<range;i++){
         if(arr[i]%2==0){
            evensum=evensum+arr[i];
         }
         else{
            oddsum=oddsum+arr[i];
         }
   }
   printf("\nevensum of arr = %2d",evensum);
   printf("\noddsum of arr = %2d",oddsum);

}
