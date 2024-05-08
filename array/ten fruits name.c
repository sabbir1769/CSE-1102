#include<stdio.h>

int main(){

char nm[3][6]={"am","jam","kola"};

printf("10 fruits name: \n");

for(int i=0;i<3;i++){

    printf("%d. %s\n",i+1,nm[i]);

    }

return 0;
}
