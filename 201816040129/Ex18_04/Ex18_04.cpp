#include <iostream>
#include"Array.h"
using namespace std;
int main()
{
   Array<int>integer1(7);
   Array<int>integer3(7);
   Array<double>integer4(10);
   Array<double>integer2(10);
   cout<<"the size of integer1:\n"<<integer1.getSize()<<endl;
   cout<<"the size of integer3:\n"<<integer3.getSize()<<endl;
   cout<<"the size of integer4:\n"<<integer4.getSize()<<endl;
   cout<<"the size of integer2:\n"<<integer2.getSize()<<endl;
   cout<<"please enter integer1:\n";
   cin>>integer1;
   cout<<"please enter integer3:\n";
   cin>>integer3;
   if(integer1==integer3)//if equal
      cout<<"integer1=integer3"<<endl;
   else//not equal
      cout<<"integer1!=integer3"<<endl;
    cout<<"please enter integer4:\n";
   cin>>integer4;
   cout<<"please enter integer2:\n";
   cin>>integer2;
   if(integer4==integer2)//if equal
      cout<<"integer4=integer2"<<endl;
   else//not equal
      cout<<"integer4!=integer2"<<endl;
    cout<<"creat integer5:\n"<<endl;
    Array<int>integer5(integer1);
    cout<<integer5<<endl;
    cout<<"creat integer6:\n"<<endl;
    Array<double>integer6(integer2);
    cout<<integer6;
}
