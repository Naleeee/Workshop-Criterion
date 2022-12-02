#include "../include/exercise1.h"

int addOrRemoveMoney(int value, int currentMoney)
{
    return currentMoney + value;
}

int canIBuyAGame(int gamePrice, int currentMoney)
{
    if (gamePrice > currentMoney) {
        return 1;
    } else {
        return 0;
    }
}

int thanksGrandma(int currentMoney)
{
    return currentMoney + 50;
}

int canIBuyABread(int myMoney)
{
    if (myMoney < 1) {
        return 0;
    } else {
        return 1;
    }
}
