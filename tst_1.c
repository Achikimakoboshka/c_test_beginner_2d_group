#include <stdarg.h>
#include <stddef.h>
#include <setjmp.h>
#include "cmocka\include\cmocka.h"

int maxim(int a, int b, int c, int d);

static void test_1(void **state) {
	int res1 = maxim (7,6,5,4);
	assert_int_equal (res1,7);
}

static void test_2(void **state) {
	int res2 = maxim (7,6,5,7);
	assert_int_equal (res2,7);
}

static void test_3(void **state) {
	int res3 = maxim (7,6,7,7);
	assert_int_equal (res3,7);
}

static void test_4(void **state) {
	int res4 = maxim (7,7,7,7);
	assert_int_equal (res4,7);
}

static void test_5(void **state) {
	int res5 = maxim (6,7,7,4);
	assert_int_equal (res5,7);
}

static void test_6(void **state) {
	int res6 = maxim (6,7,5,7);
	assert_int_equal (res6,7);
}

static void test_7(void **state) {
	int res7 = maxim (6,5,7,7);
	assert_int_equal (res7,7);
}

int main(void) {
    const struct CMUnitTest tests[] = {
        cmocka_unit_test( test_1 ),
		cmocka_unit_test( test_2 ),
		cmocka_unit_test( test_3 ),
		cmocka_unit_test( test_4 ),
		cmocka_unit_test( test_5 ),
		cmocka_unit_test( test_6 ),
		cmocka_unit_test( test_7 ),
    };
    return cmocka_run_group_tests(tests, NULL, NULL);
}