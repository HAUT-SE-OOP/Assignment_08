#include <iostream>
#include "Array.h"
using namespace std;
int main()
{
    Array <double> interger1(10);
    Array <double> interger2(10);
    cin>>interger1;
    cin>>interger2;
    interger1.getSize();
    interger2.getSize();

   cout << interger1<< "\n" << interger2;
    if(interger1==interger2)
        cout<<"两数组相等"<<endl;
    else
        cout<<"两数组不相等"<<endl;
    return 0;
}
