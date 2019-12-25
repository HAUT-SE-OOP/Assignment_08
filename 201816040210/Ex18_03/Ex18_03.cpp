#include <bits/stdc++.h>

using namespace std;

//function to determine two values if are equal use template
template <typename T>
bool isEqualTo( T a, T b )
{
    if( a==b )
        return true;
    else
        return false;
}
//class ABC
class ABC
{
private:
    int a,b,c;
public:
    ABC(int x,int y,int z)//constructor function
    {
        a=x;
        b=y;
        c=z;
    }
    bool operator==(ABC t)//overload the operator == in class
    {
        if(a==t.a&&b==t.b&&c==t.c)
            return true;
        else
            return false;
    }
};
int main()
{
    ABC abc1(5,6,7);//abc1 is a ABC a=5,b=6,c=7
    ABC abc2(5,6,7);//abc2 is a ABC a=5,b=6,c=7
    if(isEqualTo(abc1,abc2))//use isEqualTo function to determine if abc1 and abc2 are equal
    {
        cout<<"true"<<endl;
    }
    else
        cout<<"false"<<endl;
    return 0;
}
