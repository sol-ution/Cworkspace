#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(void){

    char ch;
    char string[100];
    int i = 0;
    
    printf("Enter message: ");

    while((ch = getchar()) != '\n' && ch != EOF){
        string[i] = ch;
        i++;
    }
    string[i] = '\0';


    for(int j = 0; j < i; j++){
        string[j] = toupper((unsigned char)string[j]);
        switch(string[j]){
            case 'A': printf("4"); 
                break;
            case 'B': printf("8"); 
                break;
            case 'E': printf("3"); 
                break;
            case 'I': printf("1"); 
                break;
            case 'O': printf("0"); 
                break;
            case 'S': printf("5"); 
                break;
            default: printf("%c", string[j]);
        }
    }

    printf("\n");

    system("pause");
    return 0;
} 