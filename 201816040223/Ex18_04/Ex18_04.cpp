#include <iostream>
#include <stdexcept>
#include "Array.h"
using namespace std;
int main()
{
    Array<int>inter1(7);
    cout<<"array1 :"<<endl;
    cin>>array1;//输入array1的值
    cout<<"Array1 is "<<array1<<endl;//输出array1的大小
    Array<int>inter2(7);
    cin>>array2;
    cout<<"Array2 is "<<array2<<endl;//输出array2的大小
        if(inter1!=inter2)
        cout<<"array1 and array2 are not equal"<<endl;
    if(inter1==inter2)
        cout<<"array1 and array2 are equal"<<endl;
    if(array1!=array2)
        cout<<"array1 and array2 are not equal"<<endl;
    if(array1==array2)
        cout<<"array1 and array2 are equal"<<endl;
    array1.~Array();//调用析构函数
    array2.~Array();
}
