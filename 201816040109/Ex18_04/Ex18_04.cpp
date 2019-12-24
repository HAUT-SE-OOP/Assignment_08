#include <iostream>
#include <stdexcept>
#include "Array.h"
using namespace std;

int main()
{
    Array<int> test_int1(6);
    Array<double> test_double1(6);
    Array<int> test_int2;
    Array<double> test_double2;
    cin >> test_int1;
    cin >> test_double1;
    cout << test_int1 << endl;
    cout << test_double1 << endl;
    cout << test_int1.getSize() << endl;
    cout << test_double1.getSize() << endl;
    test_int2 = test_int1;
    test_double2 = test_double1;
    cout << test_int2 << endl;
    cout << test_double2 << endl;
    return 0;
}
