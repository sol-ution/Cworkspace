#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <ctype.h>

void read_word(int counts[26]);
bool equal_array(int counts1[26], int counts2[26]);

int main(void){

    int ch = 0;
    int read_check1[26] = {0,};
    int read_check2[26] = {0,};
    int flag = 0;

    printf("Enter first word: ");
    read_word(read_check1);
    printf("Enter second word: ");
    read_word(read_check2);

    flag = equal_array(read_check1, read_check2);
    
    if(flag == 1){
        printf("The words are not anagrams\n");
    }
    else{
        printf("The words are anagrams\n");
    }

    system("pause");
    return 0;
} 



void read_word(int counts[26]){
    int ch = 0;

    while((ch = getchar()) != '\n' && ch != EOF){
        if(isalpha(ch)){
            ch = tolower(ch);
        }
        counts[ch - 'a']++;
    }
}


bool equal_array(int counts1[26], int counts2[26]){
    for(int i = 0; i < 26; i++){
        if(counts1[i] != counts2[i]){
            return 1;
        }
    }
    return 0;
}