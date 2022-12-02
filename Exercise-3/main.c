#include "include/exercise1.h"
#include "include/exercise2.h"
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    printf("Exercise 1:\n");
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


    printf("\n\nExercise 2:\n");
    person_t *jack = malloc(sizeof(person_t));
    person_t *carol = malloc(sizeof(person_t));
    person_t *axel = malloc(sizeof(person_t));

    jack->name = "Jack";
    jack->style= "Action";

    carol->name = "Carol";
    carol->style= "Action";

    axel->name = "Axel";
    axel->style= "Sci-Fi";

    // Get the most wanted movie style
    char *style = whatMovieStyle(jack, carol, axel);

    // Print the current movie list
    movieList();

    // Get the final movie
    char *movie = finalMovieChoice();

    // Choose the pop corn
    char *food = popCornTaste("sweet");
    printf("The final movie is %s, it is a %s movie and we have delicious %s popcorn.\n", movie, style, food);
}
