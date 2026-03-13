#include <stdio.h>
#include <stdlib.h>

void reduce(int numerator, int denominator,
            int *reduced_numerator,
            int *reduced_denominator);

int main(void){

    int num, denom;
    int re_num, re_denom;

    printf("Enter a fraction: ");
    scanf("%d/%d", &num, &denom);
    re_num = num;
    re_denom = denom;

    reduce(num, denom, &re_num, &re_denom);

    printf("In lowest terms: %d/%d\n", re_num, re_denom);

    system("pause");
    return 0;
}


void reduce(int numerator, int denominator,
            int *reduced_numerator,
            int *reduced_denominator)
{
    int a = numerator;
    int b = denominator;
    int gcd;

    while(b != 0){
        gcd = a % b;
        a = b;
        b = gcd;
    }

    *reduced_numerator /= a;
    *reduced_denominator /= a;
}