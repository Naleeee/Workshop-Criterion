#include "../include/exercise1.h"

int basicMultiplication(int x, int y)
{
    return x * y;
}

int multipleMultiplication(int x, int y, int z)
{
    int result = 0;

    result *= x;
    y *= x * y;
    if (z > 200) {
        result *= z;
    }
    result *= y;

    return result;
}

int simpleMultiplications()
{
    int result = 0;

    result += basicMultiplication(4, 6);
    result += basicMultiplication(423, 312);
    result += multipleMultiplication(4, 6, 20);
    result += multipleMultiplication(31, 64, 300);

    return result;
}

