#include <iostream>
#include <string>
using namespace std;
template<typename T>
bool isEqualTo (const T &a,const T &b)
{
    if(a==b)
    {
        cout<<"相等"<<endl;
        return true;
    }
    else
    {
        cout<<"不相等"<<endl;
         return false;
    }
}
template<typename T>
bool &operator==(const T &w1,const T &w2)
{
    if(w1==w2)
    {
          cout<<"相等"<<endl;
        return true;
    }
    else
    {
        cout<<"不相等"<<endl;
         return false;
    }
}
int main()
{
    int a=2,b=3;
    double c=0.8,d=8.1;
    string c1="123";
    string c2="123";
    char m='a';
    char n='a';
    isEqualTo(a,b);
    isEqualTo(c,d);
    isEqualTo(c1,c2);
    isEqualTo(m,n);
    return 0;

}
