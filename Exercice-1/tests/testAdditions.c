#include "../include/exercise1.h"
#include <criterion/criterion.h>
#include <criterion/internal/assert.h>
#include <criterion/internal/test.h>

Test(Addition, Basic)
{
    int res = basicAddition(4, 6);

    cr_log_info("This is an informational message. They are not displayed "
        "by default.");
    cr_log_warn("This is a warning. They indicate some possible malfunction "
        "or misconfiguration in the test.");
    cr_log_error("This is an error. They indicate serious problems and "
        "are usually shown before the test is aborted.");
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
