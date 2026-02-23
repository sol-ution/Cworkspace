#include <stdio.h>
#include <stdlib.h>

int main(void){

    int n1, n2;
    printf("Enter two integers: ");
    scanf("%d %d", &n1, &n2);

    
    while(n1 % n2 != 0){
        int gcd = n1 % n2;
        n1 = n2;
        n2 = gcd;
    }

    printf("Greatest common divisor: %d\n", n2);

    system("pause");
    return 0;
}
