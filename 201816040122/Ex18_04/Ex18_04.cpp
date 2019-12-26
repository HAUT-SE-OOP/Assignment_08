#include <string>
#include <iostream>
#include"Array.h"
using namespace std;
int main()
{
   Array<int>integer1(4);
   Array<int>integer2(4);
   Array<double>integer3(4);
   Array<double>integer4(4);
   cin>>integer1;
   cin>>integer2;
   cin>>integer3;
   cout<<"integer1:"<<integer1<<endl;
   cout<<"integer2:"<<integer2<<endl;
   cout<<"integer3:"<<integer3<<endl;
   cout<<"integer4:"<<integer4<<endl;

   if(integer1==integer2)
      cout<<"integer1"<<" is equal to" <<"integer2"<<endl;
   else
      cout<<"integer1"<<"is not equal to"<<"integer2"<<endl;
   if(integer3==integer4)//if equal
      cout<<"integer3"<<"is equal to"<<"integer4"<<endl;
   else
      cout<<"integer3"<<"is not equal to"<<"integer4"<<endl;

}
