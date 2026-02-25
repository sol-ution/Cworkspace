/* #include directive */
#include <stdio.h>
#include <stdlib.h>

/* #define directive */


/* external variable */


/* prototypes */
void read_cards(void);
void analyze_hand(void);
void print_result(void);

/*
    main: 
    calls read_cards, analyze_hand, 
    and print_result repeatedly.
*/

int main(void)
{
    for(;;){
        read_cards();
        analyze_hand();
        print_result();
    }

    system("pause");
    return 0;
}

/*
    read_cards: reads the cards into external variables;
                checks for bad cards and duplicate cards.

*/

void read_cards(void){

}

/*
    analyze_hand: Determines whether the hand contains
                  a straight, a flush, four-of-a-kind, and/or
                  three-of-a-kind; determines the number of pairs;
                  stores the results into external variables.

*/

void analyze_hand(void){

}

/*
    print_result: Notifies the user of the result, using
                  the external variables set by analyze hand.
*/

void print_result(void){


}