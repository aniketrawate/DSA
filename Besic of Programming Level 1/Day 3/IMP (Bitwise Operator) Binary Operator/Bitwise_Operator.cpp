#include <iostream>
using namespace std;

int main()
{

    // Bitwise Operators
    // these are the opertors which are used only at bit level
    // (&) and, (|) or, (~) not, (<<) left shift, (>>) right shift, (^) xor

    // it works at binary bit level

    // (&) and

    int a = 5;               // 0101 in binary
    int b = 3;               // 0011 in binary
    cout << (a & b) << endl; // 0001 in binary
    // at the time of output this binary 0001 will conbeted to normal ie base 10 1

    // truth table
    // A | B | A & B
    // --|---|------
    // 0 | 0 |   0
    // 0 | 1 |   0
    // 1 | 0 |   0
    // 1 | 1 |   1

    // (|) or
    cout << (a | b) << endl; // 0111 binary
    // 0111 in decimal is 7 which will be the output

    // ~ (not)
    // a is 5 ie in binary 00000000000000000000000000000101
    cout << ~a << endl; // this operator will invert every sing bit
    // actually, in 32-bit representation: 11111111111111111111111111111010
    // now in op it will be -6 (due to two's complement representation) cause
    // most significat bit ie sign bit is 1 that represent as -ve no

    // IMP//
    ///// practice spacial casses in bitwise operator for interview

    return 0;
}