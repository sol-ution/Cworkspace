#include <stdio.h>
#include <stdlib.h>

/*
    total_score, average_score / each, high_score, low_score

*/

int main(void){
    
    const int N = 5;
    int high_score = 0, low_score = 0;
    int total_score[5] = {0,};
    float average_score[5] = {0,};
    int table[5][5] = {0, };

    for(int i = 0; i < N; i++){
        printf("Enter grade %d: ", i + 1);
        for(int j = 0; j < N; j++){
            scanf("%d", &table[i][j]);
        } 
    }

    low_score = table[0][0];

    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            total_score[i] += table[i][j];

            if(high_score < table[i][j]){
                high_score = table[i][j];
            }

            if(low_score > table[i][j]){
                low_score = table[i][j];
            }

        }
        average_score[i] = total_score[i] / 5.0;
    }
    
    printf("\nTotal score: ");
    for(int k = 0; k < N; k++){
        printf("%d  ", total_score[k]);
    }

    printf("\nAverage score: ");
    for(int k = 0; k < N; k++){
        printf("%.2f  ", average_score[k]);
    }

    printf("\nHighest score: %d", high_score);
    printf("\nLowest score: %d", low_score);


    system("pause");
    return 0;
} 