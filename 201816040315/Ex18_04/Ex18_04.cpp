//Ex18_04.cpp
#include <iostream>
#include <iomanip>
#include <stdexcept>
#include "Array.h"

using namespace std;

int main()
{

    Array<int >x(8);
    Array<double>y(9);

    cout<<x.getSize()<<endl;
    cout<<y.getSize()<<endl;

    cin>>x;
    cout<<x.getSize()<<endl;

    cin>>y;
    cout<<y.getSize()<<endl;

}
