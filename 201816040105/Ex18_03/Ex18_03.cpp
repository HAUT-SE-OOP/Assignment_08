#include <iostream>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

template < typename T >
bool  isEqualTo (T x,T y)
{
	if (x==y)
	return true;
	else
	return false;
}

int main(int argc, char** argv) {
	int x1=1,x2=1;
	double y1=2.2,y2=3.3;
	cout<<"x=1,y=1\n"<<"x=y\n"<<isEqualTo(x1,x2)<<endl;
	cout<<"x=2.2,y=3.3\n"<<"x=y\n"<<isEqualTo(y1,y2)<<endl;
	return 0;
}
