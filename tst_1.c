#include <stdarg.h>
#include <stddef.h>
#include <setjmp.h>
#include "cmocka\include\cmocka.h"

int maxim(int a, int b, int c, int d);

static void test_1(void **state) { //a
	int res1 = maxim (7,6,5,4);
	assert_int_equal (res1,7);
}

static void test_2(void **state) { //ab
	int res2 = maxim (7,7,5,4);
	assert_int_equal (res2,7);
}

static void test_3(void **state) { //ac
	int res3 = maxim (7,6,7,4);
	assert_int_equal (res3,7);
}

static void test_4(void **state) { //ad
	int res4 = maxim (7,6,5,7);
	assert_int_equal (res4,7);
}

static void test_5(void **state) { //abc
	int res5 = maxim (7,7,7,4);
	assert_int_equal (res5,7);
}

static void test_6(void **state) { //abd
	int res6 = maxim (7,7,5,7);
	assert_int_equal (res6,7);
}

static void test_7(void **state) { //acd
	int res7 = maxim (7,6,7,7);
	assert_int_equal (res7,7);
}

static void test_8(void **state) { //abcd
	int res8 = maxim (7,7,7,7);
	assert_int_equal (res8,7);
}

static void test_9(void **state) { //b
	int res9 = maxim (6,7,5,4);
	assert_int_equal (res9,7);
}

static void test_10(void **state) { //bc
	int res10 = maxim (6,7,7,4);
	assert_int_equal (res10,7);
}

static void test_11(void **state) { //bd
	int res11 = maxim (6,7,5,7);
	assert_int_equal (res11,7);
}

static void test_12(void **state) { //bcd
	int res12 = maxim (6,7,7,7);
	assert_int_equal (res12,7);
}

static void test_13(void **state) { //c
	int res13 = maxim (6,5,7,4);
	assert_int_equal (res13,7);
}

static void test_14(void **state) { //cd
	int res14 = maxim (6,5,7,7);
	assert_int_equal (res14,7);
}

static void test_15(void **state) { //d
	int res15 = maxim (6,5,4,7);
	assert_int_equal (res15,7);
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
		cmocka_unit_test( test_8 ),
		cmocka_unit_test( test_9 ),
		cmocka_unit_test( test_10 ),
		cmocka_unit_test( test_11),
		cmocka_unit_test( test_12),
		cmocka_unit_test( test_13),
		cmocka_unit_test( test_14),
		cmocka_unit_test( test_15),
    };
    return cmocka_run_group_tests(tests, NULL, NULL);
}