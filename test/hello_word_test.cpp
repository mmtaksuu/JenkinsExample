/**
 * @file    : JenkinsExampleTest project file
 * @author  : MEHMET AKSU
 * @note    : mmtaksu.25@gmail.com
 * @date    : 27 / Mart / 2022
 * @code    : hello_word_test.cpp file
 * @details : 
 */


#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "hello_word.hpp"

TEST_CASE("Test heloWorld", "[test]")
{
    REQUIRE("Hello World!" == HelloWorld{}.helloWorld());
}


