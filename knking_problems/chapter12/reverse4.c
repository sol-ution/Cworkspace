#include <stdio.h>
#include <stdlib.h>

#define N 100

int main(void){

    char ch;
    char *p, array[N];
    int count = 0;

    p = array;
    
    printf("Enter a message: ");

    while((ch = getchar()) != '\n' && ch != EOF){
        *p = ch; 
        p++; count++;
    }

    printf("Reversal is: ");

    for(p = array + count - 1; p >= array; p--){
        putchar(*p);
    }


    system("pause");
    return 0;
}