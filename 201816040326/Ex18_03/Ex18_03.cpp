#include <iostream>

using namespace std;

template< typename T >
bool isEqualTo( T &a , T &b )
{
    /*if( a == b )
        return true;
    else
        return false;*/
    return ( a == b );
}

template< typename T >
bool operator==(T &a ,T &b)
{
    if( a == b )
        return true;
    else
        return false;
}

int main()
{
    int m = 100, n = 10;
    double x = 20,y = 20;
    if(isEqualTo(m,n))
        cout<<m<<" "<<n<<endl<<"they are equal"<<endl;
    else
        cout<<m<<" "<<n<<endl<<"they are not equal"<<endl;
    if(isEqualTo(x,y))
        cout<<x<<" "<<y<<endl<<"they are equal"<<endl;
    else
        cout<<x<<" "<<y<<endl<<"they are not equal"<<endl;
    return 0;
}
