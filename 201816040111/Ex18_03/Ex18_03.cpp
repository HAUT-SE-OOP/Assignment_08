#include <iostream>

using namespace std;

template < typename T >
bool isEqualTo ( T a , T b )
{
    if ( a == b )
        return true;
    else
        return false;
}

template < typename T >
bool operator==( T a, T b )
{
    if ( a == b )
        return true;
    else
        return false;
}

int main()
{
    int c=1,d=1;
    double a=1.1 , b=2.2;
    cout << "int c = " << c << " , int d = " << d << endl;
    cout << "double a = " << a << " , double b = " << b << endl;
    cout << "\n";
    cout << "Test isEqualTo function now!" << endl;
    cout << "\n";
    if ( isEqualTo(c,d) == 0 )
        cout << "c and d is not equal" << endl;
    else
        cout << "c and d is equal" << endl;

    if ( isEqualTo(a,b) == 0 )
        cout << " a and b is not equal" << endl;
    else
        cout << "a and b is equal";
    cout << "\n";
    cout <<  "Now test operator == function!" << endl;
    cout << "\n";
    if ( c == d )
        cout << "c and d is  equal" << endl;
    else
        cout << "c and d is not equal" << endl;

    if ( a == b )
        cout << " a and b is equal" << endl;
    else
        cout << "a and b is not equal" << endl;

    return 0;
}
