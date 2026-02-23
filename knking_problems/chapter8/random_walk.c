#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>

/*
    1. random 구현
    2. multi dimensional array의 끝에 닿았을 때 나가지 않게 하는 기능
    3. 사방이 둘러쌓였을 때 break
    4. 알파벳
    5. 모듈러 연산으로 상하좌우(0, 1, 2, 3)
*/

bool if_end(int row, int col);
bool is_blocked(char table[10][10], int row, int col);


int main(void){
    //선언부, 상수
    const int ALPHABET = 26;
    const int DIRECTION = 4;

    //선언부, 변수
    int dir = 0, num_alphabet = 0, row = 0, col = 0; 
    bool end = false; // 끝을 표시하는 flag 변수
    bool block = false;
    char table[10][10] = {{'.','.','.','.','.','.','.','.','.','.'},
                          {'.','.','.','.','.','.','.','.','.','.'},
                          {'.','.','.','.','.','.','.','.','.','.'},
                          {'.','.','.','.','.','.','.','.','.','.'},
                          {'.','.','.','.','.','.','.','.','.','.'},
                          {'.','.','.','.','.','.','.','.','.','.'},
                          {'.','.','.','.','.','.','.','.','.','.'},
                          {'.','.','.','.','.','.','.','.','.','.'},
                          {'.','.','.','.','.','.','.','.','.','.'},
                          {'.','.','.','.','.','.','.','.','.','.'}};
    char alphabet[26];

    //초기화
    for(int i = 0; i < ALPHABET; i++){
        alphabet[i] = 65 + i;
    }

    //본문
    table[row][col] = alphabet[num_alphabet];  //시작
    num_alphabet++;

    srand((unsigned) time(NULL));

    while(num_alphabet < 26){
        dir = rand() % DIRECTION; //랜덤 방향 출력

        switch (dir){
            case 0:
                col++; //상
                break;
            case 1:
                col--; //하
                break;
            case 2:
                row++; //좌
                break;
            default:
                row--; //우
                break;
        }
        
        if(if_end(row, col) == true){ //end가 맞으면 -> 백
            switch (dir){
                case 0:
                    col--; //상
                    break;
                case 1:
                    col++; //하
                    break;
                case 2:
                    row--; //좌
                    break;
                default:
                    row++; //우
                    break;
            }
            continue;
        }

        if(table[row][col] != '.'){ // character에 둘러쌓여 있으면 -> 백
            switch (dir){
                case 0:
                    col--; //상
                    break;
                case 1:
                    col++; //하
                    break;
                case 2:
                    row--; //좌
                    break;
                default:
                    row++; //우
                    break;
            }
            continue;
        }
            
        table[row][col] = alphabet[num_alphabet];
        num_alphabet++;

        if(is_blocked(table, row, col)){
            break;
        }
    }
    
    for(int i = 0; i < 10; i++){ //출력
        for(int j = 0; j < 10; j++){
            printf("%c  ", table[i][j]);
        }
        printf("\n");
    }

    system("pause");
    return 0; 
}

bool if_end(int row, int col){
    bool end = false;

    if(row >= 10 || row < 0 || col >= 10 || col < 0){ // 인덱싱 문제
        end = true;
    }
    return end;
}

bool is_blocked(char table[10][10], int row, int col){ // 사방이 막혀있는지
    if(row < 9 && table[row + 1][col] == '.') return false;
    if(row > 0 && table[row - 1][col] == '.') return false;
    if(col < 9 && table[row][col + 1] == '.') return false;
    if(col > 0 && table[row][col - 1] == '.') return false;
    return true;
}