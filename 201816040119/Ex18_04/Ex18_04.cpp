#include <iostream>
#include"Array.h"
using namespace std;

int main()
{
    Array<int>array(2);
    cout <<array.getSize() << endl;
    cout <<array << " ";
    return 0;
}
