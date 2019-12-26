#include<iostream>
using namespace std;

template< class T >
bool isEqualTo(T a,T b)
{
    if ( a == b )
        return true;
    else
        return false;
}

template< class T >
bool operator == ( T &a , T &b )
{
    if( a == b )
        return true;
    else
        return false;
}
int main()
{
    int a = 1 , b = 2 , c = 2 ;
    double d = 1.1 , e = 1.1 , f = 2.1 ;
    if( isEqualTo ( a , b ) )
        cout<<"a is Equal To b"<<endl;
    else
        cout<<"a is Not Equal To b"<<endl;
    if(isEqualTo(c,b))
        cout<<"c is Equal To d"<<endl;
    else
        cout<<"c is Not Equal d"<<endl;
    if(isEqualTo(e,f))
        cout<<"e is Equal To f"<<endl;
    else
        cout<<"e is Not Equal f"<<endl;
    if(isEqualTo(e,d))
        cout<<"e is Equal To d"<<endl;
    else
        cout<<"e is Not Equal d"<<endl;
}
