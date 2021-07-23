#include <stdarg.h>
#include <stddef.h>
#include <setjmp.h>
#include "cmocka\include\cmocka.h"

 int max (int a, int b);
 int min (int a, int b);
 int maxim(int a, int b, int c, int d);
 int star(int a, int b, int c, int d) ;

static void test_1(void **state) {
	
	int res1 = min(1,4);
	assert_int_equal (res1, 1);
}
static void test_2(void **state) {
	
	int res2 = min(6,2);
	assert_int_equal (res2, 2);
}
static void test_3(void **state) {
	
	int res3 = min(3,3);
	assert_int_equal (res3, 3);
}
static void test_4(void **state) {
	
	int res4 = max(1,4);
	assert_int_equal (res4, 4);
}
static void test_5(void **state) {
	
	int res5 = max(6,2);
	assert_int_equal (res5, 6);
}
static void test_6(void **state) {
	
	int res6 = max(3,3);
	assert_int_equal (res6, 3);
}

int main(void) {
    const struct CMUnitTest tests[] = {
        cmocka_unit_test( test_1 ),
		cmocka_unit_test( test_2 ),
		cmocka_unit_test( test_3 ),
		cmocka_unit_test( test_4 ),
		cmocka_unit_test( test_5 ),
		cmocka_unit_test( test_6 ),
    };
    return cmocka_run_group_tests(tests, NULL, NULL);
}