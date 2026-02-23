#include <stdio.h>
#include <stdlib.h>

int main(void){

    int ch = 0; int count = 0;
    int shift_amount;
    int cipher[100];

    printf("Enter message to be encrypted: ");
    while((ch = getchar()) != '\n' && ch != EOF){
        cipher[count] = ch;
        count++;
    }

    printf("Enter shift amount (1-25): ");
    scanf("%d", &shift_amount);

    printf("Encrypted message: ");
    for(int i = 0; i < count; i++){

        if(cipher[i] > 'A' && cipher[i] < 'Z')
        {
            printf("%c", ((cipher[i] - 'A') + shift_amount) % 26 + 'A');
        }
        else if(cipher[i] > 'a' && cipher[i] < 'z')
        {
            printf("%c", ((cipher[i] - 'a') + shift_amount) % 26 + 'a');
        }
        else
        {
            printf("%c", cipher[i]);
        }
    }


    system("pause");
    return 0;
} 