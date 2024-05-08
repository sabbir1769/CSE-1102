#include<stdio.h>
int main()
{
    int arr[100],n;
    int i, j, temp;

    printf("Enter size of array: ");
    scanf("%d",&n);

    for(i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for(i=0; i<n; i++)
    {
        for(j=i+1; j<n; j++)
        {
            if(arr[i] > arr[j])
            {
                temp     = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }

        }
    }

    printf("\n Ascending =");
    for(i=0; i<n; i++)
    {
        printf(" %d\t", arr[i]);
    }
     for(i=0; i<n; i++)
    {
        for(j=i+1; j<n; j++)
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
    for(i=0; i<n; i++)
    {
        printf(" %d\t", arr[i]);
    }


}
