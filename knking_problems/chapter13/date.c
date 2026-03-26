#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <stdbool.h>

#define LEN 100


int main(void){
    char* month_name[] ={
        "January", "Febuary", "March", "April",
        "May", "June", "July", "August", 
        "September", "October", "November", "December"
    };
    int month = 0, year = 0, date = 0;

    printf("Enter a date (mm/dd/yyyy): ");
    scanf("%2d/%2d/%4d", &month, &date, &year);
    printf("You entered the date %s %d, %d", month_name[month - 1], date, year);

    return 0;
}

