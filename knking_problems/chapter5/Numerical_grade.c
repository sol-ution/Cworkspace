#include <stdio.h>
#include <stdlib.h>

int main(void){

    int grade;

    printf("Enter numerical grade: ");
    scanf("%d", &grade);

    switch(grade /= 10){
        case 10:
        printf("A\n");
        break;

        case 9:
        printf("A\n");
        break;

        case 8:
        printf("B\n");
        break;

        case 7:
        printf("C\n");
        break;

        case 6: 
        printf("D\n");
        break;

        default: 
        printf("F\n");
    }

    system("pause");
    return 0;
}
