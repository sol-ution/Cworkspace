#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>

#define DICE_NUM 6
/*point: 1, win: 2, lose: 0*/

int roll_dice(void);
bool play_game(void);

int main(void){

    char ch; bool game;
    int win_count = 0; int lose_count = 0;
    srand((unsigned) time(NULL));

    while(true){
        game = play_game();

        if(game == true){
            win_count++;
        }
        else if(game == false){
            lose_count++;
        }
        printf("Play again? ");
        scanf(" %c", &ch);
        printf("\n");

        if(ch == 'y'){
            continue;
        }
        else if(ch == 'n'){
            printf("Wins:  %d   Losses:  %d\n", win_count, lose_count);
            break;
        }
    }

    system("pause");
    return 0;
}

int roll_dice(void){
    int sum = 0;

    sum = (rand() % DICE_NUM) + 1;
    sum += (rand() % DICE_NUM) + 1;

    return sum;
}

bool play_game(void){
    int a[12] = {1, 0, 0, 1, 1, 1, 2, 1, 1, 1, 2, 0};
    int num; int point;

    num = roll_dice();

    printf("You rolled: %d\n", num);
    if(a[num - 1] == 0){
        printf("You lose!\n\n");
        return false;
    }
    else if(a[num - 1] == 2){
        printf("You win!\n\n");
        return false;
    }
    else{
        printf("Your point is %d\n", num);
        point = num;
    }

    while(true){
        num = roll_dice();
        printf("You rolled: %d\n", num);
        if(num == point){
            printf("You win!\n\n");
            return true;
        }
        else if(num == 7){
            printf("You lose!\n\n");
            return false;
        }
    }

}