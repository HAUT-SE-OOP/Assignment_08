#include <iostream>
#include <iomanip>
#include "Array.h"
#include <stdexcept>

using namespace std;

int main()
{
    Array<int> integers1(6);
    Array<int> integers2(6);

    cout << "the size of integers1 is " << integers1.getSize() << endl;
    cout << "place cin 6 integers:" << endl;
    cin >> integers1;
    cout << "\nafter input, the arrays is:" << "integers1:\n" << integers1 << endl;

    cout << "the size of integers2 is " << integers2.getSize() << endl;
    cout << "place cin 6 integers:" << endl;
    cin >> integers2;
    cout << "\nafter input, the arrays is:" << "integers2:\n" << integers2 << endl;

    if( integers1 != integers2)
        cout << "integers1 is not equal integers2" << endl;

    Array<int> integers3(integers1);

    cout << "the size of integers3 is " << integers3.getSize() <<
    "\nthe number of integers is: " << integers3 << endl;

    cout << "copy the integers2 to integers1:" << endl;
    integers1 = integers2;

    cout << "integers1:\n" << integers1 << "\nintegers2:\n" << integers2 << endl;

    //use overload equality(==)operator
    if(integers1 == integers2)
        cout << "integers1 and integers2 are equal" << endl;

    //use overload subscript operator to create value
    cout << "\nintegers1[5] is " << integers1[5] << endl;
    //use overload subscript operator to create value
    cout << "\ntake the 666 to integers1[5]" << endl;
    integers1[5] = 66;
    cout << "integers1:\n" << integers1 << endl;
}
