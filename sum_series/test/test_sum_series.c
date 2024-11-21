#include "unity.h"
#include "your_header_file.h" // Chèn tệp chứa các hàm cần kiểm thử

void setUp(void) {
    
}

void tearDown(void) {
    
}

// Test case cho hàm sumS1
void test_sumS1(void) {
    TEST_ASSERT_EQUAL(1, sumS1(1));
    TEST_ASSERT_EQUAL(3, sumS1(2));
    TEST_ASSERT_EQUAL(6, sumS1(3));
    TEST_ASSERT_EQUAL(10, sumS1(4));
    TEST_ASSERT_EQUAL(15, sumS1(5));
    TEST_ASSERT_EQUAL(21, sumS1(6));
    TEST_ASSERT_EQUAL(28, sumS1(7));
    TEST_ASSERT_EQUAL(36, sumS1(8));
    TEST_ASSERT_EQUAL(45, sumS1(9));
    TEST_ASSERT_EQUAL(55, sumS1(10));
}

// Test case cho hàm sumS2
void test_sumS2(void) {
    TEST_ASSERT_EQUAL(1, sumS2(1));
    TEST_ASSERT_EQUAL(4, sumS2(2));
    TEST_ASSERT_EQUAL(9, sumS2(3));
    TEST_ASSERT_EQUAL(16, sumS2(4));
    TEST_ASSERT_EQUAL(25, sumS2(5));
    TEST_ASSERT_EQUAL(36, sumS2(6));
    TEST_ASSERT_EQUAL(49, sumS2(7));
    TEST_ASSERT_EQUAL(64, sumS2(8));
    TEST_ASSERT_EQUAL(81, sumS2(9));
    TEST_ASSERT_EQUAL(100, sumS2(10));
}

// Test case cho hàm sumS3
void test_sumS3(void) {
    TEST_ASSERT_EQUAL(2, sumS3(1));
    TEST_ASSERT_EQUAL(6, sumS3(2));
    TEST_ASSERT_EQUAL(12, sumS3(3));
    TEST_ASSERT_EQUAL(20, sumS3(4));
    TEST_ASSERT_EQUAL(30, sumS3(5));
    TEST_ASSERT_EQUAL(42, sumS3(6));
    TEST_ASSERT_EQUAL(56, sumS3(7));
    TEST_ASSERT_EQUAL(72, sumS3(8));
    TEST_ASSERT_EQUAL(90, sumS3(9));
    TEST_ASSERT_EQUAL(110, sumS3(10));
}

// Test case cho hàm sumS4
void test_sumS4(void) {
    TEST_ASSERT_EQUAL(1, sumS4(1));
    TEST_ASSERT_EQUAL(-1, sumS4(2));
    TEST_ASSERT_EQUAL(2, sumS4(3));
    TEST_ASSERT_EQUAL(-2, sumS4(4));
    TEST_ASSERT_EQUAL(3, sumS4(5));
    TEST_ASSERT_EQUAL(-3, sumS4(6));
    TEST_ASSERT_EQUAL(4, sumS4(7));
    TEST_ASSERT_EQUAL(-4, sumS4(8));
    TEST_ASSERT_EQUAL(5, sumS4(9));
    TEST_ASSERT_EQUAL(-5, sumS4(10));
}

// Test case cho hàm sumS5
void test_sumS5(void) {
    TEST_ASSERT_EQUAL(1, sumS5(1));
    TEST_ASSERT_EQUAL(2, sumS5(2));
    TEST_ASSERT_EQUAL(6, sumS5(3));
    TEST_ASSERT_EQUAL(24, sumS5(4));
    TEST_ASSERT_EQUAL(120, sumS5(5));
    TEST_ASSERT_EQUAL(720, sumS5(6));
    TEST_ASSERT_EQUAL(5040, sumS5(7));
    TEST_ASSERT_EQUAL(40320, sumS5(8));
    TEST_ASSERT_EQUAL(362880, sumS5(9));
    TEST_ASSERT_EQUAL(3628800, sumS5(10));
}

// Test case cho hàm sumS6
void test_sumS6(void) {
    TEST_ASSERT_FLOAT_WITHIN(0.0001, 1.0, sumS6(1));
    TEST_ASSERT_FLOAT_WITHIN(0.0001, 1.5, sumS6(2));
    TEST_ASSERT_FLOAT_WITHIN(0.0001, 1.8333, sumS6(3));
    TEST_ASSERT_FLOAT_WITHIN(0.0001, 2.0833, sumS6(4));
    TEST_ASSERT_FLOAT_WITHIN(0.0001, 2.2833, sumS6(5));
    TEST_ASSERT_FLOAT_WITHIN(0.0001, 2.4500, sumS6(6));
    TEST_ASSERT_FLOAT_WITHIN(0.0001, 2.5929, sumS6(7));
    TEST_ASSERT_FLOAT_WITHIN(0.0001, 2.7179, sumS6(8));
    TEST_ASSERT_FLOAT_WITHIN(0.0001, 2.8289, sumS6(9));
    TEST_ASSERT_FLOAT_WITHIN(0.0001, 2.9289, sumS6(10));
}

// Test case cho hàm sumS7
void test_sumS7(void) {
    TEST_ASSERT_EQUAL(1, sumS7(1));
    TEST_ASSERT_EQUAL(5, sumS7(2));
    TEST_ASSERT_EQUAL(14, sumS7(3));
    TEST_ASSERT_EQUAL(30, sumS7(4));
    TEST_ASSERT_EQUAL(55, sumS7(5));
    TEST_ASSERT_EQUAL(91, sumS7(6));
    TEST_ASSERT_EQUAL(140, sumS7(7));
    TEST_ASSERT_EQUAL(204, sumS7(8));
    TEST_ASSERT_EQUAL(285, sumS7(9));
    TEST_ASSERT_EQUAL(385, sumS7(10));
}

// Test case cho hàm sumS8
void test_sumS8(void) {
    TEST_ASSERT_EQUAL(1, sumS8(1));
    TEST_ASSERT_EQUAL(5, sumS8(2));
    TEST_ASSERT_EQUAL(32, sumS8(3));
    TEST_ASSERT_EQUAL(288, sumS8(4));
    TEST_ASSERT_EQUAL(3413, sumS8(5));
    TEST_ASSERT_EQUAL(46668, sumS8(6));
    TEST_ASSERT_EQUAL(823543, sumS8(7));
    TEST_ASSERT_EQUAL(16777216, sumS8(8));
    TEST_ASSERT_EQUAL(387420489, sumS8(9));
    TEST_ASSERT_EQUAL(10000000000, sumS8(10));
}

// Test case cho hàm sumS9
void test_sumS9(void) {
    TEST_ASSERT_EQUAL(1, sumS9(1));
    TEST_ASSERT_EQUAL(4, sumS9(2));
    TEST_ASSERT_EQUAL(10, sumS9(3));
    TEST_ASSERT_EQUAL(20, sumS9(4));
    TEST_ASSERT_EQUAL(35, sumS9(5));
    TEST_ASSERT_EQUAL(56, sumS9(6));
    TEST_ASSERT_EQUAL(84, sumS9(7));
    TEST_ASSERT_EQUAL(120, sumS9(8));
    TEST_ASSERT_EQUAL(165, sumS9(9));
    TEST_ASSERT_EQUAL(220, sumS9(10));
}

// Test case cho hàm sumS10
void test_sumS10(void) {
    TEST_ASSERT_FLOAT_WITHIN(0.0001, 1.0, sumS10(1));
    TEST_ASSERT_FLOAT_WITHIN(0.0001, 1.5, sumS10(2));
    TEST_ASSERT_FLOAT_WITHIN(0.0001, 1.8333, sumS10(3));
    TEST_ASSERT_FLOAT_WITHIN(0.0001, 2.0833, sumS10(4));
    TEST_ASSERT_FLOAT_WITHIN(0.0001, 2.2833, sumS10(5));
    TEST_ASSERT_FLOAT_WITHIN(0.0001, 2.4500, sumS10(6));
    TEST_ASSERT_FLOAT_WITHIN(0.0001, 2.5929, sumS10(7));
    TEST_ASSERT_FLOAT_WITHIN(0.0001, 2.7179, sumS10(8));
    TEST_ASSERT_FLOAT_WITHIN(0.0001, 2.8289, sumS10(9));
    TEST_ASSERT_FLOAT_WITHIN(0.0001, 2.9289, sumS10(10));
}

// Test case cho hàm sumS11
void test_sumS11(void) {
    TEST_ASSERT_EQUAL(1, sumS11(1));
    TEST_ASSERT_EQUAL(3, sumS11(2));
    TEST_ASSERT_EQUAL(9, sumS11(3));
    TEST_ASSERT_EQUAL(33, sumS11(4));
    TEST_ASSERT_EQUAL(153, sumS11(5));
    TEST_ASSERT_EQUAL(873, sumS11(6));
    TEST_ASSERT_EQUAL(5913, sumS11(7));
    TEST_ASSERT_EQUAL(46233, sumS11(8));
    TEST_ASSERT_EQUAL(4037913, sumS11(9));
    TEST_ASSERT_EQUAL(36288033, sumS11(10));
}

int main(void) {
    UNITY_BEGIN();
    RUN_TEST(test_sumS1);
    RUN_TEST(test_sumS2);
    RUN_TEST(test_sumS3);
    RUN_TEST(test_sumS4);
    RUN_TEST(test_sumS5);
    RUN_TEST(test_sumS6);
    RUN_TEST(test_sumS7);
    RUN_TEST(test_sumS8);
    RUN_TEST(test_sumS9);
    RUN_TEST(test_sumS10);
    RUN_TEST(test_sumS11);
    return UNITY_END();
}
