#include <stdio.h>
#include <stdlib.h>

int main(void){

    int type, i1, i2, i3, i4, i5, j1, j2, j3, j4, j5, check,
    first_sum, second_sum, total;

    printf("Enter the first (single) digit: ");
    scanf("%1d", &type);
    printf("Enter first group of five digits: ");
    scanf("%1d%1d%1d%1d%1d", &i1, &i2, &i3, &i4, &i5);
    printf("Enter second group of five digits: ");
    scanf("%1d%1d%1d%1d%1d", &j1, &j2, &j3, &j4, &j5);
    printf("Check digit: ");
    scanf("%1d", &check);

    first_sum = type + i2 + i4 + j1 + j3 + j5;
    second_sum = i1 + i3 + i5 + j2 + j4;
    total = 3 * first_sum + second_sum;

    if(9 - (total - 1) % 10 == check){
        printf("VALID\n");
    }
    else{
        printf("NOT VALID\n");
    }

    system("pause");
    return 0;
}

/*
add 1,3,5,7,9,11 = s1
add 2,4,6,8,10 = s2
total = s1*3 + s2
(total - 1) % 10 - 9 

*/