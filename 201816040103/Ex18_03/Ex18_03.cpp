#include <iostream>
#include <string>
using namespace std;

template <typename T>
bool isEqualTo(T &a,T &b)
{
	if(a==b)
		return true;
	else
		return false;
}
template <typename T>
bool operator==(const T &a,const T &b)
{
	return a==b;
}

int main()
{
	int a=1,b=2;
	if(isEqualTo(a,b))
		cout<<"true"<<endl;
	else
		cout<<"false"<<endl;
	double c=1.3,d=1.3;
    if(isEqualTo(c,d))
		cout<<"true"<<endl;
	else
		cout<<"false"<<endl; 
}
