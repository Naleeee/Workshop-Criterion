#include "../../Exercice-1/include/exercise1.h"
#include <criterion/criterion.h>

Test(TheStory, FindABill)
{
    int res = addOrRemoveMoney(4, 10);

    cr_assert_eq(res, 14);
}

Test(TheStory, CanIBuyAGame)
{
    int myMoney = 14;
    int res = canIBuyAGame(60, myMoney);

    cr_assert_neq(res, 0);
}

Test(TheStory, GrandmaGift)
{
    int gamePrice = 60;
    int breadPrice = 1;
    int price = gamePrice + breadPrice;
    int myMoney = 14;
    int res = thanksGrandma(14);

    cr_assert_gt(res, price);
}

Test(TheStory, BuyTheGame)
{
    int myMoney = 64;
    int res = addOrRemoveMoney(-60, myMoney);

    cr_assert_geq(canIBuyABread(myMoney), 1);
}
