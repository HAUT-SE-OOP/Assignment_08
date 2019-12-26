#include <string>
#include <iostream>
#include"Array.h"
using namespace std;
int main()
{
   Array<int>integer1(8);
   Array<int>integer3(8);
   Array<double>integer4(10);
   Array<double>integer2(10);
   cin>>integer2;
   cin>>integer1;
   cin>>integer3;
   cin>>integer4;
   if(integer1==integer3)
      cout<<" equal " <<endl;
   else
      cout<<" not equal "<<endl;
   if(integer4==integer2)//if equal
      cout<<" equal "<<endl;
   else
      cout<<" not equal "<<endl;

}
