#include <iostream>

using namespace std;

template <typename T>
bool isEqualTo(const T &a,const T &b)
{
    if(a==b)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int a=1,b=4;
    double c=1.1,d=2.2;
    isEqualTo(a,b);
    cout <<a<<"=="<<b<<endl;
    isEqualTo(c,d);
    cout <<c<<"=="<<d<<endl;
    return 0;
}
