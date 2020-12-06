#include "TestUtils.h"
#include "cModule.h"

TEST_CASE( "Test if Cpp-Toolchain works", "[none]" ) {
    REQUIRE(true);
}

TEST_CASE( "Test if 0,0 yield 0", "[add]" ) {
    int r = SaturatedAdd(0,0);
    REQUIRE( r == 0);
}

TEST_CASE( "Test if 1 and 2 yield 3", "[add]" ) {
    int r = SaturatedAdd(1,2);
    REQUIRE( r == 3);
}

TEST_CASE( "Test if 75 and 50 yield 100", "[add]" ) {
    int r = SaturatedAdd(75,50);
    REQUIRE( r == 100);
}