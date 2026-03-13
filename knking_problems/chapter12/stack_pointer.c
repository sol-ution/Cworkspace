#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

/* #define directive */
#define STACK_SIZE 100

/* external variables */
int contents[STACK_SIZE];
int *top_ptr = contents;


/* stack */
void make_empty(void){
    top_ptr = contents;
}

void stack_overflow(void){
    printf("Expression is too complex\n");
    exit(EXIT_FAILURE);
}

void stack_underflow(void){
    printf("Not enough operands in expression");
    exit(EXIT_FAILURE);
}

bool is_empty(void){
    return (top_ptr - contents) == 0;
}

bool is_full(void){
    return (top_ptr - contents) == STACK_SIZE;
}

void push(int i){
    if(is_full())
        stack_overflow();
    else
        *top_ptr++ = i;
}

int pop(void){
    if(is_empty())
        stack_underflow();
    else
        return *--top_ptr;
}

int main(void){
    push(1);
    printf("%d\n", pop());

    return 0;
}