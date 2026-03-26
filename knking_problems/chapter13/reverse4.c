#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define N 100

/* prototype */
void reverse(char *message);
int read_line(char message[]);

int main(void){

    char ch;
    char array[N];
    
    printf("Enter a message: ");
    read_line(array);
    reverse(array);

    printf("Message: %s\n", array);
}

int read_line(char message[]){
    int i = 0;
    char ch;

    while((ch = getchar()) != '\n' && ch != EOF){
        if(i < N){
            message[i++] = ch;
        }
    }
    message[i] = '\0';
    return i;
}

void reverse(char* message){
    int count = 0;
    char *p = &message[strlen(message) - 1];
    char *q = message;
    char temp;

    while(p > q){
        temp = *p;
        *p = *q;
        *q = temp;

        p--; q++; count++;
    }
}
