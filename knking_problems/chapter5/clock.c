#include <stdio.h>
#include <stdlib.h>

int main(void){

    int hour, min = 0;
    char time = 'A';

    printf("Enter a 24-hour time: ");
    scanf("%d:%d", &hour, &min);

    if(hour >= 12){
        hour -= 12;
        time = 'P';
    }

    printf("Equlivent 12-hour time: %d:%d %cM\n", hour, min, time);

    system("pause");
    return 0;
}
