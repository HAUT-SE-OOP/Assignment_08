//
//  Ex18_04.cpp
//  Ex18_03
//
//  Created by misonomayubw on 2019/12/26.
//  Copyright © 2019 misonomayubw. All rights reserved.
//

#include "Array.h"
#include <iostream>

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

    Array <int>integers3(integers1)
    cout<<integers3.getSize()<<integers3;

    integers1=integers2;
    cout<<"integers1:\n"<<integers1
        <<"integers2:\n"<<integers2;

    cout<<"\nEvaluating: equal"<< "\n" << endl;

    if(integers1==integers2)
    {
        cout<<"equal"<<endl;
    }
     cout<<"\nintegers1[5] is "<<integers1[5];

     cout<<"\n\nAssigning 1000 to integers1[5]"<<endl;
     integers1[5]=1000;

     cout<<"integers1:\n"<<integers1;

    return 0;
}
