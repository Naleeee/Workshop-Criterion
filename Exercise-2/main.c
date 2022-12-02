#include "include/exercise2.h"
#include <stdlib.h>

int main(void)
{
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
