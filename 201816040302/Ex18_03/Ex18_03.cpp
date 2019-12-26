#include <iostream>
#include <array>
#include <string>

using namespace std;

template <typename T>
bool isEqualTo(T &a, T &b)//isEqualTo函数
{
    if(a==b)
        return true;
    else
        return false;
}

template <typename T>
class equalment//类模板
{
public:
    equalment(T data){a=data;};
    bool operator==(equalment& b)
    {
        if(a==b.a)
        return true;
    else
        return false;
    };
private:
    T a;
};
int main()
{
    double a1=0.8,a2=8.9;//自定义不同类型的变量
    int b1=8,b2=8;
    string c1="ttttt";
    string c2="iiiii";
    isEqualTo(a1,a2);
    isEqualTo(b1,b2);
    isEqualTo(c1,c2);
    return 0;
}
