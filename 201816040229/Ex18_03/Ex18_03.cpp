#include <iostream>

using namespace std;

int main()
{
    int a=1,b=2;
    if (a==b)
        cout<<"a is equal to b"<<endl;
    else
        cout<<"a is not equal to b"<<endl;
    double c=1.1,d=2.2;
        if (c==d)
        cout<<"c is equal to d"<<endl;
    else
        cout<<"c is not equal to d"<<endl;


}
template<class T>
bool  isEqualTo(T a,T b)
{
    if(a==b)
    return true;
    else
     return false;
}
