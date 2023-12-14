#include "CppUTest/TestHarness.h"

//Compile error Failure occurs when uncommenting these 2 lines
// #include "ArduinoFake.h"
// using namespace fakeit;

extern "C"
{
	/*
	 * Add your c-only include files here
	 */
}

TEST_GROUP(MyCode)
{
    void setup()
    {
      MemoryLeakWarningPlugin::saveAndDisableNewDeleteOverloads();
    }

    void teardown()
    {
    }
};

TEST(MyCode, test1)
{
    CHECK_EQUAL(1,1);
     /*
     * Instantiate your class, or call the function, you want to test.
     * Then delete this comment
     */
}
