#include <iostream>

using namespace std;

template<typename T>
bool isEqualTo(T &a,T &b)
{
    if(a==b)
    {
    cout<<a<<" is equal to "<<b<<endl;
    return true;
    }
    else
     {
    cout<<a<<" is not equal to "<<b<<endl;
    return false;
     }

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
    int a=1,b=1;
    int c=2,d=3;
    double x=1.1,y=1.1;
    double x1=1.1,y1=1.2;
    isEqualTo(a,b);
    isEqualTo(c,d);
    isEqualTo(x,y);
    isEqualTo(x1,y1);
}
