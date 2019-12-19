#include <iostream>
#include <string>
using namespace std;


template<class T>
bool isEqualTo(T a,T b)
{
    if(a==b)
        return true;
    else
        return false;
}
int main()
{
    int a=1,b=2,c=1;
    double x1=1.1,x2=2.2, x3=1.1;
    string x="aqa" ,y="AQA" , z="aqa";
    cout<<"int  \n";
    cout<<"a= "<<a<<"; b= "<<b<<"; c= "<<c<<endl;
    cout<<"a==b? "<<isEqualTo(a,b)<<endl;
    cout<<"a==c? "<<isEqualTo(a,c)<<endl;
    cout<<"\ndouble \n";
    cout<<"x1= "<<x1<<"; x2= "<<x2<<"; x3= "<<x3<<endl;
    cout<<"x1==x2? "<<isEqualTo(x1,x2)<<endl;
    cout<<"x1==x2? "<<isEqualTo(x1,x3)<<endl;
    cout<<"\nstring \n";
    cout<<"x= "<<x<<"; y= "<<y<<"; z= "<<z<<endl;
    cout<<"x==y? "<<isEqualTo(x,y)<<endl;
    cout<<"x==z? "<<isEqualTo(x,z);
    return 0;
}
