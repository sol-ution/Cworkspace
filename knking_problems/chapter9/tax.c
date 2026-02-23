#include <stdio.h>
#include <stdlib.h>

float in_amount(float a);

int main(void){

    float income;

    printf("Enter the amount of taxable income: ");
    scanf("%f", &income);

    if(income < 750){
        printf("%f\n", in_amount(income));
    } 
    else if(income > 749 && income < 2251){
        printf("%f\n", in_amount(income)*2);
    } 
    else if(income > 2249 && income < 3751){
        printf("%f\n", in_amount(income)*3);
    } 
    else if(income > 3749 && income < 5249){
        printf("%f\n", in_amount(income)*4);
    } 
    else if(income > 5251 && income < 6999){
        printf("%f\n", in_amount(income)*5);
    } 
    else{
        printf("%f\n", in_amount(income)*6);
    } 

    system("pause");
    return 0;
}

float in_amount(float a){
    return a += (a/100)*2;
}