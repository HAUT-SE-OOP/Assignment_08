#include <iostream>
using namespace std;

class A
{
public:

    A( int a, double b)
    {
        num = a;
        dou = b;
    } //constructor

    bool operator == ( A &a)
    {
        if( num ==a.num && dou == a.dou)
            return true;
        else
            return false;
    } // operator ==
private:
    int num;
    double dou;
};

// function template isEqualTo definition
template <typename T>
int isEqualTo( T &a, T &b )
{
    if( a == b )
        return true;
    else
        return false;
} // end function isEqualTo

int main()
{
    int a=1 ,b=1;
    if ( isEqualTo(a,b) )
        cout <<"a is equal to b"<< endl;
    else
        cout <<"a is not equal to b"<< endl;

    A x(1,2.2), y(1,2.1);
    if ( isEqualTo(x,y) )
        cout <<"x is equal to y"<< endl;
    else
        cout <<"x is not equal to y"<< endl;
    return 0;
} //end main
