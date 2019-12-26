#include <iostream>
#include<iomanip>
#include<stdexcept>

#include"Array.h"

using namespace std;



int main()
{
    Array<int> integers1(1);
    Array<int> integers2(2);
    Array<double> dou1(1);
    Array<double> dou2(2);
    if(integers1!=integers2)
        cout<<"integers1 and integers2 are not equal"<<endl;
    if(integers1!=integers2)
        cout<<"integers1 and integers2 are equal"<<endl;
}
