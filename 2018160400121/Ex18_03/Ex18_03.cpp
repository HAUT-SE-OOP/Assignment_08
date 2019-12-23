//Ex19_03.cpp
#include <iostream>
#include <string>
#include <vector>
using namespace std;

//isEqualTo函数模板
template <typename T>
bool isEqualTo(T& a, T& b)
{
	if (a == b)
	{
		return true;
	}
	else
		return false;
}

//类模板
template <typename T>
class Data
{
public:
	//重载相等运算符
	bool operator==( Data& right )
	{
		if (d == right.d)
			return true;
		else
			return false;
	};

	Data(T n) { d = n; };//构造函数
	Data() {};//显式声明默认构造函数

	void setData(T n)
	{
	    d = n;
	}
	T getData()
	{
	    return d;
	}

private:
	T d;
};

int main()
{
	int a = 3, b = 2;
	double c = 3.3, d = 2.2;
	string e = "C++", f = "Java";

	Data<int>intData1;
	Data<int>intData2;
	Data<double>doubleData1;
	Data<double>doubleData2;
	Data<string>stringData1;
	Data<string>stringData2;
	intData1.setData(3);
	intData2.setData(2);
	doubleData1.setData(3.3);
	doubleData2.setData(3.3);
	stringData1.setData("C++");
	stringData2.setData("Java");

	if(isEqualTo(a, b) == true)
        cout << "a == b" << endl;
    else
        cout << "a != b" << endl;
    if(isEqualTo(c, d) == true)
        cout << "c == d" << endl;
    else
        cout << "c != d" << endl;
    if(isEqualTo(e, f) == true)
        cout << "e == f" << endl;
    else
        cout << "e != f" << endl;

    if(intData1 == intData2)
        cout << "intData1 == intData2" << endl;
    else
        cout << "intData1 != intData2" << endl;
    if(doubleData1 == doubleData2)
        cout << "doubleData1 == doubleData2" << endl;
    else
        cout << "doubleData1 != doubleData2" << endl;
    if(stringData1 == stringData2)
        cout << "stringData1 == stringData2" << endl;
    else
        cout << "stringData1 != stringData2" << endl;

    return 0;
}
