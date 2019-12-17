// Exercise 18.3 Solution:Ex18_03.cpp
#include <iostream>

using namespace std;
//Function template isEqualto
template <typename T>
bool isEqualTo(T a,T b)
{
    if(a == b)
        return true;
    else
        return false;
}

//Operator = = overload
template <class U>
class Data
{
public:
    explicit Data(U u)
    {
        datas=u;
    }
    U getDatas()const
    {
        return datas;
    }
    bool operator==(  U &right)
    {
        if(datas == right)
        {
            return true;
        }
        return false;
    }
private:
    U datas;
};

int main()
{
    int a=10,b = 15;
    cout << "a: " << a << endl;
    cout << "b: " << b << endl;
    // test function isEqualTo
    if(isEqualTo(a,b))
        cout << "a is equal to b" <<endl;
    else
        cout << "a is not equal to b" <<endl;

    double c = 20.1, d = 20.10;
    cout << "c: " << c << endl;
    cout << "d: " << d << endl;
    // test function isEqualTo
    if(isEqualTo(c,d))
        cout << "c is equal to d" <<endl;
    else
        cout << "c is not equal to d" <<endl;
    Data<float> e(12.3);
    float f =5.6;
    cout << "e: " << e.getDatas() << endl;
    cout << "f: " << f << endl;
    if(e.getDatas()==f)
        cout << "e is equal to f" <<endl;
    else
        cout << "e is not equal to f" <<endl;
    return 0;
}//end main

