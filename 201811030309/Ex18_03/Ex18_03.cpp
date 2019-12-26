#include <iostream>

using namespace std;

template <typename T>
bool Equal(T &a, T &b)
{
    if(a==b)
        return true;
    return false;
}
int main()
{
    int x1=1, y1=1;
    double x2=2.2, y2=3.3;
    if(Equal(x1, y1))
        cout << "x1 is equal y1" << endl;
    else
        cout << "x1 is not equal y1" << endl;
    if(Equal(x2, y2))
        cout << "x2 is equal y2" << endl;
    else
        cout << "x2 is not equal y2" << endl;

}
