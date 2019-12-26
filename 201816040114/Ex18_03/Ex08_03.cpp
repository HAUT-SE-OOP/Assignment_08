#include <iostream>

using namespace std;

template<typename T>

bool isEqualTo(T a, T b)
{
    if(a == b)
        return true;
    else
        return false;
}



class Complex
{
public:
    Complex(int r,int i)
    {
        real=r;
        imag=i;
    }
    bool operator==(Complex &right)
    {
        if(real==right.real&&imag==right.imag)
            return true;
        return false;
    }
private:
    double real,imag;

};


int main()
{

    if(isEqualTo(1,2)==true)
        cout<<"1=2"<<endl;
    else
        cout<<"1!=2"<<endl;
    if(isEqualTo(1.0,2.0))
        cout<<"1.0=2.0"<<endl;
    else
        cout<<"1.0!=2.0"<<endl;

    Complex num1(1,1),num2(2,2);
    if(isEqualTo(num1,num2))
        cout<<"(1,1)=(2.2)"<<endl;
    else
        cout<<"(1,1)!=(2.2)"<<endl;
    return 0;
}
