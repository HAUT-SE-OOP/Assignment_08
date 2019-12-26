#include <iostream>
#include <string>
using namespace std;

template <typename T>
bool isEqualTo(T t1,T t2)
{
    if(t1==t2)
        return true;
    return false;
}
template <typename T>
class Tt
{
    friend std::ostream &operator<<(std::ostream &output,const Tt& r)
    {
        output<<r.t;
        return output;
    }
public:
    Tt(T a){t=a;}
    bool operator==(const Tt & right)
    {
        if(t==right.t)
            return true;
        return false;
    }
private:
    T t;
};

int main()
{
    int a=1,b=2;
    if(isEqualTo(a,b))
        cout<<a<< " is equal to "<<b<<endl;
    else
         cout<<a <<" is not equal to "<<b<<endl;
    Tt<int> c(3), d(3);
     if(c==d)
        cout<<c<<" is equal to "<<d<<endl;
    else
         cout<<c<<" is not equal to "<<d<<endl;


    double e=1.1,f=1.1;
    if(isEqualTo(e,f))
        cout<<e<<" is equal to "<<f<<endl;
    else
         cout<<e<<" is not equal to "<<f<<endl;
    Tt<double> g(2.2),h(3.3);
    if(g==h)
        cout<<g<<" is equal to "<<h<<endl;
    else
         cout<<g<<" is not equal to "<<h<<endl;

    string i="hello",j="hello";
    if(isEqualTo(i,j))
        cout<<i<<" is equal to "<<j<<endl;
    else
         cout<<i<<" is not equal to "<<j<<endl;

   Tt<string> k("you"),l("we");
   if(k==l)
        cout<<k<<" is equal to "<<l<<endl;
    else
         cout<<k<<" is not equal to "<<l<<endl;
    return 0;
}
