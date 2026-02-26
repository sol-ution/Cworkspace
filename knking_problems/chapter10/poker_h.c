/* #include directive */
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <ctype.h>

/* #define directive */
#define NUM_RANKS 13
#define NUM_SUITS 4
#define NUM_CARDS 5

/* external variables */
bool straight, flush, four, three;
int pairs; /* can be 0, 1, or 2 */

/* prototypes */
void read_cards(int num_in_rank[], int num_in_suit[], int hand[NUM_CARDS][2]);
void analyze_hand(int num_in_rank[], int num_in_suit[], int hand[NUM_CARDS][2]);
void print_result(void);

/*
    main: 
    calls read_cards, analyze_hand, 
    and print_result repeatedly.
*/

int main(void)
{
    int hand[NUM_CARDS][2] = {0, };
    int num_in_rank[NUM_RANKS];
    int num_in_suit[NUM_SUITS];

    for(;;){
        read_cards(num_in_rank, num_in_suit , hand);
        analyze_hand(num_in_rank, num_in_suit, hand);
        print_result();
    }

    system("pause");
    return 0;
}

/*
    read_cards: reads the cards into external variables;
                checks for bad cards and duplicate cards.
*/

void read_cards(int num_in_rank[], int num_in_suit[], int hand[NUM_CARDS][2]){
    char rank_ch, suit_ch;
    int rank, suit, ch;
    bool bad_card, duplicate_card;
    int cards_read = 0;

    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 2; j++){
            hand[i][j] = 0;
        }
    }

    while(cards_read < NUM_CARDS){ //읽은 카드들보다 카드의 수가 작으면
        bad_card = false;
        duplicate_card = false;

        printf("Enter a card: ");

        rank_ch = tolower(getchar());
        hand[cards_read][0] = tolower(rank_ch);

        switch(rank_ch){
            case '0': exit(EXIT_SUCCESS);
            case '2': break;
            case '3': break;
            case '4': break;
            case '5': break;
            case '6': break;
            case '7': break;
            case '8': break;
            case '9': break;
            case 't': break;
            case 'j': break;
            case 'q': break;
            case 'k': break;
            case 'a': break;
            default:  bad_card = true;
        }

        suit_ch = tolower(getchar());
        hand[cards_read][1] = suit_ch;

        switch(suit_ch){
            case 'c': break;
            case 'd': break;
            case 'h': break;
            case 's': break;
            default:  bad_card = true;
        }

        while((ch = getchar()) != '\n'){ //추가입력 방지
            if(ch != ' ') bad_card = true;
        }

        for(int i = 0; i < cards_read; i++){
            for(int j = 0; j < 2; j++){
                if(hand[i][0] == rank_ch && hand[i][1] == suit_ch)
                    duplicate_card = true;
            }
        }

        if(bad_card)
            printf("Bad card; ignored.\n");
        else if(duplicate_card) 
            printf("Duplicate card; ignored.\n");
        else{
            cards_read++;
        }
    }
}

/*
    analyze_hand: Determines whether the hand contains
                  a straight, a flush, four-of-a-kind, and/or
                  three-of-a-kind; determines the number of pairs;
                  stores the results into external variables.
*/

void analyze_hand(int num_in_rank[], int num_in_suit[], int hand[NUM_CARDS][2]){
    int num_consec = 0;
    int rank = 0;
    char suit = 0;
    straight = true;
    flush = true;
    four = false;
    three = false;
    pairs = 0;

    /*rank순으로 정렬 작은 -> 큰*/
    for(int i = 0; i < NUM_CARDS - 1; i++){
        if(hand[i][0] > hand[i + 1][0]){
            rank = hand[i][0];
            suit = hand[i][1];
            hand[i + 1][0] = hand[i][0];
            hand[i + 1][1] = hand[i][0];
            hand[i][0] = rank;
            hand[i][1] = suit;
        }
    }

    /* check for flush */
    for(int i = 0; i < NUM_CARDS; i++) // 배열 안 윈소들이 같음을 확인하는 법
        if(hand[0][1] != hand[i][1])
            flush = false;

    /* check for straight */
    for(int i = 0; i < NUM_CARDS - 1; i++)  //배열 안 원소들이의 공차가 1일때
        if(hand[i][0] + 1 != hand[i + 1][0])
            straight = false;

    /* check for 4-of-a-kind, 3-of-a-kind, and pairs */
    for(int i = 0; i < NUM_CARDS; i++){
        for(int j = NUM_CARDS - 1; j >= i; j--)
            if(hand[i][0] == hand[j][0]){
                num_consec++;
            }
    }
    if(num_consec == 4) four = true;
    if(num_consec == 3) three = true;
    if(num_in_rank[rank] == 2) pairs++;
}

/*
    print_result: Notifies the user of the result, using
                  the external variables set by analyze hand.
*/

void print_result(void){
    if(straight && flush) printf("Straight flush");
    else if(four)         printf("Four of a kind");
    else if(three &&
            pairs == 1)   printf("Full house");
    else if(flush)        printf("Flush");
    else if(straight)     printf("Straight");
    else if(three)        printf("Three of a kind");
    else if(pairs == 2)   printf("Two pairs");
    else if(pairs == 1)   printf("Pair");
    else                  printf("high card");

    printf("\n\n");
}