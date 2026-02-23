#include <stdio.h>
#include <stdlib.h>

int main(void){

    int num, square = 2;

    printf("Enter value: ");
    scanf("%d", &num);

    while(square*square <= num){
        printf("%d\n", square*square);
        square += 2;
    }

    system("pause");
    return 0;
}