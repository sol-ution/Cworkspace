#include <stdio.h>
#include <stdlib.h>

int main(void){
/*
    int days, start;
    int count = 1;
    printf("Enter number of days in month: ");
    scanf("%d", &days);
    printf("Enter starting day of the week (1=Sun, 7=Sat) : ");
    scanf("%d", &start);

    for(int i = 0; i < start; i++){
        printf("  ");
    }

    for(int j = (days + start - 1)/7 + 1; j > 0; j--){
        if(j == (days + start - 1)/7 + 1 ){ //처음
            for(int k = 0; k < 8 - start; k++){
                printf("%2d ", count++);
            }
        }
        else if(j == 1){ // 끝
            int buf = count - 1;
            for(int k = 0; k < days - buf; k++){
                printf("%2d ", count++);
            }
        }
        else{ // 중간
            for(int k = 0; k < 7; k++){
                printf("%2d ", count++);
            }
        }
        printf("\n");
    }
*/
    int days, start; //chatgpt
    printf("Enter number of days in month: ");
    if (scanf("%d", &days) != 1) return 1;

    printf("Enter starting day of the week (1=Sun, 7=Sat) : ");
    if (scanf("%d", &start) != 1) return 1;

    // 입력 방어(원하면 더 엄격히)
    if (days < 28 || days > 31 || start < 1 || start > 7) {
        printf("Invalid input.\n");
        return 1;
    }

    int offset = start - 1;          // 1일 전 공백 칸 수
    int total  = offset + days;      // 출력해야 할 전체 칸 수

    for (int cell = 0; cell < total; ++cell) {
        if (cell < offset) {
            printf("   ");           // 날짜 칸과 폭 맞추기
        } else {
            printf("%2d ", cell - offset + 1);
        }

        if ((cell + 1) % 7 == 0) printf("\n");
    }

    // 마지막 줄이 7로 딱 안 끝났으면 줄바꿈
    if (total % 7 != 0) printf("\n");

    system("pause");
    return 0;
}
