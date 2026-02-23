#include <stdio.h>
#include <stdlib.h>


int check(char ch);

int main(void){

    int sentence[100];
    int count = 0; int backcount = 0;
    int mark = 0;
    int ch;

    sentence[0] = ' ';
    count++;
    printf("Enter a setence: ");
    while(1){
        ch = getchar();
        if(check(ch)){
            mark = ch;
            break;
        }
        else{
            sentence[count] = ch;
            count++;
        }
    }

    printf("Reversal of sentence:");
    for(int i = count - 1; i >= 0; i--){
        backcount++;
        if(sentence[i] == ' '){
            for(int j = 0; j < backcount; j++){
                printf("%c", sentence[i + j]);
            }
            backcount = 0;
        }
    }

    printf("%c\n", mark);

    system("pause");
    return 0;
}

int check(char ch){
    if(ch == '.') return 1;
    if(ch == '!') return 1;
    if(ch == '?') return 1;
    return 0;
}