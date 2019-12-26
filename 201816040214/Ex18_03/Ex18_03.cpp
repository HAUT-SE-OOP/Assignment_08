// Ex18_03.cpp
// Using template functions
#include <iostream>

using namespace std;

// function template isEqualTo definition
// original function
template <typename T>
bool isEqualTo( T &a, T &b )
{
    if(a == b)
        return true;
    else
        return false;
} // end function

template <typename T>
bool operator==( T &a, T &b )
{
    if(a == b)
        return true;
    else
        return false;
}

int main()
{
    int a = 1, b = 1;//initialize two int values
//if a==b, output true, or output false
    if(isEqualTo(a,b))
        cout << "true\n" << endl;
    else
        cout << "false\n" << endl;

    if( a == b)
        cout << "true" << endl;
    else
        cout << "false" << endl;

    return 0;
}
