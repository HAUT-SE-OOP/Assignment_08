#include <iostream>
using namespace std;
#include<string>
#include<array>

template<typename T>
bool isEqualTo(T &x,T &y)
{
    if(x==y)
        return true;
    else
        return false;
}
template<typename T>
class Temp
{
public:
    Temp(T t)
    {
        x=t;
    }
    bool operator==(Temp<T> &y)
    {
        if(x==y.x)
            return true;
        else
            return false;
    }
private:
    T x;

};
int main()
{
    int a=1,b=2;
    if(isEqualTo(a,b))
        cout<<"a is equal to b"<<endl;
    else
        cout<<"a is not equal to b"<<endl;

    double c=1.1,d=2.2;
    if(isEqualTo(c,d))
        cout<<"c is equal to d"<<endl;
    else
        cout<<"c is not equal to d"<<endl;

    char e='1';
    char f='0';
    if(isEqualTo(e,f))
        cout<<"e is equal to f"<<endl;
    else
        cout<<"e is not equal to f"<<endl;

    char g[4]={'T','H','J'};
    char h[4]={'Z','H','Y'};
    if(isEqualTo(g,h))
        cout<<"g is equal to h"<<endl;
    else
        cout<<"g is not equal to h"<<endl;

    array<int,4>i={0,0,0,0};
    array<int,4>j={1,1,1,1};
    if(isEqualTo(i,j))
        cout<<"i is equal to j"<<endl;
    else
        cout<<"i is not equal to j"<<endl;

    Temp<int>x1(1);
    Temp<int>x2(1);
    if(x1==x2)
        cout<<"x1 is equal to x2"<<endl;
    else
        cout<<"x1 is not equal to x2"<<endl;

    Temp<double>x3(1.1);
    Temp<double>x4(2.2);
    if(x3==x4)
        cout<<"x3 is equal to x4"<<endl;
    else
        cout<<"x3 is not equal to x4"<<endl;

    Temp<char>x5('T');
    Temp<char>x6('H');
    if(x5==x6)
        cout<<"x5 is equal to x6"<<endl;
    else
        cout<<"x5 is not equal to x6"<<endl;

    Temp<string>x7={"THJ"};
    Temp<string>x8={"ZHY"};
    if(x7==x8)
        cout<<"x7 is equal to x8"<<endl;
    else
        cout<<"x7 is not equal to x8"<<endl;


    return 0;
}
