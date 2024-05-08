#include<stdio.h>


int main(){



    char a[100];

    printf("Enter a number:");
    gets(a);

    int i,word=0;

    for(i=0;a[i]!='\0';i++){
        if(a[i]==' ')
            word++;
    }
    printf("Number of word: %d",word+1);





    return 0;
}
