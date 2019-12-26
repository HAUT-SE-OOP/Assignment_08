#include<iostream>
#include<string>
#include"Array.h"
using namespace std;
int main()
{
    Array<int> a(4),b(4);
    Array<double> x(3),y(3);
    cin>>a>>b;
    cout<<a;
    cout<<b;
        if(a==b)
        cout<<"相同"<<endl;
        else
            cout<<"不等"<<endl;
        a=b;
        cout<<a;
        cin>>x;
        cin>>y;
        if(x==y)
            cout<<"一样"<<endl;
        else
            cout<<"不一样"<<endl;

}
