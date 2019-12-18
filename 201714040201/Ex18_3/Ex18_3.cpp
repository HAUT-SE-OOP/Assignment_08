//Ex18_3.cpp
#include <iostream>
#include <string>

using namespace std;
template <typename T>
class Data
{
public:
    Data(){};
    Data(T n):dis(n){}
    bool operator == (const Data &b) const {
		return dis == b.dis;
	}
private:
    T dis;
};
bool isEqualTo(int a,int b)
{
    if(a==b)
        return true;
    else
        return false;
}
template <typename T>
bool isEqualTo(T a,T b)
{
    if(a==b)
        return true;
    else
        return false;
}
int main()
{
    int a,b;
    cin>>a>>b;
    if(isEqualTo(a,b))
        cout<<"a is equal to b."<<endl;
    else
        cout<<"a is not equal to b."<<endl;
    double x,y;
    cin>>x>>y;
    if(isEqualTo(x,y))
        cout<<"x is equal to y."<<endl;
    else
        cout<<"x is not equal to y."<<endl;
    char i,g;
    cin>>i>>g;
    if(isEqualTo(i,g))
        cout<<"i is equal to g."<<endl;
    else
        cout<<"i is not equal to g."<<endl<<endl;

    Data<int> w(5),e(5);
    if(w==e)
         cout<<"w is equal to e."<<endl;
    else
        cout<<"w is not equal to e."<<endl<<endl;
    Data<double> s(0.1),k(0.2);
    if(s==k)
         cout<<"s is equal to k."<<endl;
    else
        cout<<"s is not equal to k."<<endl;
}
