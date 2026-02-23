#include <stdio.h>
#include <stdlib.h>

int main(void){

    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if(num / 1000 != 0){
        printf("The number %d has 4 digits\n", num);
    } 
    else if(num / 100 != 0){
        printf("The number %d has 3 digits\n", num);
    }
    else if(num / 10 != 0){
        printf("The number %d has 2 digits\n", num);
    } 
    else if(num / 1 != 0){
        printf("The number %d has 1 digits\n", num);
    } 
    else{
        printf("Wrong number");
    } 

    system("pause");
    return 0;
}

