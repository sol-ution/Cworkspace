#include <stdio.h>
#include <stdlib.h>


//(3k + 1, 3k + 2, 3k + 3)

int main(void){


    int ch;
    int group = 0;


    printf("Enter phone number: ");

    while(((ch = getchar()) != '\n' && ch != EOF)){

        if(ch > 64 && ch < 80){
            printf("%d", group = ((ch - 62) / 3) + 1);
        }
        else{
            printf("%c", ch);
        }

    }
    printf("\n");


    system("pause");
    return 0;
}
