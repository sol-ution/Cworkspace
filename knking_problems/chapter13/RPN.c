#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <ctype.h>

/* #define directive */
#define STACK_SIZE 100

/* external variables */
int contents[STACK_SIZE];
int top = 0;

/* prototypes */
int read_val(void);


/* stack */
void make_empty(void){
    top = 0;
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
    return top == 0;
}

bool is_full(void){
    return top == STACK_SIZE;
}

void push(int i){
    if(is_full())
        stack_overflow();
    else
        contents[top++] = i;
}

int pop(void){
    if(is_empty())
        stack_underflow();
    else
        return contents[--top];
}

int main(void){

    int val;

    while(1){
        printf("Enter an RPN expression: ");
        val = read_val();
        printf("Value of expression: %d\n", val);
    }

    system("pause");
    return 0;
}

int read_val(void){
    char ch;
    int i;
    int sum = 0;

    while(1){
        scanf(" %c", &ch);
        if(isdigit(ch) != 0){
            i = ch - '0';
            push(i);
        }
        else{
            sum = pop();
            switch(ch){
                case '+': push(sum = pop() + sum); break;
                case '-': push(sum = pop() - sum); break;
                case '*': push(sum = pop() * sum); break;
                case '/': push(sum = pop() / sum); break;
                case '%': push(sum = pop() % sum); break;
                case '=': return sum;
                default:
                    printf("Invalid operator: %c\n", ch); 
                    exit(EXIT_FAILURE);
            }
        }
    }
}