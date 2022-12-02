#pragma once

typedef struct person_s {
    char *name;
    char *style;
} person_t;

#define randnum(min, max) ((rand() % (int)(((max) + 1) - (min))) + (min))

char *whatMovieStyle(person_t *jack, person_t *carol, person_t *axel);
void movieList();
char *finalMovieChoice();
char *popCornTaste(char *taste);
