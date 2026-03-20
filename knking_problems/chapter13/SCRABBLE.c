#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

//(3k + 1, 3k + 2, 3k + 3)

int compute_scrabble_value(const char *word);

int main(void){

    int ch, score = 0;
    int points[26] = {
        1,3,3,2,1,4,2,4,1,8,  // A J
        5,1,3,1,1,3,10,1,1,1, // K T
        1,4,4,8,4,10  
    };
    

    printf("Enter a word: ");
    while((ch = getchar()) != '\n' && ch != EOF){
        if(isalpha(ch)){
            ch = toupper((unsigned char)ch);
            score += points[ch - 'A'];
        }
        else{
            printf("wrong value\n");
            break;
        }
    }

    printf("Scrabble value: %d\n", score);


    system("pause");
    return 0;
}