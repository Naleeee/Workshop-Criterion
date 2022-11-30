#include "../include/exercise1.h"
#include <criterion/criterion.h>
#include <criterion/internal/test.h>

Test(Addition, Basic)
{
    int res = basicAddition(4, 6);

    cr_assert_eq(res, 10);
}

Test(Addition, Bigger)
{
    int res = basicAddition(4092, 180235);

    cr_assert_geq(res, 184327);
}

Test(Addition, multiple)
{
    int res = multipleAddition(4, 7, 20);

    cr_assert_eq(res, 22);
}

Test(Addition, multipleBig)
{
    int res = multipleAddition(31, 64, 300);

    cr_assert_leq(res, 1000);
}
