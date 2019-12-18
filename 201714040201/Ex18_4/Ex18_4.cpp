//Ex18_4.cpp
//Array class test program
#include <iostream>
#include <stdexcept>
#include <iomanip>
#include "Array.h"
using namespace std;


int main()
{
    Array<int,7> integers1;
    Array<double,10> integers2;
    //print integers1 size and contents
    cout<<"Size of Array integers1 is "<<integers1.getSize()<<"\nArray after initialization:\n"<<integers1;

    //print integers2 size and contents
    cout<<"\nSize of Array integers2 is "<<integers2.getSize()<<"\nArray after initialization:\n"<<integers2;

    //input and print integers1 and integers2
    cout<<"\nEnter 17 integers: "<<endl;
    cin>>integers1>>integers2;

    cout<<"\nAfter input, the Arrays contain:\n"<<"integers1:\n"<<integers1<<"integers2:\n"<<integers2;
    return 0;
}
