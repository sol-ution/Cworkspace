#include <stdio.h>
#include <stdlib.h>

int main(void){
    
    const int N = 5;
    int col_sum[5] = {0,};
    int row_sum[5] = {0,};
    int table[5][5] = {0, };

    for(int i = 0; i < N; i++){
        printf("Enter row %d: ", i + 1);

        for(int j = 0; j < N; j++){
            scanf("%d", &table[i][j]);
        } 
    }

    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            row_sum[i] += table[i][j];
            col_sum[i] += table[j][i];
        } 
    }

    printf("Row totals: ");
    for(int k = 0; k < N; k++){
        printf("%d ", row_sum[k]);
    }

    printf("\nColumn totals: ");
    for(int k = 0; k < N; k++){
        printf("%d ", col_sum[k]);
    }

    system("pause");
    return 0;
} 