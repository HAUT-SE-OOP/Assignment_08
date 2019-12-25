#include <bits/stdc++.h>

using namespace std;
class rectangle
{
public:
    rectangle(double a,double b)
    :length(a),wide(b)
    {}
    bool operator==(rectangle a){
        if(a.getlength()==length&&a.getwide()==wide)
            return true;
        return false;
    }
    double getlength(){
        return length;
    }
    double getwide(){
        return wide;
    }
private:
    double length;
    double wide;
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
    int a=1,b=2;
    if(a==b)
        cout<<"a is equal to b"<<endl;
    else
        cout<<"a is not equal to b"<<endl;
    double x=1.1,y=1.1;
    if(x==y)
        cout<<"x is equal to y"<<endl;
    else
        cout<<"x is not equal to y"<<endl;
    rectangle p(1.1,2.2);
    rectangle q(1.1,2.2);
    if(p==q)
        cout<<"p is equal to q"<<endl;
    else
        cout<<"p is not equal to q"<<endl;
    return 0;
}
