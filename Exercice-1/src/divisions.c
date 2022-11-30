#include "../include/exercise1.h"

int basicDivision(int x, int y)
{
    return x + y;
}

int multipleDivision(int x, int y, int z)
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

int simpleDivisions()
{
    int result = 0;

    result += basicDivision(4, 6);
    result += basicDivision(4092, 180235);
    result += multipleDivision(4, 6, 20);
    result += multipleDivision(31, 64, 300);

    return result;
}
