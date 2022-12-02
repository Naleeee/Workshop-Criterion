#include "../include/exercise1.h"
#include <criterion/criterion.h>
#include <criterion/internal/assert.h>
#include <criterion/internal/test.h>
#include <stdio.h>

Test(Substraction, Basic)
{
    int res = basicSubstraction(10, 6);

    cr_assert_eq(res, 4);
}

Test(Substraction, Bigger)
{
    int res = basicSubstraction(5000,386);

    cr_assert_geq(res, 5100);
}

Test(Substraction, multiple)
{
    int res = multipleSubstraction(10, 6, 300);

    cr_assert_eq(res, 22);
}

Test(Substraction, multipleBig)
{
    int res = multipleSubstraction(31, 64, 300);

    cr_assert_gt(res, 1000);
}
