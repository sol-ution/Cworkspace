//stack의 성질과 match
/* #include directive */
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

/* #define directive */
#define STACK_SIZE 100

/* external variables */
char contents[STACK_SIZE];
int top = 0;

/* prototypes */


/* stack */
void make_empty(void){
    top = 0;
}

bool is_empty(void){
    return top == 0;
}

bool is_full(void){
    return top == STACK_SIZE;
}

void stack_overflow(void){
    printf("Stack overflow");
    exit(EXIT_FAILURE);
}

void push(char ch){
    if(is_full())
        stack_overflow();
    else
        contents[top++] = ch;
}

char pop(void){
    if(is_empty())
        stack_overflow();
    else
        return contents[--top];
}

int match(char expected_open){
    if(is_empty()) return 1;
    return pop() != expected_open;
}

/* main */
int main(void)
{
    char ch;
    int wrong_brace = 0;

    printf("Enter parentheses and/or braces: ");

    while((ch = getchar()) != '\n' && ch != EOF){
        if(ch == '(' || ch == '{')
            push(ch);
        else if(ch == ')')
            wrong_brace = match('(');
        else if(ch == '}')
            wrong_brace = match('{');
        else{
            printf("Wrong character");
            exit(EXIT_SUCCESS);
        }
    }

    if(!is_empty()) wrong_brace = 1;

    if(wrong_brace == 0){
        printf("Parentheses/braces are nested properly\n");
    }
    else
        printf("Parentheses/braces aren't nested properly\n");


    system("pause");
    return 0;
}
