#include <iostream>
using namespace std;

template <typename T>
bool isEqualTo(T a,T b)
{
    if(a == b)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int a,b;
    double c,d;
    char e,f;
    a=1,b=2;
    cout<<"a=1 b=2 输出结果:"<<isEqualTo(a,b)<<endl;
    a=1,b=1;
    cout<<"a=1 b=1 输出结果:"<<isEqualTo(a,b)<<endl;
    c=1.0,d=2.0;
    cout<<"c=1.0 d=2.0 输出结果:"<<isEqualTo(c,d)<<endl;
    c=1.0,d=1.0;
    cout<<"c=1.0 d=1.0 输出结果:"<<isEqualTo(c,d)<<endl;
    e='a',f='b';
    cout<<"e=a,f=b 输出结果:"<<isEqualTo(e,f)<<endl;
    e='a',f='a';
    cout<<"e=a,f=a 输出结果:"<<isEqualTo(e,f)<<endl;
    return 0;
}
