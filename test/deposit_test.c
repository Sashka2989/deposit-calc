#include <ctest.h>
#include <../src/deposit.h>

CTEST(Test_1, DepositIncorrected)
{
    int result = CheckInp(9999, 15);
	
    int expected = 0;
	
    ASSERT_EQUAL(expected, result);
}

CTEST(Test_2, DayIncorrected)
{
    int result = CheckInp(50, 366);
	
    int expected = 0;
	
    ASSERT_EQUAL(expected, result);
}
