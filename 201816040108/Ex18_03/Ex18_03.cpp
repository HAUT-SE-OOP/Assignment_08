#include <iostream>

using namespace std;

template<typename T>
bool isEqualTo(T x, T y)
{
    if(x == y)
        return true;
    else
        return false;
}
template<class T>
class Text
{
private :
    T t;
public:
    Text (T a=0):t(a){}
    bool operator==(Text &x)
    {
        if(t==x.t)
            return true;
        else
            return false;
    }
};

int main()
{
    Text <int >a(1),b(2);
    double c=1.1,d=2.2;
    if(isEqualTo(a,b))
        cout << "It's equal" << endl;
    else
        cout << "It's not equal" << endl;
    if(isEqualTo(c,d))
        cout << "It's equal" << endl;
    else
        cout << "It's not equal" << endl;

}
