#include "TestUtils.h"
#include "cppModule.h"

TEST_CASE( "Test if C-Toolchain works", "[none]" ) {
    REQUIRE(true);
}

TEST_CASE( "Test construction with 0", "[accu]" ) {
    auto dut = Module(0);
    REQUIRE(dut.GetValue() == 0);
}

TEST_CASE( "Test construction with no param", "[accu]" ) {
    auto dut = Module();
    REQUIRE(dut.GetValue() == 0);
}

TEST_CASE( "Test construction with 1", "[accu]" ) {
    auto dut = Module(1);
    REQUIRE(dut.GetValue() == 1);
}

TEST_CASE( "Test if series of ones yield correct result", "[accu]" ) {
    auto dut = Module(0);
    REQUIRE(dut.GetValue() == 0);

    for (size_t i = 0; i < 5; i++)
    {
        dut.AddValue(1);
        REQUIRE(dut.GetValue() == i+1);
    }
}

// Further tests ...