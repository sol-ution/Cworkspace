#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define LEN 10

int sum_two_dimensional_array(const int a[][LEN], int n);

int main(void){

    int array[LEN][LEN];
    printf("When you come to a fork in the road, take it.   \
         -- Yogi Berra\n");


    system("pause");
    return 0;
}


int sum_two_dimensional_array(const int a[][LEN], int n){
    int *p, sum = 0;

    for(p = &a[0][0]; p <= &a[LEN - 1][LEN - 1]; p++){
        sum =+ *p;
    }
    return sum;
}


























/*
void store_zeros(int a[], int n);
bool search(const int a[], int n, int key);

int main(void){

    int a[N] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}; 
    int key = 5;
    bool t;

    int *p;

    t = search(a, N, key);  
    printf("%d", t);

    double ident[N][N];
    int row, col, count = 0;
    double *p;

    for(p = &ident[0][0]; p <= &ident[N - 1][N - 1]; p++){
        if(count == N || p == &ident[0][0]){
            *p = 1.0;
            count = 0;
        }
        else{
            *p = 0.0;
            count++;
        }
    }


    for(row = 0; row < N; row++)
        for(col = 0; col < N; col++)
            if(row == col)
                ident[row][col] = 1.0;
            else
                ident[row][col] = 0.0;


    system("pause");
    return 0;
}

bool search(const int a[], int n, int key){

    const int *p;

    for(p = a; p < a + n; p++){
        if(*p == key){
            return true;
        }
    }
    
    return false;
}

void store_zeros(int a[], int n){
    int *p;

    for(p = a; p < a + n; p++){
        *p = 0; 
    }
}

double inner_product(const double *a, const double *b, int n){
    int sum = 0, *p, *q;

    for(p = a, q = b; p < a + n; p++, q++){
        sum = (*p)*(*q);  
    }

    return sum;
}

int *find_middle(int a[], int n){
    return (a + n/2);
}

int find_largest(int a[], int n){
    int i, max, *p;

    max = *a;
    for(p = a; p < a + n; p++)
        if(*p > max)
            max = *p;
    return max;
}

void find_two_largest(const int *a, int n, int *largest, int *second_largest){
    int *p;

    *largest = *a;
    *second_largest = *(a + 1);

    for(p = a; p < a + n; p++){
        if(*p > *largest)
            *largest = *p;
            *second_largest = *largest;
    }
}

*/