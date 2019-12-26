#include <iostream>
#include <string>
using namespace std;
template <class T>
bool isEqualTo(T a,T b)//类模板函数；
{
    if(a==b)
    {
        return true;
    }
    else
        return false;
}
int main()
{
    int a=2,b=5,c=2;//int类型变量；
    double n1=2.2,n2=3.3,n3=2.2;//double类型变量；
    string a1="aaaa",a2="vvv",a3="aaaa";//string类型变量；
    cout<<"a==b    ";
    if(isEqualTo(a,b))
        cout<<"true"<<endl;
    else
        cout<<"false"<<endl;
    cout<<"a==c    ";
        if(isEqualTo(a,c))
        cout<<"true"<<endl;
        else
        cout<<"false"<<endl;
    cout<<"n1==n2  ";
        if(isEqualTo(n1,n2))
        cout<<"true"<<endl;
        else
        cout<<"false"<<endl;
    cout<<"n1==n3  ";
        if(isEqualTo(n1,n3))
        cout<<"true"<<endl;
        else
        cout<<"false"<<endl;
    cout<<"a1==a2  ";
        if(isEqualTo(a1,a2))
        cout<<"true"<<endl;
        else
        cout<<"false"<<endl;
    cout<<"a1==a3  ";
        if(isEqualTo(a1,a3))
        cout<<"true"<<endl;
        else
        cout<<"false"<<endl;
    return 0;
}
