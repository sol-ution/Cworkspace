#include <stdio.h>
#include <stdlib.h>

static int gcd( int a, int b);

int main(void){

    int num, de;
    int buf;

    printf("Enter a fraction: ");
    scanf("%d/%d", &num, &de);

    buf = gcd(num, de);

    if(buf != 0){
        printf("In lowest terms: %d/%d\n", num/buf, de/buf);
    }
    else{
        printf("In lowest terms: %d/%d\n", num, de);
    }

    system("pause");
    return 0;
}

static int gcd( int a, int b){

    while(a % b != 0){
        int gcd = a % b;
        a = b;
        b = gcd;
    }

    return b;
}