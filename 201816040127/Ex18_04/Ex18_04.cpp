#include <iostream>
#include <stdexcept>
#include "Array.h"
using namespace std;

int main()     //看的书上的代码
{
    Array<int> integers1(7);
    Array<int> integers2(10);
    Array<double> intergers4(7);
    Array<double> intergers5(10);

        cout << "Size of Array integers1 is "
             << integers1.getSize()
             << "\nArray after initialization:\n" << integers1;
        cout << "Size of Array integers2 is "
             << integers2.getSize()
             << "\nArray after initialization:\n" << integers2;

        cout << "\nEnter 17 integers: " << endl;
            cin >> integers1 >> integers2;

        cout << "\nAfter input, the Arrays contain:\n"
             << "integer1:\n" << integers1
             << "integer2:\n" << integers2;

        cout << "\nEvaluating: integer1 != integer2" << endl;
            if(integers1 != integers2)
                cout << "integer1 and integer2 are not equal" << endl;

         Array<int> integers3(integers1);

        cout << "\nSize of Array integer3 is: "
             << integers3.getSize()
             << "\nArray after initialization:\n" << integers3;


        cout << "\nAssigning integer2 to integer1: " << endl;
            integers1 = integers2;
        cout << "integer1:\n" << integers1
             << "integer2:\n" << integers2;


        cout << "\nEvaluating: integer1 == integer2" << endl;

        if(integers1 == integers2)
            cout << "integers1 and integer2 are equal" << endl;


        cout << "integers1[5] is " << integers1[5];


        cout << "\n\nAssigning 1000 to integers1[5] " << endl;
        integers1[5] = 1000;
        cout << "integers1: \n" << integers1;

        //attempt to use out-of-range subscript
        try
        {
            cout << "\nAttempt to assign 1000 to integers1[15]" << endl;
            integers1[15] = 1000;   //ERROR: subscript out of range
        }
        catch(out_of_range &ex)
        {
            cout << "An exception occurred: " << ex.what() << endl;
        }
        cout <<"\n\n";





       cout << "Size of Array intergers4 is "
             << intergers4.getSize()
             << "\nArray after initialization:\n" << intergers4;
        cout << "Size of Array intergers5 is "
             << intergers5.getSize()
             << "\nArray after initialization:\n" << intergers5;

        cout << "\nEnter 17 intergers: " << endl;
            cin >> intergers4 >> intergers5;

        cout << "\nAfter input, the Arrays contain:\n"
             << "interger4:\n" << intergers4
             << "interger5:\n" << intergers5;

        cout << "\nEvaluating: interger1 != interger2" << endl;
            if(intergers4 != intergers5)
                cout << "interger4 and interger5 are not equal" << endl;

         Array<double> integers6(intergers4);

        cout << "\nSize of Array integer6 is: "
             << integers6.getSize()
             << "\nArray after initialization:\n" << integers6;


        cout << "\nAssigning interger5 to interger4: " << endl;
            intergers4 = intergers5;
        cout << "interger4:\n" << intergers4
             << "interger5:\n" << intergers5;


        cout << "\nEvaluating: interger4 == interger5" << endl;

        if(intergers4 == intergers5)
            cout << "intergers4 and interger5 are equal" << endl;


        cout << "intergers4[5] is " << intergers4[5];


        cout << "\n\nAssigning 1000 to intergers4[5] " << endl;
        intergers4[5] = 1000;
        cout << "intergers4: \n" << intergers4;

        //attempt to use out-of-range subscript
        try
        {
            cout << "\nAttempt to assign 1000 to intergers4[15]" << endl;
            intergers4[15] = 1000;   //ERROR: subscript out of range
        }
        catch(out_of_range &ex)
        {
            cout << "An exception occurred: " << ex.what() << endl;
        }
        cout <<"\n\n";

}
