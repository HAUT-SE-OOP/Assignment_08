#include <iostream>

using namespace std;
template<class T>
bool isEqualTo(T& t1, T& t2)
{
    if(t1 == t2)
        return true;
    return false;
}

class A
{
public:
    bool operator==(A& a)
    {
        if(this->n == a.n)
            return true;
        return false;
    }
private:
    int n = 3;
};
int main()
{
    //定义两组变量
    int x, y;
    double m, n;

    //为Int数据赋值
    x = 3;
    y = 4;

    //为double数据赋值
    m = 2.2;
    n = 2.2;

    //调用isEqualTo
    if(isEqualTo(x, y))
        cout<<"x = y"<<endl;
    else
        cout<<"x !+ y"<<endl;

    if(isEqualTo(m,n))
        cout<<"m = n"<<endl;
    else
        cout<<"m != n"<<endl;

    //定义自定义类型
    A a1, a2;

    //调用isEqualTo
    if(isEqualTo(a1, a2))
        cout<<"a1 = a2"<<endl;
    else
        cout<<"a1 != a2"<<endl;

    return 0;
}
