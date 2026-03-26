#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <ctype.h>

/* #define directive */
#define STACK_SIZE 100

/* external variables */
int contents[STACK_SIZE];
int *top_ptr = contents;

/* prototypes */
int read_line(char rpn[]);
void initalize_arr(char rpn[]);
int evaluate_RPN_expression(const char *expression);

/* stack */
void make_empty(void){
    top_ptr = contents;
}

void stack_overflow(void){
    printf("Expression is too complex\n");
    exit(EXIT_FAILURE);
}

void stack_underflow(void){
    printf("Not enough operands in expression\n");
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

    char rpn[STACK_SIZE + 1];
    int val;

    while(1){
        printf("Enter an RPN expression: ");
        initalize_arr(rpn);
        read_line(rpn);
        val = evaluate_RPN_expression(rpn);
        printf("Value of expression: %d\n", val);
    }

    system("pause");
    return 0;
}

int read_line(char rpn[]){
    char ch;
    int i = 0;

    while((ch = getchar()) != '\n' && ch != EOF){
        if(i < STACK_SIZE){
            rpn[i++] = ch;
        }
    }
    rpn[i] = '\0';
    return i;
}

void initalize_arr(char *expression){
    for(int i = 0; *expression != '\0';){
        *expression++ = 0;
    }
    *expression = 0;
}

int evaluate_RPN_expression(const char *expression){
    int op1, op2;

    while(*expression != '\0'){
        if(isdigit(*expression) == true){
            push((int)(*expression - '0'));
            expression++;
        }
        else if(*expression == ' '){
            expression++;
        }
        else{
            switch(*expression){
                case '+': 
                op2 = pop();
                op1 = pop();
                push(op1 + op2); break;

                case '-':
                op2 = pop();
                op1 = pop(); 
                push(op1 - op2); break;

                case '*': 
                op2 = pop();
                op1 = pop(); 
                push(op1 * op2); break;

                case '/': 
                op2 = pop();
                op1 = pop(); 
                push(op1 / op2); break;

                case '%': 
                op2 = pop();
                op1 = pop(); 
                push(op1 % op2); break;
                case '=': return pop();
                default: printf("Incompatible value\n"); exit(EXIT_FAILURE);
            }
            expression++;
        }
    }
}