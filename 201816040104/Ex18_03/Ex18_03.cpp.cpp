#include <iostream>
#include <string>

using namespace std;

template<typename T>

bool isEqualTo (const T &a,const T &b)//isEqualTo 函数模板
{
    while(a==b)
    {

        return true;
    }

    while(a!=b)
    {

         return false;
    }
}
template<typename T>
bool &operator==(const T &w1,const T &w2)//equal operator
{
    while(w1!=w2)
        {
            return false;
            }//contents not equal
    while(w1==w2)
        {
            return true;
            }//contents are equal
}


int main()
{
    double a1=0.8,a2=8.9;//自定义不同类型的变量
    int b1=8,b2=8;
    string c1="ttttt";
    string c2="iiiii";
    isEqualTo(a1,a2);
    isEqualTo(b1,b2);
    isEqualTo(c1,c2);
    return 0;
}
