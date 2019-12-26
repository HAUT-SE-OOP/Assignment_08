#include <iostream>
#include <stdexcept>
#include <iomanip>
#include "Array.h"
using namespace std;

int main()
{
    cout << fixed << setprecision(2) ;
    Array<int> integers1(7);
    Array<double> Floatings2;
    cout << "\nEnter 17 integers:" << endl;
    cin >> integers1 >> Floatings2 ;
    cout << "\nAfter input ,the Arrays contain:\n"
         << "integers1:\n" << integers1
         << "\nFloatings2:\n" << Floatings2;
    cout << "\n\nAssigning 1000 to integersq[5]" << endl;
    integers1[5] = 1000;
    cout << "integers1\n" << integers1;
   try
   {
      cout << "\nAttempt to assign 1000 to integers1[15]" << endl;
      integers1[ 15 ] = 1000;
   }
   catch ( out_of_range &ex )
   {
      cout << "An exception occurred: " << ex.what() << endl;
   }
}
