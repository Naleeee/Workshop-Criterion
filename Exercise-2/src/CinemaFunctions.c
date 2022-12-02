#include "../include/exercise2.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

char *whatMovieStyle(person_t *jack, person_t *carol, person_t *axel)
{
    if (strcmp(jack->style, carol->style)) {
        return jack->style;
    } else if (strcmp(jack->style, axel->style)) {
        return jack->style;
    } else {
        return carol->style;
    }
}

void movieList()
{
    printf("The current movie list is:\n");
    printf("    - Star Wors, again another return of the Jaydi.\n");
    printf("    - Titounic, Plouf!\n");
    printf("    - Trotro, à l'école des sorciers\n");
    printf("    - Whiploush, the drum smasher.\n");
    return;
}

char *finalMovieChoice()
{
    return "Star Wors, again another return of the Jaydi";
}

char *popCornTaste(char *taste)
{
    if (strcmp(taste, "sweet") || strcmp(taste, "Sweet")) {
        return "sweet";
    } else {
        return "salty";
    }
}
