#include <iostream>
using namespace std;

template<typename T>
bool isEqualTo(T &a, T &b)
{
	if (a == b)
		return true;
	if (a != b)
		return false;
}

int main()
{
	int a = 1,  b = 1;
	int c = 1, d = 2;
	double e=1.1, f=1.1;
	double g = 1.2, h = 2.1;
	cout << "a=1, b=1 判断结果是： "<<isEqualTo(a, b)<<endl;
	cout << "c=1, d=2 判断结果是： " << isEqualTo(c, d)<<endl;
	cout << "e=1.1, f=1.1 判断结果是： " << isEqualTo(e, f)<<endl;
	cout << "g=1.2, h=2.1 判断结果是： " << isEqualTo(g, h)<<endl;
}

