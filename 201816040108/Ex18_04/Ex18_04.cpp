#include<iostream>
#include<stdexcept>
#include "Array.h"

int main()
{
    Array<double> d(6);
    Array<int> i(5);
    Array<char> c(4);
    i[0]=10;
    d[1]=1.1;
    c[2]='a';
    cin>>i[0]>>d[1]>>c[2];
    cout << i<<endl;
    cout <<d<<endl;
    cout <<c<<endl;

    return 0;

}   //end main
