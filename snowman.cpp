//
// Created by דביר on 07/03/2021.
//
#include <string>
#include <array>
#include <iostream>
#include <stdexcept>
#include "snowman.hpp"
using namespace std;
const int counts = 8;
const int numberT = 10;
const int zero = 0;
const int one = 1;
const int two = 2;
const int three = 3;
const int four = 4;
const int five = 5;
const int six = 6;
const int seven = 7;
const std::string space = " ";

namespace ariel
{
    std::string snowman(int theinput)
    {
        const array<string, 4> H = {" _===_ \n", "  ___  \n ..... \n", "   _   \n  /_\\  ", "  ___  \n (_*_) \n"};
        const array<string, 4> N = {",", ".", "_", " "};
        const array<string, 4> L = {".", "o", "O", "-"};
        const array<string, 4> R = {".", "o", "O", "-"};
        const array<string, 4> X = {"<", "\\", "/", " "};
        const array<string, 4> Y = {">", "/", "\\", " "};
        const array<string, 4> T = {" : ", "] [", "> <", "   "};
        const array<string, 4> B = {" ( : ) ", " (\" \") ", " (___) ", " (   ) "};
        std::string s;
        int temp = 0;
        array<int, counts> arr{};
        temp = theinput;
        int i = counts - 1;
        int modlo = 0;
        while (temp > 0)
        {
            modlo = temp % numberT;
            temp = temp / numberT;

            if (modlo <= 4 && modlo >= 1)
            {
                arr.at(i) = modlo;
                i--;
            }
            else
            {
                throw std::out_of_range("number not true");
            }
        }

        
        for (size_t i = 0; i < 4; i++)
        {
            if (i == 0)
            {
                s += H.at(arr.at(zero) - 1);
            }

            if (i == 1) {

                if (arr.at(four) == 2 && arr.at(five) == 2) {
                    s += X.at(one) + "(" + L.at(arr.at(two) - 1) + N.at(arr.at(one) - 1) + R.at(arr.at(three) - 1) + ")" + Y.at(one) + "\n";
                }
                else if (arr.at(four) == 2 && arr.at(five) != 2) {
                    s += X.at(one) + "(" + L.at(arr.at(two) - 1) + N.at(arr.at(one) - 1) + R.at(arr.at(three) - 1) + ")" + " " + "\n";
                }
                else if (arr.at(four) != 2 && arr.at(five) == 2) {
                    s += space + "(" + L.at(arr.at(two) - 1) + N.at(arr.at(one) - 1) + R.at(arr.at(three) - 1) + ")" + Y.at(one) + "\n";
                }
                else {
                    s += space + "(" + L.at(arr.at(two) - 1) + N.at(arr.at(one) - 1) + R.at(arr.at(three) - 1) + ")" + " " + "\n";
                }
                
            }

            if (i == 2) {
                if (arr.at(four) == 2 && arr.at(five) == 2) {
                    s += " (" + T.at(arr.at(six) - 1) + ")" + " " + "\n";
                }
                else if (arr.at(four) == 2 && arr.at(five) != 2) {
                    s += " (" + T.at(arr.at(six) - 1) + ")" + Y.at(arr.at(five) - 1) + "\n";
                }

                else if (arr.at(four) != 2 && arr.at(five) == 2) {
                    s += X.at(arr.at(four) - 1) + "(" + T.at(arr.at(six) - 1) + ")" + " " + "\n";
                }
                else {
                    s += X.at(arr.at(four) - 1) + "(" + T.at(arr.at(six) - 1) + ")" + Y.at(arr.at(five) - 1) + "\n";
                }
            }

            if (i == 3)
            {
                s += B.at(arr.at(seven) - 1);
            }
        }

        cout << s.c_str();
        return s;
    }

}
