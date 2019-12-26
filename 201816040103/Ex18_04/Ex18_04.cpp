#include <iostream>
#include <string>
#include "Array.h"
using namespace std;

int main() 
{
	Array <int> a(6);
	Array <double> b(6);
	cout<<"The size of a:"<<a.getSize()<<endl;
	cout<<"The a:"<<a<<endl;
	cout<<"The size of b:"<<b.getSize()<<endl;
	cout<<"The b:"<<b<<endl;
	Array <int> c;
	Array <double> d;
	c=a;
	cout<<"The size of c:"<<c.getSize()<<endl;
	cout<<"The c:"<<c<<endl;
	d=b;
	cout<<"The size of d:"<<d.getSize()<<endl;
	cout<<"The d:"<<d<<endl;
	if(a==c)
		cout<<"a and c are equal!"<<endl;
	else
		cout<<"a and c are not equal!"<<endl;
	if(b==d)
		cout<<"b and d are equal!"<<endl;
	else 
		cout<<"b and d are not equal!"<<endl;
}
