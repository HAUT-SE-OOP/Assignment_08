#include<iomanip>
#include<stdexcept>
#include<iostream>
using namespace std;

template<typename T>
bool isEqualTo(T &a,T &b)
{
    if(a==b)
        return true;//if equal ,return true
    else
        return false;
}//end function isEqualTo

template <typename T>
bool operator==(const T &a,const T &b)
{
    if(b==a)
        return true;
    else
        return false;
}//overload operator ==
int main()
{
    int a=1,b=2;
    double x=0.0,y=0.0;
    if(isEqualTo(a,b))
        cout<<"a and b are Equal!\n";
    else
        cout<<"a and b are not Equal!\n";
    if(isEqualTo(x,y))
        cout<<"x and y are Equal!\n";
    else
        cout<<"x and y are not Equal!\n";
    return 0;
}
