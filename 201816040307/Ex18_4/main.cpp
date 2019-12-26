#include <iostream>

#include "Array.h"
using namespace std;

int main()
{

   Array<double> d1( 4 ); // seven-element Array
   Array<double> d2; // 10-element Array by default

   // print integers1 size and contents
   cout << "Size of Array double is "
      << d1.getSize()
      << "\nArray after initialization:\n" << d1;

   // print integers2 size and contents
   cout << "\nSize of Array double2 is "
      << d2.getSize()
      << "\nArray after initialization:\n" << d2;

   // input and print integers1 and integers2
   cout << "\nEnter 14 integers:" << endl;
   cin >> d1 >> d2;

   cout << "\nAfter input, the Arrays contain:"<<endl;
    cout << "d1:\n" << d1;
    cout << "d2:\n" << d2;

   // use overloaded inequality (!=) operator
   cout << "\nEvaluating: d1 != d2" << endl;

   if ( d1 != d2 )
      cout << "They are not equal" << endl;

   // create Array integers3 using integers1 as an
   // initializer; print size and contents
   Array<double> d3( d1 ); // invokes copy constructor

   cout << "\nSize of Array double3 is "
      << d3.getSize()
      << "\nArray after initialization:\n" << d3;

   // use overloaded assignment (=) operator
   cout << "\nAssigning d2 to d1:" << endl;
   d1 = d2; // note target Array is smaller

   cout << "d1:"<<endl;
   cout << d1;
      cout<< "d2:"<<endl;
      cout << d2;

   // use overloaded equality (==) operator
   cout << "\nEvaluating: d1 == d2" << endl;

   if ( d1 == d2 )
      cout << "d1 and d2 are equal" << endl;

   // use overloaded subscript operator to create rvalue
   cout << endl;
   cout<<"1[2] is " << d1[ 2 ];

   // use overloaded subscript operator to create lvalue
   cout << "\n\nAssigning 99 to integers1[2]" << endl;
   d1[ 2 ] = 99;
   cout << "d1:"<<endl << d1;

} // end main
