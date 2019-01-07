#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    int j;
    for(i= 0;i<10;i++){
    printf("Hello world!\n");
    printf("%x\n",&i);
    if(i == 9){
        printf("Za warudo!\n");
        if(j != 1){
        i = 0;
        j = 1;
        }

    }
    }
    return 0;
}
