#include <iostream>
#include <string>
using namespace std;

template <typename T>

//bool operator==( T & ) const;
bool isEqualTo(T &t1,T &t2)
{
    if( t1 == t2 )
        return true;
    else
        return false;
}

int main()
{
    int x = 2,y = 2;
    cout << isEqualTo(x,y) << endl;

    string f = "Hello",g = "birthday";
    cout << isEqualTo(f,g);
    return 0;
}
