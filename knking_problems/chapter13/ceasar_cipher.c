#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void encrypt(char *message, int shift);

int main(void){

    int ch = 0; int count = 0;
    int shift_amount;
    char cipher[100 + 1];

    printf("Enter message to be encrypted: ");
    while((ch = getchar()) != '\n' && ch != EOF){
        cipher[count] = ch;
        count++;
    }
    cipher[count] = '\0';

    printf("Enter shift amount (1-25): ");
    scanf("%d", &shift_amount);
    encrypt(cipher, shift_amount);

    printf("Encrypted message: ");
    printf("%s\n", cipher);

    system("pause");
    return 0;
} 

void encrypt(char *message, int shift){
    char *p = message;
    for(; *p != '\0'; p++){
        if(*p >= 'A' && *p <= 'Z'){
            *p = (((*p - 'A') + shift) % 26 + 'A');
        }
        else if(*p >= 'a' && *p <= 'z'){
            *p = (((*p - 'a') + shift) % 26 + 'a');
        }
        else{
         ;   
        }
    }
}