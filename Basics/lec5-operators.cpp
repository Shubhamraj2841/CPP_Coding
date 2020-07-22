#include <iostream>
using namespace std;

int main(){

    // 1. arithmetic operators
    // perform arithmetic and mathematical operations on operands
    // 1.1. unary operators (++, --)
    // operators that work on single operands
    // 1.2. binary operators (+, -, *, /)
    // operators that work on two operands

    int a = 5;
    int b = 7;
    int c = a + b;
    int d = ++a;
    cout << d << endl;

    // 2. relational operators (==, !=, >=, <=)
    // used for comparision of values of 2 operands

    cout << (a <= 4) << endl;

    // 3. logical operators
    // used to combine 2 or more conditions
    // logical AND (&&)
    // logical OR (||)
    // logical NOT (!)

    // 4. bitwise operators
    // used to perform operations on bit level
    // bitwise AND (&)
    // bitwise OR (|)
    // bitwise XOR (^) (result is 1 if two bits are diff)
    // bitwise NOT (~) (inverts all the bits)
    // left shift (<<) (no. * (2)^(no. of left shifts))
    // right shift (>>) (no. / (2)^(no. of right shifts))

    cout << (a & b) << endl;
    cout << (a | b) << endl;
    cout << (a ^ b) << endl;
    cout << (~ a) << endl;
    cout << (a << 3) << endl;
    cout << (a >> 1) << endl;

    // 5. assignment operators (=, +=, -=, *=, /=)
    // assign values to variables

    int m = 0;
    m += a;
    cout << m << endl;

    // 6. sizeof operator
    cout << sizeof(char) << endl;
    cout << sizeof(a) << endl;

    // 7. conditional operators
    // var = exp1 ? exp2 : exp3
    // if exp1 is true; var will be assigned exp2
    // if exp1 is false; val will be assigned exp3

    int var = (3 > 4) ? 6 : 8;
    cout << var << endl;

    return 0;
}
