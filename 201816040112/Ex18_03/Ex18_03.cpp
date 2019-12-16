#include <iostream>

using namespace std;


class Complex
{
public:
    Complex(int a,int  b)
    {
        real=a;
        imag=b;
    }
    bool operator==(Complex &right)
    {
        if(this->real==right.real&&this->imag==right.imag)
            return true;
        return false;
    }
private:
    double real,imag;


};
template<typename T>
bool isEqualTo(T a,T b)
{
    if(a==b)
        return true;
    return false;
}

int main()
{
    int a,b,c,d;
    double x,y;
    cout<<"请输入两个整数"<<endl;
    cin>>a>>b;
    if(isEqualTo(a,b))
        cout<<"这两个整数相等"<<endl;
    else
        cout<<"这两个整数不相等"<<endl;

    cout<<"请输入两个浮点数"<<endl;
    cin>>x>>y;
    if(isEqualTo(x,y))
        cout<<"这两个浮点数相等"<<endl;
    else
        cout<<"这两个浮点数不相等"<<endl;

    cout<<"请输入两个复数"<<endl;
    cin>>a>>b>>c>>d;
    Complex num1(a,b),num2(c,d);
    if(isEqualTo(num1,num2))
        cout<<"这两个复数相等"<<endl;
    else
        cout<<"这两个复数不相等"<<endl;

    return 0;
}
