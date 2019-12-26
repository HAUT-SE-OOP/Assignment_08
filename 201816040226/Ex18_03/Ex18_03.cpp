#include <iostream>

using namespace std;

template<typename T>
bool isEqualTo(T a,T b)
{
    if(a==b)
        return true;
    return false;
}
//class Rectangle
class R
{
private:
    double l;
    double w;
public:
    R(double a,double b)//constructor function
        :l(a),w(b){}
    bool operator==(R t)//overload the operator == in class
    {
        if(l==t.l&&w==t.w)
            return true;
        else
            return false;
    }
};
int main()
{
    int a=3,b=5;
    if(a==b)
        cout<<"a is equal to b"<<endl;
    else
        cout<<"a is not equal to b"<<endl;
    double x=3.1,y=5.1;
    if(x==y)
        cout<<"x is equal to y"<<endl;
    else
        cout<<"x is not equal to y"<<endl;
    R c(3.1,5.2);
    R d(1.1,2.2);
    if(c==d)
        cout<<"c is equal to d"<<endl;
    else
        cout<<"c is not equal to d"<<endl;
    return 0;
}
