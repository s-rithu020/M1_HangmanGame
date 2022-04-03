#include "unity.h"
#include "hangman.h"

//#define PROJECT_NAME "HangmanGame"

// Required by the unity test framework
void setUp()
{

}

void tearDown()
{

}

void test_start()
{
    TEST_ASSERT_EQUAL(-1, startGame());
}


//Start of the application test
int main()
{
    //Initiate the Unity Test Framework
    UNITY_BEGIN();

    //Run Test functions
    RUN_TEST(test_start);

    //Close the Unity Test Framework
    return UNITY_END();
}


