#include<stdio.h>
int main()
{
   int arr[5],i,sum=0,evensum=0,oddsum=0;

   for(i=0;i<5;i++){
    arr[i]=rand()%100;
   }
    for(i=0;i<5;i++){
        printf("\narr[%d]=%d",i,arr[i]);
   }
    for(i=0;i<5;i++){
        sum=sum+arr[i];


   if(arr[i]%2==0){
    evensum=evensum+arr[i];
   }
   else {
    oddsum=oddsum+arr[i];
   }
    }
   printf("\nSum=%d",sum);
   printf("\nEvensum=%d",evensum);
   printf("\nOddsum=%d",oddsum);

}
