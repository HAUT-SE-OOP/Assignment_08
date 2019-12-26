#include <iostream>
#include <string>
using namespace std;

template< typename T >
bool isEqualTo(T a, T b)
{
    if(a == b)
        return true;
    else
        return false;
}

int main()
{
    int a = 1, b = 1;
    if(isEqualTo(a, b))
        cout << "1";

    return 0;
}
