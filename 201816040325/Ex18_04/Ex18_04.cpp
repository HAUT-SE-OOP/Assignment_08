
#include <iostream>
#include <stdexcept>
#include "Array.h"
using namespace std;

int main()
{

   Array<int> integers1( 7 ); // seven-element Array
   Array<int> integers2; // 10-element Array by default

   // print integers1 size and contents
   cout << "Size of Array integers1 is "
      << integers1.getSize()
      << "\nArray after initialization:\n" << integers1;

   // print integers2 size and contents
   cout << "\nSize of Array integers2 is "
      << integers2.getSize()
      << "\nArray after initialization:\n" << integers2;

   // input and print integers1 and integers2
   cout << "\nEnter 17 integers:" << endl;
   cin >> integers1 >> integers2;
} // end main

