#include <iostream>
#include "Array.h"

using namespace std;

int main()
{
    Array<int> demo (3);
    Array<int> demo1 (4);
    Array<double> demo2(5.0);
    Array<double> demo3(7.0);
    cout<<"demo == demo1 is "<<(demo==demo1)<<endl;
    cout<<"demo2 == demo3 is "<<(demo2==demo3);
}
