#include <iostream>
#include "Array.h"
using namespace std;
int main()
{
    int x,y;
    cout<<"输入数组一的长度"<<endl;
    cin>>x;
    Array<double> interger1(x);
    cout<<"输入数组二的长度"<<endl;
    cin>>y;
    Array <double>interger2(y);
    cout<<"输入数组一的内容"<<endl;
    cin>>interger1;
    cout<<"输入数组二的内容"<<endl;
    cin>>interger2;
    cout<<"此时数组一的内容"<<endl;
    cout<<interger1;
    cout<<"此时数组二的内容"<<endl;
    cout<<interger2;
    if(interger1==interger2)
        cout<<"两数组相等"<<endl;
    else
        cout<<"两数组不相等"<<endl;
    cout<<"此时数组一已下标为1的值为"<<interger1[1]<<endl;
    cout<<"此时数组二已下标为1的值为"<<interger2[1]<<endl;
    return 0;
}
