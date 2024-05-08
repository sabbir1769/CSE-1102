#include<stdio.h>
#define size 100
int main()
{
    char a[size];
    printf("Enter:");
    gets(a);
    int UL=0,LL=0,Dig=0,length=0,i,n=0,s=1;
    for(i=0;a[i];i++)
    {
        length++;
        if(a[i]>='A' && a[i]<='Z')
        {
            UL++;
        }
        else if(a[i]>='a' && a[i]<='z')
        {
            LL++;
        }
        else if(a[i]>='0' && a[i]<='9')
        {
            Dig++;
        }
        if(a[i]=='A' || a[i]<='a')
        {
            n++;
        }
        //word count
        if(a[i]==' ')
        {
            s++;
        }

    }
    printf("\nString length= %d",length);
    printf("\nUppercase latter= %d",UL);
    printf("\nLowercase Latter= %d",LL);
    printf("\nDigit= %d",Dig);
    printf("\nNumber of A and a charecter= %d",n);
    printf("\nNumber of Word in this paragraf= %d",s);



    return 0;
}
