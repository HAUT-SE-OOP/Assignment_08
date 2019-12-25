#include <iostream>
#include"Array.h"
using namespace std;

int main()
{
    Array<int>x(2);
    Array<double>y(3);

    cout<<"x: "<<x<<endl;
    cout<<"x's size is: "<<x.getSize();

    cout<<"y: "<<y<<endl;
    cout<<"y's size is: "<<y.getSize();

    if( x == y )
        cout <<"x and y are  equal" <<endl;
    
    return 0;
}
