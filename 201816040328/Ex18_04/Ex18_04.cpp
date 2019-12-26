#include <iostream>
#include "Array.h"
#include<iomanip>
#include<stdexcept>

using namespace std;


int main()
{
    Array < int > integers( 8 ); // 8-element Array

    Array < double > decimals; // 10-element Array by default


    cout << fixed << setprecision( 2 );

    // print size and contents
    cout << "Size of Array integers is "
        << integers.getsize()
        << "\nArray after initialization:\n" << integers;

    cout << "Size of Array double is "
        << decimals.getsize()
        << "\nArray after initialization:\n" << decimals;

    // input and print
    cout << "\nPlease enter 8 integers, 10 double " << endl;
    cin >> integers >> decimals ;

    cout << "\nAfter input, the Arrays contain:\n"
        << "integers:\n" << integers
        << "double:\n" << decimals;

//    outClientFile << integers << decimals << character;

    // use overload subscript operator to create rvalue
    cout << "\nintegers[2] is " << integers[2];

    // use overload subscript operator to create lvalue
    cout << "\n\nAssignment 1000 to integers[2]" << endl;
    integers[2] = 1000;
    cout << "integers:\n" << integers;


    // use overload subscript operator to create rvalue
    cout << "\ndouble[3] is " << decimals[3];

    // use overload subscript operator to create lvalue
    cout << "\n\nAssignment 2000.0 to double[3]" << endl;
    decimals[3] = 2000.0;
    cout << "double:\n" << decimals;
}
