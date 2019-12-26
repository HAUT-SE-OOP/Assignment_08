#include <iostream>
#include <stdexcept>
#include "Array.h"
using namespace std;

int main()

{

    Array<int>array1(5);//seven-element Array
    cout<<"Array1 has "<<array1.getSize()<<"elements"<<endl;//输出array1的大小
    cout<<"\nEnter 10 figure:"<<endl;
    cin>>array1;//输入array1的值
    cout<<array1;
    array1[ 1 ]=1000;//给array1[1]赋值
    cout<<"\n\n"<<"array[3]:"<<array1[3]<<endl;
    cout<<array1<<"\n\n";

    Array<int>array2(10);
    cout<<"Array2 has "<<array2.getSize()<<"elements"<<endl;//输出array2的大小
    cout<<"\nEnter 10 figure:"<<endl;
    cin>>array2;
    cout<<array2;
    if(array1 != array2)
        cout<<"array1 and array2 are not equal"<<endl;
    if(array1==array2)
        cout<<"array1 and array2 are equal"<<endl;
    Array<int>array3(array1);
    cout<<"Array3 has "<<array3.getSize()<<"elements"<<endl;//输出array3的大小
    cout<<array3<<endl;
    if(array1==array3)

        cout<<"array1 and array3 are equal"<<endl;

    if(array1!=array3)//调用！=函数

        cout<<"array1 and array3 are not equal"<<endl;

    array1.~Array();//调用析构函数
    array2.~Array();
    array3.~Array();
}
