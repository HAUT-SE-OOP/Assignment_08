#include <iostream>
#include <stdexcept>
#include "Array.h"
using namespace std;

int main()
{
    Array<float>integers1(7);
    Array<float>integers2;
    cout << "Size of Array integers1 is" << integers1.getsize() << "\nArray after initialization:\n" << integers1;
    cout << "\nSize of Array integers2 is" << integers2.getsize() << "\nArray after initialization:\n" << integers2;
    cout << "\nEnter 17 integers:" << endl;
    cin >> integers1 >> integers2 ;
    cout << "\nAfter input, the Arrays contain:\n" << "integers1:\n" << integers1 << "integers2:\n" << integers2;
    cout << "\nEvaluating : integers1 != integers2" << endl;
    Array <float>integers3(integers1);
    cout << "\nSize of Array integers3 is "<< integers3.getsize() << "\nArray after initialization:\n" << integers3;
    cout <<"\nAssigning integers2 to integers1:" << endl;
    integers1 = integers2;
    cout << "integers1:\n" << integers1 << "integers2:\n" << integers2;
    cout << "\nEvaluating: integers1 == integers2 " << endl;
    if ( integers1 == integers2 )
        cout << "integers1 and integers2 are equal" << endl;
    cout << "\nintegers1[5] is " << integers1[5];
    cout << "\n\nAssigning 1000 to integers1[5]" << endl;
    integers1[5] = 1000;
    cout << "integers1:\n" <<integers1;

    return 0;
}
