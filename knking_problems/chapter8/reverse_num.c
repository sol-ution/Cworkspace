#include <stdio.h>
#include <stdlib.h>

int main(void){

    const int N = 10;
    int numbers[N];

    printf("Enter 10 numbers: ");

    for(int i = 0; i < N; i++){
        scanf("%d", &numbers[i]);
    }

    printf("In reverse order: ");

    for(int j = N - 1; j >= 0; j--){
        printf("%d ", numbers[j]);
    }

    system("pause");
    return 0;
} 