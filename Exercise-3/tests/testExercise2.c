#include "../include/exercise2.h"
#include <criterion/criterion.h>
#include <criterion/redirect.h>

void redirectEveryStdout()
{
    cr_redirect_stdout();
    cr_redirect_stderr();
}

Test(Cinema, MovieStyle)
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
    char *style = whatMovieStyle(jack, carol, axel);

    cr_assert_str_eq(style, "Action");
}

Test(Cinema, MovieList, .init=redirectEveryStdout)
{
    movieList();

    char output[] = "The current movie list is:\n    - Star Wors, again another return of the Jaydi.\n    - Titounic, Plouf!\n    - Trotro, à l'école des sorciers\n    - Whiploush, the drum smasher.\n";

    fflush(stdout);
    cr_assert_stdout_eq_str(output);
}

Test(Cinema, FinalMovie)
{
    char *res = finalMovieChoice();

    cr_assert_str_eq(res, "Star Wors, again another return of the Jaydi");
}

Test(Cinema, PopCornTaste)
{
    char *res = popCornTaste("sweet");

    cr_assert_str_neq(res, "salty");
}

