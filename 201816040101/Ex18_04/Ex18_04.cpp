#include <iostream>
#include <stdexcept>
#include "Array.h"

using namespace std;

int main()
{

    Array<double> doubleArray(4);
    Array<int> intArray(4);
    Array<char> charArray(4);
    intArray[0]=1;
    doubleArray[2]=2.2;
    charArray[1]='a';
    cin>>intArray[1]>>doubleArray[1]>>charArray[0];

    cout<<"double: \n";
    cout<<"����:\n";
    cout<<doubleArray<<endl;

    cout<<"int : \n";
    cout<<"����:\n";
    cout<<intArray<<endl;

    cout<<"char: \n";
    cout<<"����:\n";
    cout<<charArray;
    return 0;
}
