#include <iostream>
using namespace std;

template <typename T>
bool isEqualTo(T& a,T& b)
{
    if(a == b)
        return true;

    else
        return false;

}

int main()
{
    int x = 1,y = 2;
    isEqualTo(x,y);
    double m = 1.1,n = 1.1;
    isEqualTo(m,n);
}
