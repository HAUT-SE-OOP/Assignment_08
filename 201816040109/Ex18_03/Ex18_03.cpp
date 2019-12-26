#include <iostream>
#include <string>
using namespace std;

template <typename T>
bool isEqualTo(T a, T b)//函数模板
{
    if (a == b)
        return true;
    else
        return false;
}
int main()
{
    int x1 = 1, y1 = 1, z1 = 2;
    double x2 = 1.1, y2 = 1.1, z2 = 2.2;
    string x3 = "flag1", y3 = "flag1", z3 = "flag2";
    cout << x1 << "==" << y1 << " : " << isEqualTo(x1, y1) << endl;
    cout << x1 << "==" << z1 << " : " << isEqualTo(x1, z1) << endl;
    cout << x2 << "==" << y2 << " : " << isEqualTo(x2, y2) << endl;
    cout << x2 << "==" << z2 << " : " << isEqualTo(x2, z2) << endl;
    cout << x3 << "==" << y3 << " : " << isEqualTo(x3, y3) << endl;
    cout << x3 << "==" << z3 << " : " << isEqualTo(x3, z3) << endl;
    return 0;
}
