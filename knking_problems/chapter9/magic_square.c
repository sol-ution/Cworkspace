#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int row_end(int row, int size);
int col_end(int col, int size);

int main(void){

    int size;
    int count = 1;
    int row = 0; int col = 0;

    printf("This program creates a magic square of a specified size.\n"
        "The size ,must be an odd number between 1 and 99.\n"
        "Enter size of magic square: ");
    scanf("%d", &size);
    int magic_square[size][size];

    for(int i = 0; i < size; i++){
        for(int j = 0; j < size; j++){
            magic_square[i][j] = 0;
        }
    }

    magic_square[row][col = (size / 2)] = 1;


    for(int i = 2; i < size*size + 1; i++){
        row++; col++;
        row = row_end(row, size);
        col = col_end(col, size);
        if(magic_square[row][col] != 0){
            row -= 2; col--;
        }
        magic_square[row][col] = i;
    }

    for(int i = 0; i < size; i++){
        for(int j = 0; j < size; j++){
            printf("    %2d", magic_square[i][j]);
        }
        printf("\n");
    }

    system("pause");
    return 0;
} 

int row_end(int row, int size){
    if(row + 1 > size) return 0;
    if(row - 1 < 0) return size;
    return row;
}

int col_end(int col, int size){
    if(col + 1 > size) return 0;
    if(col - 1 < 0) return size;
    return col;
}