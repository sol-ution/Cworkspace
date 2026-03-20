#include <stdio.h>
#include <string.h>
#include <stdbool.h>

#define WORD_LEN 21

int read_line(char str[], int n);

int main(void){

    int word_len;
    char word_str[WORD_LEN];
    char smallest[WORD_LEN], largest[WORD_LEN];
    bool first_flag = true;

    while(1){
        printf("Enter word: ");

        read_line(word_str, WORD_LEN);

        if(first_flag){
            strcpy(largest, word_str);
            strcpy(smallest, word_str);
            first_flag = false;
        }

        if(strcmp(largest, word_str) < 0){
            strcpy(largest, word_str);
        }

        if(strcmp(smallest, word_str) > 0){
            strcpy(smallest, word_str);
        }

        if(strlen(word_str) == 4){
            break;
        }
    }

    printf("Smallest word: %s\n", smallest);
    printf("Largest word: %s\n", largest);

    return 0;
}

int read_line(char str[], int n){
    int ch, i =0;
    while((ch = getchar()) != '\n' && ch != EOF){
        if(i < n){
            str[i++] = ch;
        }
    }
    str[i] = '\0';
    return i ;
}