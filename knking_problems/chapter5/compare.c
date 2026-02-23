#include <stdio.h>
#include <stdlib.h>

int main(void){

    int i1, i2, i3, i4;
    int max, min;

    printf("Enter four integers: ");
    scanf("%d %d %d %d", &i1, &i2, &i3, &i4);

    if(i1 > i2){
        max = i1;
        min = i2;
    }
    else{
        max = i2;
        min = i1;
    }

    if(max < i3){
        max = i3;
    }
    else if(min > i3){
        min = i3;
    }

    if(max < i4){
        max = i4;
    }
    else if(min > i4){
        min = i4;
    }
    


    printf("Largest: %d\n", max);
    printf("Smallest: %d\n", min);



    system("pause");
    return 0;
}