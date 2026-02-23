#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(void){

    int digit_seen[10] = {0,};
    bool no_digit_seen = false;
    int number;
    int N = sizeof(digit_seen) / sizeof(digit_seen[0]);

    printf("Enter a number: ");
    scanf("%d", &number);
    
    while(number > 0){ //scanf

        int digit = number % 10;

        if(digit_seen[digit] >= 1){
            digit_seen[digit]++;
            no_digit_seen = true;
        }
        else{
            digit_seen[digit]++;
        }

        number /= 10; // 넘어가면 -x or 0
    }

    if(no_digit_seen == false){
        printf("No repeated digits");
    }
    else{
        printf("Digit:        ");
        for(int i = 0; i < N; i++){
            printf("%d  ", i);
        }
        printf("\nOccurrences:  ");
        for(int j = 0; j < N; j++){
            printf("%d  ", digit_seen[j]);
        }

    }
    printf("\n");

    system("pause");
    return 0;
} 