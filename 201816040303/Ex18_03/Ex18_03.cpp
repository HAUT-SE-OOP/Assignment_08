#include <iostream>

using namespace std;

template <class T> //定义模板 
bool isEqualTo(T &a,T &b)
{
    if(a == b)
    return true;
    else
    return false;
}


int main()
{
    int a1 = 12,b1 = 12;   //定义两个int类型的值 
    double a2 = 13.6,b2 = 13.5; //定义两个double类型的值 
    string a3 = "aaaa", b3 = "aaaa"; //定义两个string类型的值 
    if(isEqualTo(a1,b1))
        cout << "a1 is equal b1" << endl;
    else
        cout << "a1 is not equal b1" <<endl;
    if(isEqualTo(a2,b2))
        cout << "a2 is equal b2"<<endl;
    else
        cout << "a2 is not equal b2" <<endl;
    if(isEqualTo(a3,b3))
        cout << "a3 is equal b3"<<endl;
    else
        cout << "a3 is not equal b3"<<endl;
    return 0;
}
