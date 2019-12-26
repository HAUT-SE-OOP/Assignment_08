#ifndef ISEQUALTO_H
#define TSEQUALTO_H
#include <iostream>
#include <array>
#include <string>
using namespace std;
template< typename T >

bool isEqualTo(T& a, T& b)
{
    if(a==b)
    {
        return true;
    }
    else
        return false;
}

template< typename T >

class isEqualT
{
public:
    isEqualT(T aa)
    {
        a=aa;
    }
    bool operator==(isEqualT& b)
    {
        if(a==b.a)
        {
            return true;
        }
        else
            return false;
    }
private:
    T a;

};
#endif // ISEQUALTO_H

int main()
{
    double a1=2.8,a2=8.0;//自定义不同类型的变量

    if(isEqualTo(a1,a2))//use isEqualTo function to determine if abc1 and abc2 are equal
    {
        cout<<"a1=a2"<<endl;
    }
    else
        cout<<"a1!=a2"<<endl;
    return 0;
}
