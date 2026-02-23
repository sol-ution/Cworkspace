#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(void){

    int ch = 0;
    int read_check[26] = {0,};
    int flag = 0;

    printf("Enter first word: ");
    while((ch = getchar()) != '\n' && ch != EOF){
        if(isalpha(ch)){
            ch = tolower(ch);
        }
        read_check[ch - 'a']++;
    }
    printf("Enter second word: ");
    while((ch = getchar()) != '\n' && ch != EOF){
        if(isalpha(ch)){
            ch = tolower(ch);
        }
        read_check[ch - 'a']--;
    }

    for(int i = 0; i < 26; i++){
        if(read_check[i] != 0){
            flag = 1;
            break;
        }
    }

    if(flag == 1){
        printf("The words are not anagrams\n");
    }
    else{
        printf("The words are anagrams\n");
    }

    system("pause");
    return 0;
} 