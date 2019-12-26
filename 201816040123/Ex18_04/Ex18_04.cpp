#include "Array.h"

int main()
{
    Array<int>a(5);
    Array<int>b(6);

    cout<<"a:"<<endl<<a<<endl;
    cout<<"b:"<<endl<<b<<endl;

    cout << "请输入11个整数：" ;
    cin>>a>>b;

    cout<<"a:"<<endl<<a<<endl;
    cout<<"b:"<<endl<<b<<endl;

    if(a==b)
        cout << "a=b" << endl;
    else
        cout << "a!=b" << endl;

    cout<<"a.size:"<<a.getSize()<<endl;
    cout<<"b.size:"<<b.getSize()<<endl;

    Array<int>c(b);
    cout << "c(由b赋值):"<<endl<<b<< endl;

}
