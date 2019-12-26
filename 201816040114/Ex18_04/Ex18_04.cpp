#include <iostream>
#include "Array.h"
using namespace std;
int main()
{

    Array <double> interger1(10);

    Array <double> interger2(10);
    interger1="Hello";
    interger2="Word";
    if(interger1==interger2)
        cout<<"相等"<<endl;
    else
        cout<<"不相等"<<endl;
    return 0;
}
