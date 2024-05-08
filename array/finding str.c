#include<stdio.h>
int main()
{

    char a[100];
    gets(a);
    int UL=0,LL=0,D=0,length=0,i;
    for(i=0;a[i];i++)
    {
        length++;
        if(a[i]>='A' && a[i]<='Z')
        {
            UL++;
        }
        else if(a[i]>='a' && a[i]<='z' )
        {
            LL++;
        }
        else if(a[i]>='0' && a[i]<='9' ){
            D++;
        }
    }
    printf("String Length=%d\n",length);
    printf("Uppercase Length=%d\n",UL);
    printf("Loewrcase Length=%d\n",LL);
    printf("Digit =%d\n",D);


return 0;
}
