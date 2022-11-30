#include "../include/exercise1.h"

int basicSubstraction(int x, int y)
{
    return x - y;
}

int multipleSubstraction(int x, int y, int z)
{
    int result = 1000;

    result -= x;
    y -= x - y;
    if (z > 1000) {
        result -= z;
    }
    result -= y;

    printf("%d\n", result);
    return result;
}

int simpleSubstractions()
{
    int result = 0;

    result -= basicSubstraction(10, 6);
    result -= basicSubstraction(5000, 386);
    result -= multipleSubstraction(10, 6, 300);
    result -= multipleSubstraction(22, 49, 1300);

    return result;
}
