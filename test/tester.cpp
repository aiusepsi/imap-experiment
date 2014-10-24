#include "external/catch.hpp"

int blah(int);

TEST_CASE("Test blah", "[blah]")
{
	REQUIRE(blah(0) == 1);
	REQUIRE(blah(1) == 2);
	//REQUIRE(blah(2) == 2);
}
