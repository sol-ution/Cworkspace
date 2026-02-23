#include <stdio.h>
#include <stdlib.h>

int main(void){

    float buf;
    float max = 0;

    do{
        printf("Enter a number: ");
        scanf("%f", &buf);

        if(buf > max){
            max = buf;
        }

    }while(buf != 0.0);

    printf("The largest number entered was %f\n", max);                                                                                                                                                                                                                                                                                                                                                                                          

    system("pause");
    return 0;
}
