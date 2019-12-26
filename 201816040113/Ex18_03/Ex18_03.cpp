#include <iostream>

using namespace std;

template<typename T>
bool isEqualTo(T &a,T &b)
{
    if(a==b)
        return true;
    else
        return false;
}

template<typename T>
bool &operator==(const T &a,const T &b)//equal operator
{
    if(a!=b)
        return false;//not equal
    else
        return true;//is equal
}
int main()
{
    int a=1,b=2;
    double c=1.2,d=2.3;
    string e="hello",f="world";
    if(isEqualTo(a,b))
        cout<<a<<"和"<<b<<"相等"<<endl;
    else
        cout<<a<<"和"<<b<<"不相等"<<endl;

        if(isEqualTo(c,d))
        cout<<c<<"和"<<d<<"相等"<<endl;
    else
        cout<<c<<"和"<<d<<"不相等"<<endl;
        if(isEqualTo(e,f))
        cout<<e<<"和"<<f<<"相等"<<endl;
    else
        cout<<e<<"和"<<f<<"不相等"<<endl;
    return 0;
}
