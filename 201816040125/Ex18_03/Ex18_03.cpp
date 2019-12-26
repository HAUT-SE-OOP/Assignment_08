#include <iostream>

using namespace std;

template<typename T>
bool isEqualTo(Ta,Tb)
{
    if(Ta==Tb)
        return true;
    else
        return false;

}

int main()
{
    int a=1,b=1;
    int c=2,d=3;
    double x=12.1,y=12.1;
    isEqualTo(a,b);
    isEqualTo(c,d);
    isEqualTo(x,y);
}
