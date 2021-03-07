#include "doctest.h"
#include "snowman.hpp"
using namespace ariel;

#include <string>
using namespace std;

//test of we recive the proper body part of the snowman to it's number
//compares popular and basic snowman from the excersize page
TEST_CASE("Good snowman code") {
    CHECK(snowman(11114411) == string(" _===_ \n (.,.) \n ( : ) \n ( : ) "));
    CHECK(snowman(11111111) == string(" _===_ \n (.,.) \n<( : )>\n ( : ) "));
    CHECK(snowman(22222222) == string("  ___  \n ..... \n\\(o.o)/\n (] [) \n (\" \") "));
    CHECK(snowman(33333333) == string("   _   \n  /_\\  \n (O_O) \n/(> <)\\\n (___) "));
    CHECK(snowman(44444444) == string("  ___  \n (_*_) \n (- -) \n (   ) \n (   ) "));
    CHECK(snowman(12341234) == string(" _===_ \n (O.-)/\n<(> <) \n (   ) "));
    CHECK(snowman(33232124) == string("   _   \n  /_\\  \n\\(o_O) \n (] [)>\n (   ) "));
    CHECK(snowman(12222212) == string(" _===_ \n\\(o.o)/\n ( : ) \n (\" \") "));
    CHECK(snowman(32443333) == string("   _   \n  /_\\  \n (-.-) \n/(> <)\\\n (___) "));
    CHECK(snowman(44444432) == string("  ___  \n (_*_) \n (- -) \n (> <) \n (\" \") "));
    CHECK(snowman(44242123) == string("  ___  \n (_*_) \n\\(o -) \n (] [)>\n (___) "));
    CHECK(snowman(41341144) == string("  ___  \n (_*_) \n (O,-) \n<(   )>\n (   ) "));
    
}

//check for exception with bad snowman build codes
TEST_CASE("Bad snowman code") {
    //too short build
    CHECK_THROWS(snowman(555));
    CHECK_THROWS(snowman(0));
    CHECK_THROWS(snowman(1234123));
    //too long build
    CHECK_THROWS(snowman(123412341));
    //negatives
    CHECK_THROWS(snowman(-12));
    CHECK_THROWS(snowman(-1234123));
    CHECK_THROWS(snowman(-12341234));
    //invalid numbers in build
    CHECK_THROWS(snowman(12345678));
    CHECK_THROWS(snowman(11110011));
    
}
