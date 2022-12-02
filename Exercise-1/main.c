#include "include/exercise1.h"
#include <stdio.h>

int main(void)
{
    int myMoney = 4;

    // I find 10 euros
    myMoney = addOrRemoveMoney(10, myMoney);

    // I check if I can buy a 60$ game
    if (canIBuyAGame(60, myMoney) == 0) {
        printf("Yes! I can buy this game and become a pro gamer!\n");
    } else {
        printf("No way!!! I don't have enough money...\n");
    }

    // I received a 50$ gift from grandma
    myMoney = thanksGrandma(myMoney);

    // I buy the game
    myMoney = addOrRemoveMoney(-60, myMoney);

    // I check if I can buy a bread
    if (canIBuyABread(myMoney) == 0) {
        printf("Let's buy a bread!\n");
    } else {
        printf("No way!!! I don't have enough money...\n");
    }

    printf("My final amount of money is %d\n", myMoney);
    return 0;
}
