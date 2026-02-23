#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>

#define NUM_SUITS 4
#define NUM_RANkS 13

int main(void){

    bool in_hand[NUM_SUITS][NUM_RANkS] = {false,};
    int num_cards, rank, suit;
    const char rank_code[] = {'2', '3', '4', '5', '6', '6', '7', '8',
                              '9', 't', 'j', 'q', 'k', 'a'};
    const char suit_code[] = {'c', 'd', 'h', 's'};

    srand((unsigned) time(NULL));

    printf("Enter number of cards in hand:  ");
    scanf("%d", &num_cards);

    printf("Your hand: ");
    while(num_cards > 0){
        suit = rand() % NUM_SUITS;      //picks a random suit
        rank = rand() % NUM_RANkS;      //picks a random rank
        // 모듈러 연산을 이용해서, (1 ~ 13)중 무작위값 반환
        if(!in_hand[suit][rank]){
            in_hand[suit][rank] = true;
            num_cards--;
            printf(" %c%c", rank_code[rank], suit_code[suit]);
        }
    }
    printf("\n");

    system("pause");
    return 0; 
} 