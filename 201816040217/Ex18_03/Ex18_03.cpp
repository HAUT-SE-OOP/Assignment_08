#include <iostream>
#include <bits/stdc++.h>
using namespace std;

template <typename T>
bool isEqualTo(T a, T b)
{
    if(a == b) return true;
    else return false;
}

template <typename T>
class Bigdata{
public:
    Bigdata(T t = 0){
        test = t;
    }
    bool operator==(const Bigdata &right){
        return this->test == test;
    }

private:
    T test;
};




int main()
{
    int a = 1,b = 1;
    if(isEqualTo(a,b))
    {
        cout<<setw(10)<<"a == b"<<endl;
    }
    else cout<<setw(10) <<" a != b"<<endl;


    Bigdata <int> a2(15);
    Bigdata <int> b2(11);

    if(isEqualTo(a2,b2)) cout<<setw(10)<<"a2 == b2"<<endl;
    else cout<<setw(10)<<" a2 != b2"<<endl;

    Bigdata <int> a3(11);
    Bigdata <int> b3(11);

    if(isEqualTo(a3,b3)) cout<<setw(10)<<"a3 == b3"<<endl;
    else cout<<setw(10) <<" a3 != b3"<<endl;



    return 0;
}
