#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>


//(3k + 1, 3k + 2, 3k + 3)

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

    /*char point1[10] = {'A', 'E', 'I', 'L', 'N', 'O', 'R', 'S', 'T', 'U'};
    char point2[2] = {'D', 'G'};
    char point3[4] = {'B', 'C', 'M', 'P'};
    char point4[5] = {'F', 'H', 'V', 'W', 'Y'};
    char point5[1] = {'K'};
    char point8[2] = {'J', 'X'} ;
    char point10[2] = {'Q', 'Z'};*/


    /*for(int i = 0; i < 10; i++){
        if(point1[i] == (char)ch){
            score += 1;
        }
    }
    for(int i = 0; i < 2; i++){
        if(point2[i] == (char)ch){
            score += 2;
        }
    }
    for(int i = 0; i < 4; i++){
        if(point3[i] == (char)ch){
            score += 3;
        }
    }
    for(int i = 0; i < 5; i++){
        if(point4[i] == (char)ch){
            score += 4;
        }
    }
    if(point5[0] == (char)ch){
            score += 5;
    }
    for(int i = 0; i < 2; i++){
        if(point8[i] == (char)ch){
            score += 8;
        }
    }
    for(int i = 0; i < 2; i++){
        if(point10[i] == (char)ch){
            score += 10;
        }
    }*/
