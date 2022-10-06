//
// Created by Griffin Thompson on 10/5/22.
//

#ifndef INC_05L_BINARY_NUMBER_BINARYNUMBER_HPP
#define INC_05L_BINARY_NUMBER_BINARYNUMBER_HPP
#include <iostream>

class BinaryNumber {
public:
    explicit BinaryNumber(const std::string&);
    explicit BinaryNumber(unsigned int);

    BinaryNumber operator +(BinaryNumber);
    BinaryNumber operator -(BinaryNumber);

    friend std::ostream& operator <<(std::ostream&, const BinaryNumber&);

    [[nodiscard]] unsigned int debugInternalValue() const;

private:
    unsigned int internalValue;
};


#endif //INC_05L_BINARY_NUMBER_BINARYNUMBER_HPP
