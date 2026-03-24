#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define WORD_LEN 10
#define WORD_NUM 30

int check(char ch);

int main(void){

    char sentence[WORD_NUM][WORD_LEN + 1];
    char row = 0, col = 0;
    char mark, ch;
    int i = 0, count = 0, j;
    bool mark_flag = false;

    printf("Enter a setence: ");

    for(; row < WORD_NUM; row++){
        while((ch = getchar()) != ' ' && ch != EOF){
            if(check(ch) || ch == '\n'){
                mark = ch;
                mark_flag = true;
                break;
            }
            if(col < WORD_LEN){
                sentence[row][col++] = ch;
            }
        }
        if(mark_flag){
            break;
        }
        sentence[row][col] = '\0';
        col = 0;
    }

    printf("Reversal of sentence:");

    for(j = row; j >= 0; j--){
        printf(" %s", sentence[j]);
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