//Ex18_03,cpp

#include<iostream>
#include<string>

using namespace std;

template<typename T>

bool isEqualTo(T &x , T &y);

int main()
{
    int q=5;
    int w=8;
    double c=3.3,d=3.30;
    if(isEqualTo(q,w))
        cout<<"q=w."<<endl;
    else
        cout<<"q!=w."<<endl;

    if(isEqualTo(c,d))
        cout<<"c=d."<<endl;
    else
        cout<<"c!=d."<<endl;

}

template<typename T>

bool isEqualTo(T &x,T &y)
{
    if(x==y)
        return true;
    else
        return false;
}
