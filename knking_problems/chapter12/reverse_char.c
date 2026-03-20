#include <stdio.h>
#include <stdlib.h>


int check(char ch);

int main(void){

    char sentence[100];
    int count = 0; int backcount = 0;
    char mark = 0, *p;
    char ch;

    sentence[0] = ' ';
    count++;
    printf("Enter a setence: ");

    while((ch = getchar()) != '\n' && ch != EOF){
        if(check(ch)){
            mark = ch;
            count--;
            break;
        }
        else{
            sentence[count] = ch;
            count++;
        }
    }

    printf("Reversal of sentence:");

    for(p = sentence + count; p >= sentence; p--){
        backcount++;
        if(*p == ' '){
            for(int j = 0; j < backcount; j++){
                printf("%c", *(p + j));
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