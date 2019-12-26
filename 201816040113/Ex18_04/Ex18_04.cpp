// Assignment_08 : Ex18_04.cpp
// Array class test program
#include <iostream>
#include <iomanip>
#include <stdexcept>
#include <fstream>
#include <cstdlib>
#include "Array.h"
using namespace std;

int main()
{
    Array<int> int1(4);
    Array<int> int2(4);
    Array<double> dou1(4);
    Array<double> dou2(4);
    cout<<"please input 4 integer for integer1:"<<endl;
    cin >> int1 ;
    cout<<"please input 4 integer for integer2:"<<endl;
    cin>> int2;
    cout << "integer1:\n" << int1<< "integer2:\n" << int2;
    cout << "\ninteger1 != integer2" << endl;
    if(int1 != int2)
    {
        cout << "They are not equal" << endl;
    }
    int1 = int2;
    cout << "\n integer1 == integer2" << endl;

    if(int1 == int2)
    {
        cout << "They are equal" << endl;
    }

    cout<<"please input 4 double for double1:"<<endl;
    cin >> dou1 ;
    cout<<"please input 4 double for double2:"<<endl;
    cin>> dou2;
    cout<< "dou1:\n" << dou1<< "dou2:\n" << dou2;
    if(dou1 != dou2)
    {
        cout << "They are not equal" << endl;
    }

    if(dou1 == dou2)
    {
        cout << "They are equal" << endl;
    }
    dou1 = dou2;
    cout << "\n integer1 == integer2" << endl;

    if(dou1 == dou2)
    {
        cout << "They are equal" << endl;
    }
}   //end main
