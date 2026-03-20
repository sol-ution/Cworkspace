#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <stdbool.h>

#define LEN 100

bool is_palindrome(char arr[], int count);

int main(void){

    char ch;
    char *p, arr[LEN];
    int count = 0;
    p = arr;

    printf("Enter a message: ");

    while((ch = getchar()) != '\n' && ch != EOF){
        ch = tolower(ch);
        if(ch <= 'x' && ch >= 'a'){
            *p = ch;
            p++; count++;
        }
    }

    if(is_palindrome(arr, count) == true)
        printf("Palindrome\n");
    else
        printf("Not a palindrome\n");

    //system("pause");
    return 0;
}

bool is_palindrome(char arr[], int count){

    char *p, *q;
    q = (arr + count - 1);
    count = (count%2 == 1) ? count/2 - 1 : count/2;
    
    for(p = arr; p < arr + count; p++, q--){
        if(*p != *q){
            return false;
        }
    }
    return true;
}