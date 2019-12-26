#include<iostream>
#include"Array.h"
using namespace std;
int main()
{
    Array<int> a1(3);
    Array<double> a2(3);
    cin>>a1;cout<<a1;//测试输入输出
    cin>>a2;cout<<a2;
    Array<int> a3(a1);//测试复制构造函数
    cout<<a3;
    if(a1==a3) cout<<"a1 == a3"<<endl;//测试重载等号
    else cout<<"a1 != a3"<<endl;

    Array<double> a4=a2;//测试赋值构造函数
    cout<<a4;
    cout<<a4[2]<<endl;//测试访问下标（用作右值）
    a4[2]=10.0;
    cout<<a4[2]<<endl;//测试访问下标（用作左值）
    return 0;
}
