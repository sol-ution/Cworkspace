#include <stdio.h>
#include <stdlib.h>

#define N 10

void quicksort(int a[], int low, int high);
int split(int a[], int low, int high);

int main(void){
    int a[N], i;

    printf("Enter %d numbers to be sorted: ", N);
    for(i = 0; i < N; i++)
        scanf("%d", &a[i]);
    quicksort(a, 0, N - 1);

    printf("In sorted order: ");
    for(i = 0; i < N; i++)
        printf("%d ", a[i]);
    printf("\n");

    system("pause");
    return 0;
}

void quicksort(int a[], int low, int high){
    int middle;

    if(low >= high) return;
    middle = split(a, low, high);
    quicksort(a, low, middle - 1); //partition으로 나누어진 반반을 quicksort(divide and conquer)
    quicksort(a, middle + 1, high);
}

int split(int a[], int low, int high){
    int part_element = a[low];

    for(;;){
        while(low < high && part_element <= a[high]) // low가 high보다 작거나, high가 partition보다 크면 -> high shift
            high--;
        if(low >= high) break; // low == high일 경우
        a[low++] = a[high]; // low가 high보다 크면, high가 partition보다 작으면 -> high를 low자리에 대입 후 low++
        while(low < high && a[low] <= part_element) // low가 high보다 작거나, low가 partition보다 작으면 -> low shift
            low++;
        if(low >= high) break; // low == high일 경우
        a[high--] = a[low]; // low가 high보다 크면, low가 partition보다 크면 -> low를 high자리에 대입 후 high--
    }

    a[high] = part_element; //(low, high)가 만나는 지점의 값을 middle로 return;
    return high;
}