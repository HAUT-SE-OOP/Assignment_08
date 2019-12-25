#include <bits/stdc++.h>
using namespace std;
#include "Array.h"

int main()
{
    Array<int> integers1(3);//integers1 is a int Array of 3-size
    Array<int> integers2(5);//integers2 is a int Array of 5-size
    cout<<integers1.getSize()<<' '<<integers2.getSize()<<endl;//print 1 and 2 size
    cin>>integers1>>integers2;//to assignment integers1 and integers2
    cout<<integers1<<integers2;//print 1 and 2
    if(integers1!=integers2)//judge if 1 and 2 are equal
    {
        cout<<"1 and 2 are not equal"<<endl;
    }
    Array<int> integers3( integers1 );//copy integers1 to integers3
    cout<<integers3;//print integers3
    integers1=integers2;//assignment 2 to 1
    if(integers1==integers2)//judge if 1 and 2 are equal
    {
        cout<<"1 and 2 are equal"<<endl;
    }
    cout<<integers1[3]<<endl;//print integers1[3]
    integers1[3]=555;//assignment 555 to 1'3
    cout<<integers1;//print integers1

    Array<string> integers4(3);//integers4 is a string Array of 3-size
    cin>>integers4;//assignment to integers4
    cout<<integers4;//print integers4
    return 0;

}
