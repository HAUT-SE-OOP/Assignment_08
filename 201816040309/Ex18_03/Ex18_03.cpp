#include <iostream>

using namespace std;
template <typename T>
bool isEqualTo(T a,T b)
{
    if(a==b)
        return true;
    else
        return false;
}
class demo
{
public:
    demo(int a):a(a){}
private:
    int a;
};
class demo1
{

public:
    demo1(int a):a(a){}
    bool operator==(demo1 &right)
    {
        return this->a ==right.a;
    }
private:
    int a;
};
int main()
{
    int a =1,b=1;
    double x =2.0,y=3.0;
    cout<<"a == b is "<<isEqualTo(a,b)<<endl;
    cout<<"x ==y is "<<isEqualTo(x,y)<<endl;
//    demo c(1),d(2);
//    cout<<"c == d is "<<isEqualTo(c,d)<<endl; //报错，因为没有重载==运算符，俩对象不能直接比较
    demo1 c(1),d(2);
    cout<<"c == d is "<<isEqualTo(c,d)<<endl;
}
