#include <iostream>
using namespace std;

template <typename T>
bool isEqualTo(T a,T b)
{
	if(a==b)
	{
		return true;
	}
	else 
	{
		return false;
	}
}

int main()
{
	int a,b;
	double c,d;
	a=10,b=10;
	cout << "a=10,b=10时输出为："<<isEqualTo(a,b);
	cout <<"\n";
	a=10,b=20;
	cout << "a=10,b=20时输出为："<<isEqualTo(a,b); 
	cout <<"\n";
	c=10.0,d=30.0;
	cout <<"c=10.0,d=30.0时输出为："<<isEqualTo(c,d);
	cout<<"\n" ;
	c=10.0,d=10.0;
	cout <<"c=10.0,d=10.0时输出为："<<isEqualTo(c,d);
	cout<<"\n";
}
