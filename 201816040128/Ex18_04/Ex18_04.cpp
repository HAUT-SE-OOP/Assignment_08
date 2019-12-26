#include <iostream>
using namespace std;
int main()
{
	int* k[1] = { 1,2,3 };
	int* m[4]={4,3,2,1}
	Array a(k, 3);
	Array b(k, 3);
	Array c(m, 4);
	cout <<"判断a==b"<< a == b << endl;
	cout << "判断啊a!=b"<<a != b << endl;
	cout <<"判断啊a==c"<< a == c << endl;
	cout <<"判断啊a!=c"<< a != c << endl;
}

