#include <stdio.h>
#include <stdlib.h>

int main(void){

    int speed = 0;

    printf("Enter wind speed: ");
    scanf("%d", &speed);

    if(speed < 1){
        printf("Calm\n");
    }    
    else if(speed > 0 && speed < 4){
        printf("Light air\n");
    } 
    else if(speed > 3 && speed < 28){
        printf("Breeze\n");
    } 
    else if(speed > 27 && speed < 48){
        printf("Gale\n");
    } 
    else if(speed > 47 && speed < 63){
        printf("Storm\n");
    }
    else{
        printf("Hurricane\n");
    }


    system("pause");
    return 0;
}
