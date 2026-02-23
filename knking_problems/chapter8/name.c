#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <stdbool.h>

// while을 여러번 쓰는 구조가 더 효율적

int main(void){

    int ch;
    bool change = false;
    int count = 0;
    int first_name = 0;
    int last_name[20];

    printf("Enter a first and last name: ");

    while((ch = getchar()) != '\n' && ch != EOF){
        if(first_name == 0){
            first_name = ch;
        }
        if(ch == 32){ // 스페이스
            change = true;
        }
        if(change == true){
            last_name[count] = ch;
            count++;
        }
    }

    printf("You entered the name: ");
    for(int i = 0; i < count; i++){
        printf("%c", last_name[i]);
    }
    printf(", %c\n", first_name);

    system("pause");
    return 0;
}