#include <stdio.h>
#include <stdlib.h>

int main(void){

    float loan, interest, m_pay;
    float interest_rate;
    int num;

    printf("Enter amount of loan: ");
    scanf("%f", &loan);
    printf("Enter interest rate: ");
    scanf("%f", &interest);
    printf("Enter monthly payment: ");
    scanf("%f", &m_pay);
    printf("Enter number of payment: ");
    scanf("%d", &num);

    interest = (interest / 100) / 12;

    for(int i = 1; i <= num; i++){
        interest_rate = loan * interest;
        printf("Balance remaining after %d payment: $%.2f\n", i, loan = loan - m_pay + interest_rate);
    }

    system("pause");
    return 0;
}
