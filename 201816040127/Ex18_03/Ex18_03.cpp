#include <iostream>
#include <string>

using namespace std;

template <class T>
bool isEqualTo(T a,T b)
{
    if(a==b)
        return true;
    else
        return false;
}

int main()
{
    int a=1,b=2;

    double c=1.1,d=1.1;

    string e="nihao",f="hello";

    isEqualTo(c,d);
    isEqualTo(e,f);
     cout << "a is " << a << "\nb is " << b
      << "\nc is " << c << "\nd is " << d
      <<"\ne is " << e << "\nf is " << f<<endl;

    // test relational and equality operators
    if ( a == b )
      cout << "a equals b" << endl;

    if ( a != b )
      cout << "a is not equal to b" << endl;

    if ( c == d )
      cout << "c equals d" << endl;

    if ( c != d )
      cout << "c is not equal to d" << endl;

    if ( e == f )
      cout << "e equals f" << endl;

    if ( e != f )
      cout << "e is not equal to f" << endl;
}
