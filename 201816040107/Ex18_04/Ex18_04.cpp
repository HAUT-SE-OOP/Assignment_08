#include <iostream>
#include <string>
#include "Array.h"
using namespace std;



int main()
{
    Array <int> int1(5);
    Array <double> double1(5);
    cout<<"The size of int1 is:"<<int1.getSize()<<endl;
    cout<<"int1:"<<int1<<endl;
    cout<<"The size of doubel1 is:"<<double1.getSize()<<endl;
    cout<<"double1:"<<double1<<endl;
    Array <int>int2;
    Array <double> double2;
    int2=int1;//测试“=”；
    cout<<"int2:"<<int2<<endl;
    double2=double1;
    cout<<"double2:"<<double2<<endl;
    if(int1==int2)//测试"==";
        cout<<"int1 is equal to int2"<<endl;
    else if(int1!=int2)//测试”！="；
        cout<<"int1 is not equal to int2"<<endl;
    if(double1==double2)
        cout<<"double1 is equal to double2"<<endl;
    else if(double1!=double2)
        cout<<"double1 is not equal to double2"<<endl;
        Array <int> int3(5);
        cout<<"enter 5 data of int3"<<endl;
        cin>>int3;//测试">>";
        cout<<"int3:"<<int3<<endl;




    return 0;
}
