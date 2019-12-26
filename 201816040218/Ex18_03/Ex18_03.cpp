#include <iostream>

using namespace std;

template< typename T>
bool isEqualTo(T& a,T& b)
{
    return a==b;
}
template< typename T>
class chongzai
{
public:
    chongzai(T a1) : a(a1) {}
    bool operator ==(chongzai& right){return a==right.geta();}
    T geta(){return a;}
private:
    T a;
};

int main()
{
    int a=1,b=2;
    double a1=1,b1=2;
    cout <<isEqualTo(a,b)<<endl;
    cout <<isEqualTo(a1,b1)<<endl;
    return 0;
}
