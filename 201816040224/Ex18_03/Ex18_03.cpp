#include <iostream>

using namespace std;

template<class T>
bool  isEqualTo(T a,T b)
{
    int Ta,Tb;
//    bool Ta,Tb;
    if(Ta==Tb)
    {
    return true;
    }
    else
     return false;
}
int main()
{
    int a=1,b=2;
    int c=3.0, d=3;
    if (a==b)
    {

        cout<<"a is the same as b"<<endl;
    }
    else
        cout<<"a is different from b"<<endl;
        if (c==d)
        {

        cout<<"c is the same as d"<<endl;
        }
    else
        cout<<"c is different from d"<<endl;


}
