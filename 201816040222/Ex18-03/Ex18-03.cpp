#include <iostream>
#include<array>
using namespace std;

template<typename T>
bool isEqualTo(T a,T b)
{
    if(a==b)
        return true;
    else
        return false;

 }

 int main()
{
    int x,y;
    cin >> x >> y;
    cout << isEqualTo(x,y) << endl;
    double a, b;
    cin >> a >> b;
    cout << isEqualTo(a,b) << endl;
    return 0;
}
