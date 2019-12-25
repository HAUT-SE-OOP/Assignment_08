//Ex18_04.cpp
#include <iostream>
#include <iomanip>
#include <stdexcept>
#include "Array.h"
using namespace std;

int main()
{
    Array integers1(7);
    Array integers2(7);

    cout << "Size of Array integers1 is " 
        << integers1.getSize()
        << "\nArray after initialization:" << integers1;

    cout << "\nSize of Array integers2 is " 
         << integers2.getSize();
         << "\nArray after initialization:" << integers2;
    cin >> integers1 >> integers2;
    cout << "\nAfter input, the Arrays contain:\n" 
        << "integers1:\n" << integers1;
        << "integers2:\n" << integers2;

    cout << "\nEvaluating: integers1 != integers2" << endl;
    if( integers1 != integers2)
        cout << "integers1 and integers2 are not equal" << endl;

    Array integers3(integers1);

    cout << "\nSize of Array integers3 is " 
    << integers3.getSize() 
    <<"\nArray after initialization:\n" << integers3;

    cout << "\nAssigning integers2 to integers1:" << endl;
    integers1 = integers2;

    cout << "integers1:\n" << integers1 
    << "integers2:\n" << integers2;

    //use overload equality(==)operator
    if(integers1 == integers2)
        cout << "integers1 and integers2 are equal" << endl;

    //use overload subscript operator to create value
    cout << "\n\nintegers1[5] is " << integers1[5];

    //use overload subscript operator to create value
    cout << "\n\nAssigning 1000 to integers1[5]" << endl;
    integers1[5] = 1000;
    cout << "integers1:\n" << integers1;
   try
   {
       cout << "\nAttempt to asssign 1000 to integers1[15]" << endl;;
       integers1[5] = 1000;
   }
   catch( out_of_range &ex)
   {
       cout << "An exception occurred: "<< ex.what() << endl;
   }
}
