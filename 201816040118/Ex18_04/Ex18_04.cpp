#include <iostream>
#include <string.h>
#include <stdexcept>
#include "Array.h"
using namespace std;
int main()
{
    Array<int> A(5);
    cout<<"请输入5个数据:"<<endl;
    cin>>A;
    Array<int> B(5);
    cout<<"请输入5个数据:"<<endl;
    cin>>B;
    cout<<A<<endl;
    cout<<B<<endl;
    if(A==B)
        cout<<"它们相等";
    if(A!=B)
      cout<<"它们不相等";
    Array<double>C(5);
    cout<<"请输入5个数据:"<<endl;
    cin>>C;
    Array<double>D(5);
    cout<<"请输入5个数据:"<<endl;
    cin>>D;
    if(C==D)
        cout<<"它们相等";
    if(C!=D)
      cout<<"它们不相等";
    return 0;
}
