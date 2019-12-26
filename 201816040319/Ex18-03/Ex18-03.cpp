#include <iostream>//头文件的声明

using namespace std;

template <typename T>//模板声明
bool isEqualTo(const T &x,const T &y)//bool模板的运用
{
    if(x==y)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int a=5,b=5;
    double c=1.2,d=2.2;
    if(isEqualTo(a,b))
    {
        cout<<a<<"=="<<b<<endl;
    }
    else
    {
        cout <<a<<"!="<<b<<endl;
    }
    double c=1.2,d=2.2;
     if( isEqualTo(c,d);))
    {
        cout<<c<<"=="<<d<<endl;
    }
    else
    {
        cout <<c<<"!="<<d<<endl;
    }

    return 0;
}
