
//

#include <iostream>
#include<string>
using namespace std;
template<typename T>
bool isEqual(T &a ,T  & b)
{
    if (a == b)
    {
        cout << "相等" << endl;
        return true;
    }
    else
    {
        cout << "不同" << endl;
        return false;
    }
}
template<typename T>
bool operator==(T & a,T &b)
{
    return a != b ? false : true;
}


int main()
{
    int a = 1, b = 2;
    string x = "终了", y = x;
    if(x==y)
    {
        cout << "相同" << endl;
    }
    else
    {
        cout << "不同" << endl;
    }
    isEqual(a, b);
    isEqual(x, y);
}

