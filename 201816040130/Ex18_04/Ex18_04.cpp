#include "Array.h"
#include <iostream>
using namespace std;
int main ()
{
    Array <int> A(10);//create a Array named A
    cout <<"Please enter 10 integer numbers"<<endl;
        cin >> A;
    Array <double> B(10);//create a Array named B
    cout <<"Please enter 10 double numbers"<<endl;
    cin >> B;


    cout <<"Storing int type data with custom template class,the data are as follows"<<endl;
    cout << A;//print ten integer numbers of A
    cout <<"Storing int type data with custom template class,the data are as follows"<<endl;
    cout << B;//print ten double numbers of B

    return 0;
}
