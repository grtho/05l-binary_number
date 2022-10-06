#include "BinaryNumber.hpp"
#include <iostream>

using std::cout, std::endl;

/*
using namespace std;
template<typename Type>
bool test(string name, Type is, Type shouldBe);
void testConstructor();
void testConversions();
void testSubtraction();
void testAddition();
int main()
{
    cout << "BinaryNumber Class Testing: " << endl;
    testConstructor();
    testConversions();
    testAddition();
    testSubtraction();
    return 0;
}
void testConstructor(){
    BinaryNumber b1("1101");
    stringstream str;
    str << b1;
    string name = "Constructor";
    string ans = "1101";
    test(name, str.str(), ans);
}
void testConversions(){
    BinaryNumber b1(13);
    stringstream str;
    str << b1;
    string name = "Conversions";
    string ans = "1101";
    test(name, str.str(), ans);
}
void testAddition() {
    BinaryNumber b1(13);

    BinaryNumber b2("1101");
    BinaryNumber b3 = b1 + b2;
    stringstream str;
    str << b1;
    string name = "Addition: B1 retains value";
    string ans = "1101";
    test(name, str.str(), ans);
    str.str("");
    str << b2;
    name = "Addition: B2 retains value";
    ans = "1101";
    test(name, str.str(), ans);
}*/

int main() {
    cout << "Executing `auto num = BinaryNumber(\"1011\");`... ";
    auto num = BinaryNumber("1011");
    cout << "Done!" << endl;

    cout << R"(Executing `cout << num << "\n" << endl;`...)" << endl;
    cout << num << "\n" << endl;

    cout << "Executing `auto num2 = BinaryNumber(\"101\");`... ";
    auto num2 = BinaryNumber("101");
    cout << "Done!" << endl;

    cout << R"(Executing `cout << num2 << "\n" << endl;`...)" << endl;
    cout << num2 << "\n" << endl;

    cout << "Executing `auto sum = num + num2;`... ";
    auto sum = num + num2;
    cout << "Done!" << endl;

    cout << R"(Executing `cout << sum << "\n" << endl;`...)" << endl;
    cout << sum << "\n" << endl;

    cout << "Executing `auto difference = num - num2;`... ";
    auto difference = num - num2;
    cout << "Done!" << endl;

    cout << R"(Executing `cout << difference << "\n" << endl;`...)" << endl;
    cout << difference << "\n" << endl;
}