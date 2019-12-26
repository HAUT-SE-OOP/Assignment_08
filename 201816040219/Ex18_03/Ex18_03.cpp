#include <iostream>
#include <string>
using namespace std;


template <typename T>
bool isEqualTo(T &a,T &b)
{
    if( a == b )
    {
  cout<<"相等";

        return true;
    }

    else
    cout<<"不相等";
        return false;

}

int main()
{
    int x = 1,y = 2;
    double a=3.01,b=3.01;
    string c = "abc",d = "ABC";
    cout << isEqualTo(x,y) << endl;
    cout << isEqualTo(a,b)<<endl;
    cout << isEqualTo(c,d) << endl;

    return 0;
}
