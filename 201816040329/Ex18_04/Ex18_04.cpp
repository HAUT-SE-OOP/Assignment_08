#include <iostream>

using namespace std;
#include"array.h"

int main()
{

Array<int> oj1(6);
Array<int> oj2(8);

    cout << "Size of Array oj1 is "

      << oj1.getSize()

      << "\nArray after initialization:\n" << oj1;


   cout << "\nSize of Array oj2 is "

      <<oj2.getSize()

      << "\nArray after initialization:\n" << oj2;


   cout << "\nEnter 17 oj:" << endl;

   cin >> oj1 >> oj2;



   cout << "\nAfter input, the Arrays contain:\n"

      << "oj1:\n" << oj1

      << "oj2:\n" << oj2;

   cout << "\nEvaluating: oj1!=oj2" << endl;



   if ( oj1!= oj2 )

      cout << "oj1 and oj2 are not equal" << endl;
}
