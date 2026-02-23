#include <stdio.h>
#include <stdlib.h>
/*
    feedback 배열 짤때는 항상 out of bounds조심하기
    그리고 속도 신경쓰자 -> swap으로 간단히 가능하다
*/
#define N 10

void select(int a[], int high);

int main(void){
    int a[N], i;

    printf("Enter %d numbers to be sorted: ", N);
    for(i = 0; i < N; i++)
        scanf("%d", &a[i]);
    select(a, N);

    printf("In sorted order: ");
    for(i = 0; i < N; i++)
        printf("%d ", a[i]);
    printf("\n");

    system("pause");
    return 0;
}

void select(int a[], int high){

    if(high <= 0){
        return;
    }

    int max = 0, num = 0;

    for(int i = 0; i < high; i++){
        if(max < a[i]){
            max = a[i]; 
            num = i;
        }
    }

    a[num] = a[high - 1];
    a[high - 1] = max;

    select(a, high - 1);

}