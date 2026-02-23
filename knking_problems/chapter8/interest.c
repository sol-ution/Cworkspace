#include <stdio.h>
#include <stdlib.h>

int main(void){

    const int N = 5;
    const int F_value = 100;

    int interest_rate, years;
    float table[N];

    printf("Enter interest rate: ");
    scanf("%d", &interest_rate);
    printf("Enter number of years: ");
    scanf("%d", &years);

    printf("\nYears");
    for(int i = 0; i < N; i++){
        printf("%6d%%", interest_rate + i);
        table[i] = F_value;
    }
    printf("\n");

    for(int j = 1; j <= years; j++){
        printf("%3d     ", j);
        for(int k = 0; k < N; k++){
            table[k] += (interest_rate + k) / 100.0 * table[k];
            printf("%7.2f", table[k]);
        }
        printf("\n");
    }

    system("pause");
    return 0;
} 