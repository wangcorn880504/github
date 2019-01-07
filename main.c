#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    int j=0;
    int z;
    printf("O mai e wa mo shi de i ru \n");
    printf("NaNi!\n");
    printf("call my name\t");
    printf("John Cena\n");
    for(i= 0;i<10;i++){
        printf("Hello world!\n");
        printf("%x\n",&i);
        if(i == 9){
            printf("Za warudo!\n");
            if(j != 1){
                i = 0;
                j = 1;
                for(z =0;z<5;z++)
                {
                    printf("muda\n");
                }
            }
        }
    }
    return 0;
}
