#include <stdarg.h>
#include <stddef.h>
#include <setjmp.h>
#include "cmocka\include\cmocka.h"

float f_003_004(int side, int radius);

static void test_1(void **state) {

float res1 = f_003_004(10,100);
assert_true(res1 == 0.01f);

}

static void test_2(void **state) {

float res2 = f_003_004(300,100);
assert_true(res2 == 3.14f);

}

static void test_3(void **state) {

float res3 = f_003_004(10,5);
assert_true(res3 == 0.00785f);

}

static void test_4(void **state) {

float res4 = f_003_004(-1,100);
assert_true(res4 == (float)-1);

}
static void test_5(void **state) {

float res5 = f_003_004(10,0);
assert_true(res5 == (float)-1);

}


int main(void) {
const struct CMUnitTest tests[] = {
cmocka_unit_test( test_1 ),
cmocka_unit_test( test_2 ),
cmocka_unit_test( test_3 ),
cmocka_unit_test( test_4 ),
cmocka_unit_test( test_5 ),
};
return cmocka_run_group_tests(tests, NULL, NULL);
}