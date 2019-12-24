#include<iostream>

using namespace std;

template<typename T>

bool isEqualTo(T a,T b)
{
    if(a==b)
        return true;
    else
        return false;
}
template<typename T>

bool operator==(T &a,T &b)
{
    if(a==b)
        return true;
    else
        return false;
}
int main()
{
    int a=1,b=2;
    double c=1.1,d=1.1;
    char e='A',f='B';
    if(isEqualTo(a,b))
        cout<<"a and b:Equal"<<endl;
    else
        cout<<"a and b:Not Equal"<<endl;
    if(isEqualTo(c,d))
        cout<<"c and d:Equal"<<endl;
    else
        cout<<"c and d:Not Equal"<<endl;
    if(isEqualTo(e,f))
        cout<<"e and f:Equal"<<endl;
    else
        cout<<"e and f:Not Equal"<<endl;
    if(a==b)
        cout<<"a and b:Equal"<<endl;
    else
        cout<<"a and b:Not Equal"<<endl;
    if(c==d)
        cout<<"c and d:Equal"<<endl;
    else
        cout<<"c and d:Not Equal"<<endl;
    if(e==f)
        cout<<"e and f:Equal"<<endl;
    else
        cout<<"e and f:Not Equal"<<endl;
}
