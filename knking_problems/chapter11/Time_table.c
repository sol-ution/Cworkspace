#include <stdio.h>
#include <stdlib.h>

void find_closest_flight(int desired_time,
                         int *departure_time,
                         int *arrival_time);

int main(void){

    int input_hr = 0, input_min = 0;
    int departure_time, arrival_time;
    char a_or_p1, a_or_p2;

    printf("Enter a 24-hour time: ");
    scanf("%d:%d", &input_hr, &input_min);

    input_min = input_hr*60 + input_min;

    find_closest_flight(input_min, &departure_time, &arrival_time);

    if(departure_time / 60 >= 12){
        a_or_p1 = 'p';
    }
    else{
        a_or_p1 = 'a';
    }

    if(arrival_time / 60 >= 12){
        a_or_p2 = 'p';
    }
    else{
        a_or_p2 = 'a';
    }

    a_or_p1 = (departure_time / 60 >= 12) ? 'p' : 'a';
    a_or_p2 = (arrival_time / 60 >= 12) ? 'p' : 'a';

    printf("Cloest departure time is %d:%2d %c.m arriving at %d:%02d %c.m\n", 
    departure_time / 60, departure_time % 60, a_or_p1, 
    arrival_time / 60, arrival_time % 60, a_or_p2);

    system("pause");
    return 0;
}

void find_closest_flight(int desired_time, int *departure_time, int *arrival_time)
{
    if(desired_time < 531)
        *departure_time = 8 * 60, *arrival_time = 10 * 60 + 43;
    else if(desired_time > 530 && desired_time < 631)
        *departure_time = 9 * 60 + 43, *arrival_time = 11 * 60 + 52;
    else if(desired_time > 630 && desired_time < 723)
        *departure_time = 11 * 60 + 19, *arrival_time = 13 * 60 + 31;
    else if(desired_time > 722 && desired_time < 803)
        *departure_time = 12 * 60 + 47, *arrival_time = 15 * 60;
    else if(desired_time > 802 && desired_time < 892)
        *departure_time = 14 * 60, *arrival_time = 16 * 60 + 8;
    else if(desired_time > 891 && desired_time < 1042)
        *departure_time = 15 * 60 + 45, *arrival_time = 17 * 60 + 55;
    else if(desired_time > 1041 && desired_time < 1222)
        *departure_time = 19 * 60, *arrival_time = 21 * 60 + 20;
    else
        *departure_time = 21 * 60 + 45, *arrival_time = 23 * 60 + 58;
}