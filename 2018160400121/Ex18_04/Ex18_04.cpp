//Ex18_04.cpp
//Array class test program
#include <iostream>
#include <stdexcept>
#include "Array.h"
using namespace std;

int main()
{
	Array<int>integers1(7);//seven-element Array
	Array<int>integers2;//10-element Array by default
	
	//print integers1 size and contents
	cout << "Size of integers1 is "
		<< integers1.getSize()
		<< "\nArray after intialization:\n" << integers1;
	//print integers2 size and contents
	cout << "\nSize of Array integers2 is "
		<< integers2.getSize()
		<< "\nArray after intialization:\n" << integers2;
	
	//input and print integers1 and integers2
	cout << "\nEnter 17 integers " << endl;
	cin >> integers1 >> integers2;
	cout << "\nAfter input, the Arrays contain:\n"
		<< "integers1:\n" << integers1
		<< "integers2:\n" << integers2;

	//use overloaded inequality(!=) operator
	cout << "\nEvaluating: integers1 != integers2" << endl;

	if (integers1 != integers2)
		cout << "integers1 and integers2 are not equal" << endl;

	//use overloaded assignment (=) operator
	cout << "\nAssigning integers2 to integers1:" << endl;
	integers1 = integers2;
	
	cout << "integers1:\n" << integers1
		<< "integers2:\n" << integers2;

	//use overloaded equality (==) operator
	cout << "\nEvaluating: integers1 == integers2" << endl;

	if (integers1 == integers2)
		cout << "integers1 and integers2 are equal" << endl;

	//use overloaded subscript operator to create rvalue
	cout << "\nintegers1[5] is " << integers1[5];

	//use overloaded subscript operator to create lvalue
	cout << "\n\nAssigning 1000 to integers1[5]" << endl;
	integers1[5] = 1000;
	cout << "integers1:\n" << integers1;

	return 0;
}
