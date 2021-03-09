//
// Created by דביר on 07/03/2021.
//

#include "doctest.h"
#include "snowman.hpp"
using namespace ariel;

#include <string>
#include <algorithm>
#include <iostream>
using namespace std;

TEST_CASE("GOOD SNOWMAN"){
            CHECK(snowman(12112432) == string ("       \n _===_ \n\\(...) \n (> <) \n (\" \") "));
            CHECK(snowman(11111111) == string ("       \n _===_ \n (.,.) \n<( : )>\n ( : ) "));
            CHECK(snowman(12121212) == string ("       \n _===_ \n (..o)/\n<( : ) \n (\" \") "));
            CHECK(snowman(12212211) == string ("       \n _===_ \n\\(o..)/\n ( : ) \n ( : ) "));
            CHECK(snowman(12223334) == string ("       \n _===_ \n (o.o) \n/(> <)\\\n (   ) "));
            CHECK(snowman(22223331) == string ("  ___  \n ..... \n (o.o) \n/(> <)\\\n ( : ) "));
            CHECK(snowman(42222222) == string ("  ___  \n (_*_) \n\\(o.o)/\n (] [) \n (\" \") "));
            CHECK(snowman(22222222) == string ("  ___  \n ..... \n\\(o.o)/\n (] [) \n (\" \") "));
            CHECK(snowman(44442224) == string ("  ___  \n (_*_) \n\\(- -)/\n (] [) \n (   ) "));
            CHECK(snowman(31112224) == string ("   _   \n  /_\\  \n\\(.,.)/\n (] [) \n (   ) "));
            CHECK(snowman(31131114) == string ("   _   \n  /_\\  \n (.,O) \n<( : )>\n (   ) "));
            CHECK(snowman(41131112) == string ("  ___  \n (_*_) \n (.,O) \n<( : )>\n (\" \") "));

}
TEST_CASE("EROR SNOWMAN"){
            CHECK(snowman(11113333) == string ("       \n _===_ \n\\(...) \n (> <) \n (\" \") "));
            CHECK(snowman(12512232) == string ("       \n _===_ \n (.,.) \n<( : )>\n ( : ) "));;
            CHECK(snowman(12178455) == string ("   _   \n  /_\\  \n (.,.) \n (] [) \n (\" \") "));
            CHECK(snowman(12118888) == string ("  ___  \n (_*_) \n (.,O) \n<( : )>\n (\" \") "));
            CHECK(snowman(12222222) == string ("   _   \n  /_\\  \n (.,O) \n<( : )>\n ( : ) "));
            CHECK(snowman(98989898) == string ("  ___  \n (_*_) \n\\(o.o)/\n (] [) \n (\" \") "));
            CHECK(snowman(56112221) == string ("       \n _===3_ \n\\(...) \n (> <) \n (\" \") "));
            CHECK(snowman(13232323) == string ("       \n _===_ \n\\(...) \n (>   <) \n (\" \") "));
            CHECK(snowman(22333333) == string ("       \n _===_ \n\\(...) \n (> <) \n (\"  3  \") "));
}
