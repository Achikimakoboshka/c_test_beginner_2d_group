#include <stdarg.h>
#include <stddef.h>
#include <setjmp.h>
#include "cmocka\include\cmocka.h"

int star(int a, int b, int c, int d);

static void test_1(void **state) {

    int res1 = star (6,4,5,7); //a < d
	assert_int_equal (res1, 6);
}

static void test_2(void **state) {
	
	int res2 = star (6,4,7,5); //a < c 
	assert_int_equal (res2,6);
}

static void test_3(void **state) { //a < b
    
	int res3 = star (6,7,5,4);
	assert_int_equal (res3, 6);
}

static void test_4(void **state) { //a>=b, >=c
    
	int res4 = star (6,6,6,7); 
	assert_int_equal (res4,6);
}

static void test_5(void **state) { //a>=b, >=d

    int res5 = star (6,6,7,6);
	assert_int_equal (res5,6);
}

static void test_6(void **state) { //a>=c, >=d

    int res6 = star (6,7,6,6);
	assert_int_equal (res6,6);
}

static void test_7(void **state) { //b < c 

    int res7 = star(4,6,7,5);
	assert_int_equal (res7,6);
}

static void test_8(void **state) { // b < d

    int res8 = star (4,6,5,7);
	assert_int_equal (res8,6);
}

static void test_9(void **state) { // b < a 

    int res9 = star (7,6,4,5);
	assert_int_equal (res9,6);
}

static void test_10(void **state) { // // b>=c, >=d 

    int res10 = star (7,6,6,6);
	assert_int_equal (res10,6);
}

static void test_11(void **state) { // c < a

    int res11 = star (7,5,6,4);
	assert_int_equal (res11, 6);
}

static void test_12(void **state) { // c < b

    int res12 = star (4,5,6,7);
	assert_int_equal (res12,6);
}

static void test_13(void **state) { // c < d

    int res13 = star (4,5,6,7);
	assert_int_equal (res13, 6);
}

static void test_14(void **state) { // d < a

    int res14 = star (7,4,5,6);
	assert_int_equal (res14,6);
}

static void test_15(void **state) { // d < b

    int res15 = star (4,7,5,6);
	assert_int_equal (res15,6);
}

static void test_16(void **state) { // d < c

    int res16 = star (4,5,7,6);
	assert_int_equal (res16,6);
}

static void test_17(void **state) { // a=b=c=d

    int res17 = star (6,6,6,6);
	assert_int_equal (res17,6);
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
		cmocka_unit_test( test_11 ),
		cmocka_unit_test( test_12 ),
		cmocka_unit_test( test_13 ),
		cmocka_unit_test( test_14 ),
		cmocka_unit_test( test_15 ),
		cmocka_unit_test( test_16 ),
		cmocka_unit_test( test_17 ),
    };
    return cmocka_run_group_tests(tests, NULL, NULL);
}