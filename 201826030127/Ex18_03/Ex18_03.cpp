#include <iostream>
using namespace std;
#include<string.h>
template<typename T>
class Isequal
{
public:
Isequal(T k)
:m(k)
{

}

  bool operator==(const Isequal<T> n)
{
    if(m==n.m&&sizeof(n.m)==sizeof(m))
        return true;
    else
        return false;

}

private:
    T m;

};
template<typename T>
bool Isequalto( const Isequal<T>x, const  Isequal<T>y )
{
       if((Isequal<T>)x==(Isequal<T>)y)
        return true;
       else
        return false;
}
int main()
{


    Isequal<int>a(34);
    Isequal<int> b(90);
    Isequal<double> c(34.56);
    Isequal<double> d(34.56);
    Isequal<char> e('r');
    Isequal<char> f('r');
    Isequal<string> g("abc");
    Isequal<string> h("abcd");

    if(Isequalto(a,b)==0)//just int a and int b
        cout<<"a!=b"<<endl;
    else
        cout<<"a=b"<<endl;

    if(Isequalto(c,d)==0)//just double c and double d
        cout<<"c!=d"<<endl;
    else
        cout<<"c=d"<<endl;

        if(Isequalto(e,f)==0)//just char e and char f
        cout<<"e!=f"<<endl;
    else
        cout<<"e=f"<<endl;

        if(Isequalto(g,h)==0)//just string g and string  h
        cout<<"g!=h"<<endl;
    else
        cout<<"g=h"<<endl;
    return 0;
}
