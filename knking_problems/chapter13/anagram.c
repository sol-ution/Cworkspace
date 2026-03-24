#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <stdbool.h>
#include <string.h>

#define WORD_LEN 30

int read_line(char* word);

bool are_anagrams(const char *word1, const char *word2);

int main(void){

    int ch = 0;
    char word1[WORD_LEN + 1], word2[WORD_LEN + 1];
    bool anagram_flag = false;

    printf("Enter first word: ");
    read_line(word1);
    printf("Enter second word: ");
    read_line(word2);
    anagram_flag = are_anagrams(word1, word2);

    anagram_flag == true ? printf("true\n") : printf("false\n");

    system("pause");
    return 0;
}

int read_line(char* word){
    char ch;
    int i = 0;

    while((ch = getchar()) != '\n' && ch != EOF){
        if(i < WORD_LEN){
            if(isalpha((unsigned char)ch)){
                word[i++] = tolower((unsigned char)ch);
            }
        }
    }
    word[i] = '\0';
    return i;
}


bool are_anagrams(const char *word1, const char *word2){

    int read_check[26] = {0, }, i = 0;

    for(; i < strlen(word1); i++){
        read_check[word1[i] - 'a']++;
    }
    for(i = 0; i < strlen(word2); i++){
        read_check[word2[i] - 'a']--;
    }

    for(i = 0; i < 26; i++){
        if(read_check[i] != 0){
            return false;
        }
    }
    return true;
}