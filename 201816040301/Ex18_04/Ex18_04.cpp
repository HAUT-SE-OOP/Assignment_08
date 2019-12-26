include <iostream>
#include <stdexcept>
#include <iomanip>
#include "Array.h"
using namespace std;

int main()
{
    cout << fixed << setprecision(2) ;
    Array<int> integers1(7);
    Array<double> Floatings2;
    cout << "Size of Array integers1 is "
         << integers1.getSize()
         << "\nArray after initialization:\n" << integers1 
    cout<<"a:"<<endl<<a<<endl;
    cout<<"b:"<<endl<<b<<endl;    
         cout << "integers1:\n" << integers1 
    << "integers2:\n" << integers2;

    //use overload equality(==)operator
    if(integers1 == integers2)
        cout << "integers1 and integers2 are equal" << endl;

    //use overload subscript operator to create value
    cout << "\n\nintegers1[5] is " << integers1[5];

    //use overload subscript operator to create value
    cout << "\n\nAssigning 1000 to integers1[5]" << endl;
    integers1[5] = 1000;
    cout << "integers1:\n" << integers1;
   try
   {
       cout << "\nAttempt to asssign 1000 to integers1[15]" << endl;;
       integers1[5] = 1000;
   }
   catch( out_of_range &ex)
   {
       cout << "An exception occurred: "<< ex.what() << endl;
   }
}
