#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define WORD_LEN 10
#define WORD_NUM 30


int check(char ch);

int main(void){

    char* sentence[WORD_NUM];
    char mark, ch;
    int i = 0, count = 0, j;
    bool mark_flag = false;

    printf("Enter a setence: ");

    for(; i < WORD_NUM; i++){
        char str[WORD_LEN];
        while((ch = getchar()) != ' ' && ch != EOF){
            if(check(ch) || ch == '\n'){
                mark = ch;
                mark_flag = true;
                break;
            }
            if(i < WORD_LEN){
                str[count++] = ch;
            }
        }
        if(mark_flag){
            break;
        }
        str[count] = '\0';
        sentence[i] = str;
    }

    printf("Reversal of sentence:");

    for(j = i - 1; j >= 0; j--){
        printf("%s ", sentence[j]);
    }
    printf("%c", mark);

   //system("pause");
    return 0;
}

int check(char ch){
    if(ch == '.') return 1;
    if(ch == '!') return 1;
    if(ch == '?') return 1;
    return 0;
}