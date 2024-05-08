#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){

    srand(time(NULL));

    int arr[5],i,j,n,temp;
    for(i=0; i<5; i++)
    {
        arr[i]=rand()%100;
    }

    for(i=0; i<5; i++)
    {
        printf(" %d\t", arr[i]);
    }
     for(i=0; i<5; i++)
    {
        for(j=i+1; j<5; j++)
        {
            if(arr[i] < arr[j])
            {
                temp     = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }

        }
    }
    printf("\nDescending =");
    for(i=0; i<5; i++)
    {
        printf(" %d\t", arr[i]);
    }


}
