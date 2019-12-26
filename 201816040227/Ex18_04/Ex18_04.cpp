#include <iostream>
#include <iomanip>
#include <stdexcept>

#include "Array.h"
using namespace std;



 int main()
 {
     Array<int> a(7), b(9);//测试int类型数组
     Array<double> x(7),y(10);//测试double类型数组

    //计算数组长度
    cout<<"Size of Array a is: "
        <<a.getSize()<<endl;
    cout<<"Size of Array b is: "
        <<b.getSize()<<endl;

    //输入并输出数组a和b
    cout<<"input a and b \n"<< endl;
    cin>>a>>b;

    cout<<a
        <<b;
    //判断a和b是否相等
    if (a != b)
        cout<< "a and b are not equal"<<endl;

    //把a复制给c
    Array<int>c(a);

    //计算c的长度并输出
    cout<<"Size of Array c is: "
        <<c.getSize()<<endl;
    cout<<"c:\n"<<c<<endl;

    //把b赋给a，并输出a和b
    a=b;
    cout<<"a:\n"<<a
        <<"b:\n"<<b;

//double类型测试同上

    cout<<"Size of Array x is: "
        <<x.getSize()<<endl;
    cout<<"Size of Array y is: "
        <<y.getSize()<<endl;
    cout<<"input x and y \n"<<endl;
    cin>>x>>y;
    cout<<x
        <<y;

    if (x != y)
        cout<< "x and y are not equal\n"<<endl;
        Array<double> z(x);
    cout<<"Size of Array z is: "
        <<z.getSize()<<endl;
    cout<<"z:\n"<<z;
    x=y;

    cout<<"x:\n"<<x
        <<"y:\n"<<y;


}
