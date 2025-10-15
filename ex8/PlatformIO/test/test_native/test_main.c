#include <unity.h>
#include <ex4.c>

void setUp(void) {
    // set stuff up here
    ex4_statecart_initialize();
    ex4_statecart_step();

}

void tearDown(void) {
    // clean stuff up here
    ex4_statecart_terminate();
}

void test_initial(void)
{
    TEST_ASSERT_EQUAL(1, ex4_statecart_Y.shut);
    TEST_ASSERT_EQUAL(0, ex4_statecart_Y.off);
    TEST_ASSERT_EQUAL(0, ex4_statecart_Y.on);
    TEST_ASSERT_EQUAL(0, ex4_statecart_Y.vol1);
    TEST_ASSERT_EQUAL(0, ex4_statecart_Y.vol2);
}

void test_start(void)
{
    ex4_statecart_U.start = 1;
    ex4_statecart_step();
    ex4_statecart_U.start = 0;


    TEST_ASSERT_EQUAL(0, ex4_statecart_Y.shut);
    TEST_ASSERT_EQUAL(1, ex4_statecart_Y.off);
    TEST_ASSERT_EQUAL(1, ex4_statecart_Y.vol1);
}

void test_t_on(void)
{
    ex4_statecart_U.t_on = 1;
    ex4_statecart_step();   
    ex4_statecart_U.t_on = 0;

    TEST_ASSERT_EQUAL(0, ex4_statecart_Y.off);
    TEST_ASSERT_EQUAL(1, ex4_statecart_Y.on);
}

void test_inc(void)
{
    ex4_statecart_U.inc = 1;
    ex4_statecart_step();
    ex4_statecart_U.inc = 0;

    TEST_ASSERT_EQUAL(0, ex4_statecart_Y.vol1);
    TEST_ASSERT_EQUAL(1, ex4_statecart_Y.vol2);
}

void test_dec(void)
{
    ex4_statecart_U.dec = 1;
    ex4_statecart_step();
    ex4_statecart_U.dec = 0;

    TEST_ASSERT_EQUAL(1, ex4_statecart_Y.vol1);
    TEST_ASSERT_EQUAL(0, ex4_statecart_Y.vol2);
}

void test_stop(void)
{
    ex4_statecart_U.stop = 1;
    ex4_statecart_step();
    ex4_statecart_U.stop = 0;

    TEST_ASSERT_EQUAL(1, ex4_statecart_Y.shut);
    TEST_ASSERT_EQUAL(0, ex4_statecart_Y.off);
    TEST_ASSERT_EQUAL(0, ex4_statecart_Y.on);
    TEST_ASSERT_EQUAL(0, ex4_statecart_Y.vol1);
    TEST_ASSERT_EQUAL(0, ex4_statecart_Y.vol2);
}


int main(int argc, char **argv)
{
    UNITY_BEGIN();

    RUN_TEST(test_initial);
    RUN_TEST(test_start);
    RUN_TEST(test_t_on);
    RUN_TEST(test_inc);
    RUN_TEST(test_dec);
    RUN_TEST(test_stop);

    UNITY_END();

    return 0;
}
