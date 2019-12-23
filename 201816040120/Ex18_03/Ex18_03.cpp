#include <iostream>
#include <array>
#include <string>
#include <mutex>
using namespace std;

template <typename T>
bool isEqualTo(T &a, T &b)
{
    if(a == b)
        return true;
    else
        return false;
}

template <typename T>
class equalment
{
public:
    equalment(T data)
    {
        a = data;
    }
    bool operator==(equalment &a)
    {
        if(this->a == a.a)
            return true;
        else
            return false;
    }
private:
    T a;
};




int main()
{
    int a = 1, b = 2;

    if(isEqualTo(a,b))//调用isEqualTo函数
        cout <<a<<"="<<b<<endl;
    else
        cout <<a<<"≠"<<b<<endl;

    double c=1.1,d=1.1;//声明两个double类变量

    if(isEqualTo(c,d))//调用isEqualTo函数
        cout <<c<<"="<<d<<endl;
    else
        cout <<c<<"≠"<<d<<endl;



    string e="czz",f="zzc";//声明两个string类变量

    if(isEqualTo(e,f))//调用isEqualTo函数
        cout <<e<<"="<<f<<endl;
    else
        cout <<e<<"≠"<<f<<endl;

    array <int,2> arr1={{1,2}};//声明两个array类变量
    array <int,2> arr2={{1,2}};

    if(isEqualTo(arr1,arr2))//调用isEqualTo函数
        cout <<"arr1"<<"="<<"arr2"<<endl;
    else
        cout <<"arr1"<<"≠"<<"arr2"<<endl;

    cout<<"\n\n\n";

    equalment<int> ab(1);//声明两个数据成员是int的类
    equalment<int> bc(2);//调用重载函数==

    if(ab==bc)

        cout <<"ab"<<"="<<"bc"<<endl;

    else

        cout <<"ab"<<"≠"<<"bc"<<endl;



    equalment<double> cd(1.1);//声明两个数据成员是double的类

    equalment<double> de(2.1);//调用重载函数==

    if(cd==de)

        cout <<"cd"<<"="<<"de"<<endl;

    else

        cout <<"cd"<<"≠"<<"de"<<endl;



    equalment<string> ef("czz");//声明两个数据成员是string的类

    equalment<string> fg("zcc");//调用重载函数==

    if(ef==fg)

        cout <<"ef"<<"="<<"fg"<<endl;

    else

        cout <<"ef"<<"≠"<<"fg"<<endl;
    return 0;
}
