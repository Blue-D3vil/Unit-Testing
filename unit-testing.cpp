#define BOOST_TEST_MODULE MyModuleName
#include <boost/test/included/unit_test.hpp>
#include "rational.h"

using namespace ExactArithmetic;

Rational x, y;

BOOST_AUTO_TEST_CASE(addtion_test)
{
	x = 1; y = 2;
	BOOST_CHECK_EQUAL((x + y), 3);
}

BOOST_AUTO_TEST_CASE(subtraction_test)
{
	x = 2; y = 1;
	BOOST_CHECK_EQUAL((x - y), 1);
}

BOOST_AUTO_TEST_CASE(multiplication_test)
{
	x = 2; y = 2;
	BOOST_CHECK_EQUAL((x * y), 4);

}

BOOST_AUTO_TEST_CASE(division_test)
{
	x = 2; y = 2;
	BOOST_CHECK_EQUAL((x / y), 1);
}