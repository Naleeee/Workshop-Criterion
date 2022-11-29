#include "../include/exercise1.h"

int basicAddition(int x, int y)
{
    return x + y;
}

int multipleAddition(int x, int y, int z)
{
    int result = 0;

    result += x;
    y += x + y;
    if (z > 200) {
        result += z;
    }
    result += y;

    return result;
}

int simpleAdditions()
{
    int result = 0;

    result += basicAddition(4, 6);
    result += basicAddition(4092, 180235);
    result += multipleAddition(4, 7, 20);
    result += multipleAddition(31, 64, 300);

    return result;
}
