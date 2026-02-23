#include <stdio.h>
#include <stdlib.h>

int main(void){

    int num;
    int ten = 10;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("The reversal is: ");

    do{
        printf("%1d", num % ten);
        num /= ten;
        ten *= 10;

    }while(num != 0);

    printf("\n");

    system("pause");
    return 0;
}
