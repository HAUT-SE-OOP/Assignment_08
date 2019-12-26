#include <iostream>
#include "Array.h"

using namespace std;

int main()
{
    Array <int> integers1(7)
    Array integers2;
    cout<<integers1.getSize();
    cout<<integers2.getSize();
    cin>>integers1>>integers2;

    if(integers1 != integers2)
        cout<<"integers1 and integers2 are not equal"<<endl;

    Array <int>integers3(integers1)//invokes copy constructor
    cout<<integers3.getSize()<<integers3;

    integers1=integers2;//note target Array is smaller
    cout<<"integers1:\n"<<integers1
        <<"integers2:\n"<<integers2;

    cout<<"\nEvaluating: integers1 == integers2 "<<endl;

    if(integers1==integers2)
    {
        cout<<"integers1 and integers2 are equal"<<endl;
    }
     cout<<"\nintegers1[5] is "<<integers1[5];

     //use overloaded subscript operator to create lvalue
     cout<<"\n\nAssigning 1000 to integers1[5]"<<endl;
     integers1[5]=1000;

     cout<<"integers1:\n"<<integers1;

    return 0;
}
