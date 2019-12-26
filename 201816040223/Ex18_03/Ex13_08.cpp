
#include <iostream>
#include <string>
using namespace std;
template<typename T>
class biger
{
public:
    biger(T=0);
bool isEqualTo (const T &a,const T &b)//isEqualTo 函数模板
{
    if(a==b)
         return true;
    else
         return false;
}
bool &operator==(const T &value1,const T &value2)
{
    if(value1!=value2)
        return false;// not equal
    else
        return true;// equal
}
    
}
int main()
{
   int a=8, b=8;
   double c=3,d=4;
    isEqualTo(a,b);
    cout<< "a?=b"<<endl;
    isEqualTo(c,d);
    cout<< "c?=d"<<endl;
    biger x(2),y(4);
     isEqualTo(x,y);
     cout<< "x?=y"<<endl;
    return 0;
}
