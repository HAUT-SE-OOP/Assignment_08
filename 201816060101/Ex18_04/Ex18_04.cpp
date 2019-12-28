#include <iostream>
#include "Array.h"

using namespace std;


int main() {
	Array<int, 10> a;
	cout << "Push 1, 2, 3, 4, 5, 6, 7, 8, 9 to back of a:\n";
	//Test insert operator
	for (int i = 1; i < 10; ++i) a.push_back(i);
	//Test bracket operator
	//Test size operator
	for (int i = 0; i < a.size(); ++i) cout << a[i] << (i == a.size() - 1 ? "\n" : " ");

	Array<double, 10> b;
	cout << "\nPush 1.1, 2.2, 3.3, 4.4, 5.5, 6.6, 7.7, 8.8, 9.9 to back of b:\n";
	for (double i = 1; i + 1e-8 < 10; ++i) b.push_back(i + i / 10);
	for (int i = 0; i < b.size(); ++i) cout << b[i] << (i == b.size() - 1 ? "\n" : " ");

	Array<int, 10> c;
	c = a;
	cout << "\nCopy a to c:\n";
	for (int i = 0; i < c.size(); ++i) cout << c[i] << (i == c.size() - 1 ? "\n" : " ");
	cout << "\n删除c的后三个元素：\n";
	//Test pop-up operator
	for (int i = 0; i < 3; ++i) c.pop_back();
	for (int i = 0; i < c.size(); ++i) cout << c[i] << (i == c.size() - 1 ? "\n" : " ");

	//Test equality operator
	cout << "\na" << (a == c ? "=" : "!=") << "c" << "\n";
	return 0;
}
