#include <stdio.h>
#include <stdlib.h>

int main(void){

    float income;

    printf("Enter the amount of taxable income: ");
    scanf("%f", &income);

    if(income < 750){
        printf("%f\n", income += income/100);
    } 
    else if(income > 749 && income < 2251){
        printf("%f\n", income += (income/100)*2);
    } 
    else if(income > 2249 && income < 3751){
        printf("%f\n", income += (income/100)*3);
    } 
    else if(income > 3749 && income < 5249){
        printf("%f\n", income += (income/100)*4);
    } 
    else if(income > 5251 && income < 6999){
        printf("%f\n", income += (income/100)*5);
    } 
    else{
        printf("%f\n", income += (income/100)*6);
    } 

    system("pause");
    return 0;
}

