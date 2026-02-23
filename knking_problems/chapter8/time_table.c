#include <stdio.h>
#include <stdlib.h>

int main(void){

    int input_hr = 0, input_min = 0;
    int c1 = 0; int c2 = 1;
    int flag = 0;
    char a_or_p1 = 'a'; char a_or_p2 = 'a';
    int dep_time[8] = {480, 583, 679, 767, 840, 945, 1140, 1305};
    int arr_time[8] = {616, 712, 811, 900, 968, 1075, 1280, 1438};

    printf("Enter a 24-hour time: ");
    scanf("%d:%d", &input_hr, &input_min);

    input_min += input_hr*60;

    if(input_min < ((dep_time[c1] + dep_time[c2]) / 2)){
        printf("Closest departure time is %d:%02d %c.m, arriving at %d:%02d %c.m\n", 
        dep_time[c1] / 60, dep_time[c1] % 60, a_or_p1, 
        arr_time[c1] / 60, arr_time[c1] % 60, a_or_p2);
        flag = 1;

    }

    if(input_min > ((dep_time[c1 + 7] + dep_time[c2 + 6]) / 2)){
        a_or_p1 = 'p';
        a_or_p2 = 'p';
        printf("Closest departure time is %d:%02d %c.m, arriving at %d:%02d %c.m\n", 
        dep_time[c1 + 7] / 60, dep_time[c1 + 7] % 60, a_or_p1, 
        arr_time[c1 + 7] / 60, arr_time[c1 + 7] % 60, a_or_p2);
        flag = 1;

    }

    while(flag == 0)
    {
        printf("%d\n", c1);
        if((input_min > ((dep_time[c1] + dep_time[c2]) / 2)) && 
        (input_min < ((dep_time[c1 + 1] + dep_time[c2 + 1]) / 2)))
        {
            if((dep_time[c1 + 1] / 60) < 12){
                a_or_p1 = 'a';
            }
            else{
                a_or_p1 = 'p';
            }
            if((dep_time[c2 + 1] / 60) < 12){
                a_or_p2 = 'a';
            }
            else{
                a_or_p2 = 'p';
            }
            printf("CLosest departure time is %d:%02d %c.m, arriving at %d:%02d %c.m\n", 
            dep_time[c1 + 1] / 60, dep_time[c1 + 1] % 60, a_or_p1, 
            arr_time[c1 + 1] / 60, arr_time[c1 + 1] % 60, a_or_p2);
            break;
        }
        c1++; c2++;
    }

    system("pause");
    return 0;
}
