#include <iostream>

using namespace std;
class Apple
{
public:
    Apple(int a,int b)
    :x(a),y(b)
    {}
    bool operator==(Apple a)
    {
        if(a.getlx()==x&&a.gety()==y)
            return true;
        return false;
    }
    int getx(){
        return length;
    }
    int gety(){
        return wide;
    }
private:
    int x;
    int y;
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


    double c=3.1,d=3.1;
    if(c==d)
        cout<<"c is equal to d"<<endl;
    else
        cout<<"c is not equal to d"<<endl;

    Apple e(3.3,4.4);
    Apple f(3.3,4.4);
    if(e==f)
        cout<<"e is equal to f"<<endl;
    else
        cout<<"e is not equal to f"<<endl;
    return 0;
}
