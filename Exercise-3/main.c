#include "include/exercise2.h"
#include <stdlib.h>

int main(void)
{
    person_t *jack = malloc(sizeof(person_t));
    person_t *carol = malloc(sizeof(person_t));
    person_t *axel = malloc(sizeof(person_t));

    jack->name = "jack";
    jack->style= "Action";

    carol->name = "jack";
    carol->style= "Action";

    axel->name = "jack";
    axel->style= "Sci-Fi";

    // Get the most wanted movie style
    char *style = whatMovieStyle(jack, carol, axel);

    // Print the current movie list
    movieList();

    // Get the final movie
    char *movie = finalMovieChoice();

    // Choose the pop corn
    char *food = popCornTaste("sweet");
}
