#include "unity.h"
#include "hangman.h"

#define PROJECT_NAME    "HangmanGame"

void test_drawHangman(void);
//void test_replay(void);
//void test_startGame(void);

// Required by the unity test framework
void setUp()
{

}

void tearDown()
{

}

//Start of the application test
int main()
{
    //Initiate the Unity Test Framework
    UNITY_BEGIN();

    //Run Test functions
    RUN_TEST(test_drawHangman);
    //RUN_TEST(test_replay);
    //RUN_TEST(test_startGame);

    //Close the Unity Test Framework
    return UNITY_END();
}

void test_drawHangman(void)
{
    TEST_ASSERT_EQUAL(0, drawHangman(0));
    TEST_ASSERT_EQUAL(1, drawHangman(1));
    TEST_ASSERT_EQUAL(2, drawHangman(2));
    TEST_ASSERT_EQUAL(3, drawHangman(3));
    TEST_ASSERT_EQUAL(4, drawHangman(4));
    TEST_ASSERT_EQUAL(5, drawHangman(5));
    TEST_ASSERT_EQUAL(6, drawHangman(6));
}

