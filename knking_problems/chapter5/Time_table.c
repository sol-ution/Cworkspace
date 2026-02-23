#include <stdio.h>
#include <stdlib.h>

int main(void){

    int input_hr = 0, input_min = 0;

    printf("Enter a 24-hour time: ");
    scanf("%d:%d", &input_hr, &input_min);

    input_min =+ input_hr*60;

    if(input_min < 531){
        printf("Cloest departure time is 8:00 a.m, arriving at 10:16 a.m\n");
    } 
    else if(input_min > 530 && input_min < 631){
        printf("Cloest departure time is 9:43 a.m, arriving at 11:52 a.m\n");
    }
    else if(input_min > 630 && input_min < 723){
        printf("Cloest departure time is 11:19 a.m, arriving at 1:31 p.m\n");
    }
    else if(input_min > 722 && input_min < 803){
        printf("Cloest departure time is 12:47 p.m, arriving at 3:00 p.m\n");
    }
    else if(input_min > 802 && input_min < 892){
        printf("Cloest departure time is 2:00 p.m, arriving at 4:08 p.m\n");
    }
    else if(input_min > 891 && input_min < 1042){
        printf("Cloest departure time is 3:45 p.m, arriving at 5:55 p.m\n");
    }
    else if(input_min > 1041 && input_min < 1222){
        printf("Cloest departure time is 7:00 p.m, arriving at 9:20 p.m\n");
    }
    else{
        printf("Cloest departure time is 9:45 p.m, arriving at 11:58 p.m\n");
    }

    system("pause");
    return 0;
}
