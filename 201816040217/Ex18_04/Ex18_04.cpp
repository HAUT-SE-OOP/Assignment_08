#include <iostream>
#include"Array.h"
using namespace std;

int main()
{
    Array<int> array1(3),array3(3);
    Array<double> array2(3);
    cout<<"array1_size: "<<array1.getSize()<<endl;
    cout<<"array2_size: "<<array2.getSize()<<endl;
    array1[0] = 1;array1[1] = 2;array1[2] = 3;
    array2[0] = 1;array2[1] = 2;array2[2] = 3;
    cout<<array1<<endl;
    cout<<array2<<endl;
    if(array1 == array3)
        cout<<"array1 == array3";
    else cout<<"array1 != array3"<<endl;
    cout<<"copy 1 to 3"<<endl;
    array3 = array1;
    if(array1 != array3)
        cout<<"array1 != array3";
    else cout<<"array1 == array3"<<endl;

    return 0;
}
