#include <iostream>
#include <array>
#include <string>
using namespace std;

template< typename T >
class biger
{
public:
    biger(T=0);
    ~biger(){}
    bool operator==(const biger&);
    T getbiger()
    {
        return x;
    }
private:
    T x;
};

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
    int a=1;
    int b=1;
    int c=2;

    cout<<"a=1  b=1  c=2"<<endl<<endl;

    if(isEqualTo(a,b))
        cout<<"a = b  is  True"<<endl;
    else
        cout<<"a = b  is  False"<<endl;
    if(isEqualTo(a,c))
        cout<<"a = c  is  True"<<endl;
    else
        cout<<"a = c  is  False"<<endl<<endl;

    if(a==b)
        cout<<"a = b  is  True"<<endl;
    else
        cout<<"a = b  is  False"<<endl;
    if(a==c)
        cout<<"a = c  is  True"<<endl;
    else
        cout<<"a = c  is  False"<<endl;
}


