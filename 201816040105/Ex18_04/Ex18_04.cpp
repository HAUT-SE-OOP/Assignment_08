#include <iostream>
#include <stdexcept>
#include "Array.h"
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	Array<int> integers1(7);
	Array<double> double1(7);
	cout<<integers1.getSize()<<endl;
	cout<<double1.getSize()<<endl;
	
	Array<int> integers2;
	Array<double> double2;
	
	integers2=integers1;
	double2=double1;
	
	if (integers1==integers2)
	   cout<<"Integers1 Is Equal To Integers2"<<endl;
	else if (integers1!=integers2)
	   cout<<"Integers1 Is Not Equal To Integers2"<<endl;
	if (double1==double2)
	   cout<<"Double1 Is Equal To Double2"<<endl;
	else if (double1!=double2)
	   cout<<"Double1 Is Not Equal To Double2"<<endl;
	   
	Array<int> integers3(7);
	cout<<"Enter 7 Datas:"<<endl;
	cin>>integers3;
	cout<<"Integers3:"<<integers3<<endl;
	
	return 0;
}
