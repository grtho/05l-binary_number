//
// Created by Griffin Thompson on 10/5/22.
//

#include "BinaryNumber.hpp"
#include <cmath>
#include <iostream>
#include <ostream>

BinaryNumber::BinaryNumber(const std::string &str) {
    int num = 0;
    for (int i = str.length() - 1; i >= 0; i--) {
        if (str[i] == '1')
            num += (int)pow(2, ((str.length() - 1) - i));
    }

    internalValue = num;
}

BinaryNumber::BinaryNumber(unsigned int num) { internalValue = num; }

BinaryNumber BinaryNumber::operator+(BinaryNumber b) {
    unsigned int newInternalValue = internalValue + b.internalValue;

    return BinaryNumber(newInternalValue);
}

BinaryNumber BinaryNumber::operator-(BinaryNumber b) {
    unsigned int newInternalValue = internalValue - b.internalValue;
    return BinaryNumber(newInternalValue);
}

std::ostream &operator<<(std::ostream &os, const BinaryNumber &b) {
    std::string str;
    unsigned long int num = b.internalValue;
    auto MAX = static_cast<unsigned long int>(pow(2, 32) / 2);
    int j = 0;

    for (unsigned long int i = MAX; i >= 1; i /= 2) {
        j++;
        if (num % i != num) {
            str.append("1");
            num -= i;
        } else {
            str.append("0");
        }

        if (j % 4 == 0) {
            str.append(" ");
            j = 0;
        }
    }
    os << str;
    return os;
}

unsigned int BinaryNumber::debugInternalValue() const { return internalValue; }
