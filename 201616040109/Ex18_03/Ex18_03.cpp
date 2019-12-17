// Exercise 18.3 Solution:Ex18_03.cpp
#include <iostream>

using namespace std;
//Function template isEqualto
template <typename T>
bool isEqualTo(T a,T b)
{
    if(a == b)
        return true;
    else
        return false;
}

//Operator = = overload
template <class U>
bool operator==(const U &left,const  U &right)
{
    return (left == right);
}
int main()
{
    int a=10,b = 15;
    cout << "a: " << a << endl;
    cout << "b: " << b << endl;
    // test function isEqualTo
    if(isEqualTo(a,b))
        cout << "a is equal to b" <<endl;
    else
        cout << "a is not equal to b" <<endl;

    double c = 20.1, d = 20.10;
    cout << "c: " << c << endl;
    cout << "d: " << d << endl;
    // test function isEqualTo
    if(isEqualTo(c,d))
        cout << "c is equal to d" <<endl;
    else
        cout << "c is not equal to d" <<endl;

    float e=12.3,f =5.6;
    cout << "e: " << e << endl;
    cout << "f: " << f << endl;
    if(e==f)
        cout << "e is equal to f" <<endl;
    else
        cout << "e is not equal to f" <<endl;
    return 0;
}//end main
