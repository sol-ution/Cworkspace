#include <stdio.h>
#include <stdlib.h>

int main(void){

    int ten_digit, one_digit;
    char* ten_numbers[] =   { "ten", "eleven", "twelve", 
        "thirteen", "fourteen", "fifteen", "sixteen", 
        "seventeen", "eighteen", "nineteen"
    };
    char* one_numbers[] = { "one", "two", "three",
        "four", "five", "six", "seven", "eight", "nine"
    };
    char* th_numbers[] = { "twenty-", "thirty-", "fourty-", 
        "fifty-", "sixty-", "seventy-", "eighty-", "ninety-"
    };

    printf("Enter a two-digit number: ");
    scanf("%1d%1d", &ten_digit, &one_digit);
    printf("you entered the number ");


    if(ten_digit == 1){
        printf("%s\n", ten_numbers[one_digit]);
    }
    else{
        printf("%s%s\n", th_numbers[ten_digit], one_numbers[one_digit]);
    }
    return 0;
}