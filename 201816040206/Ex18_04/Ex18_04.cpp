#include <iostream>

#include <stdexcept>

#include "Array.h"



using namespace std;

int main()

{
  Array<int>intArray(5);
  cout <<"输入5个整数型数字:"<<endl;
  cin >>intArray;
  cout<<"输出该数组:"<<endl;
  cout<<intArray;
  int n;
  cin>>n;
  cout<<"输出数组中第n+1个元素为:"<<endl;
  cout<<intArray[n];
  Array<int>intArray1(6);
  cout<<"输入6个整数型数字:"<<endl;
  cin>>intArray1;
  cout<<"输出该数组:"<<endl;
  cout<<intArray1;
  cout<<"比较这两个数组是否相等:"<<endl;
  if(intArray==intArray1)
        cout<<"这两个数组相等"<<endl;
    else
        cout<<"这两个数组不相等"<<endl;


  Array<double>doubleArray(2);
   cout <<"输入2个double类型数字:"<<endl;
   cin>>doubleArray;
   cout<<"输出该数组:"<<endl;
   cout<<doubleArray;
   int b;
   cin>>b;
   cout<<"输出数组中第n+1个元素为:"<<endl;
   cout<<doubleArray[b];
   Array<double>doubleArray1(5);
   cout <<"输入5个double类型数字:"<<endl;
    cin>>doubleArray1;
    cout<<"输出该数组:"<<endl;
    cout<<doubleArray1;


}
