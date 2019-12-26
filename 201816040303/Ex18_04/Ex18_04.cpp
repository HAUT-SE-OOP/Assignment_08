#include <iostream>
#include"Array.h"
using namespace std;

int main()
{
    Array<int> int1(5);
    Array<int> int2(15);
    Array<double> dou1(5);
    Array<double> dou2(15);
    cin >> int1;
    cin >> int2;
    cin >> dou1;
    cin >> dou2;
    if(integers1 == integers2)
        cout<<"int1 are equal int2"<<endl;
    else
        cout<<"int1 are not equal int2"<<endl;
    if(dou1==dou2)
        cout<<"dou1 are equal dou2"<<endl;
    else
        cout<<"dou1 are not equal dou2"<<endl;
        return 0;
}
