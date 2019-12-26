#include <iostream>
#include <stdexcept>
#include "Array.h"

using namespace std;

int main()

{
  Array<int>intArray(5);//对于整数而言
  cin >>intArray;
  int n;
  cin>>n;
  Array<int>intArray1(6);
  cin>>intArray1;
  if(intArray==intArray1)
        cout<<"相等"<<endl;
    else
        cout<<"不相等"<<endl;


  Array<double>doubleArray(2);//对于带小数点的数而言
   cin>>doubleArray;
   cout<<doubleArray;
   double b;
   cin>>b;;
   cout<<doubleArray[b];
   Array<double>doubleArray1(5);
    cin>>doubleArray1;
      if(intArray==intArray1)
        cout<<"相等"<<endl;
    else
        cout<<"不相等"<<endl;
}
