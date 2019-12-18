#include <iostream>

using namespace std;

template <typename T>
bool isEqualTo(T x, T y)
{
    if(x==y)
        return true;
    else
        return false;
}

template <typename T>
class Point1D
{
protected:
    T xPos;

public:
    Point1D( T x = 0 ):xPos( x )
    {

    }
    virtual ~Point1D()
    {

    }
    inline bool operator==( const Point1D &rhs )
    {
        return xPos == rhs.xPos;
    }
};


int main()
{
    int a=1;
    int b=1;
    int c=2;

    cout<<"a=1  b=1  c=2"<<endl<<endl;

    cout<<"isEqualtoº¯Êý"<<endl;
    if(isEqualTo(a,b))
        cout<<"a = b  is  True"<<endl;
    else
        cout<<"a = b  is  False"<<endl;
    if(isEqualTo(a,c))
        cout<<"a = c  is  True"<<endl;
    else
        cout<<"a = c  is  False"<<endl<<endl;


    cout<<"ÖØÔØ==º¯Êý"<<endl;
    if(a==b)
        cout<<"a = b  is  True"<<endl;
    else
        cout<<"a = b  is  False"<<endl;
    if(a==c)
        cout<<"a = c  is  True"<<endl;
    else
        cout<<"a = c  is  False"<<endl;
}
