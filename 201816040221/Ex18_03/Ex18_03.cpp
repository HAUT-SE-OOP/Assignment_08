#include <iostream>

using namespace std;
#include <deque>
#include <iostream>
template <typename T>
bool isEqualTo (const T &a,const T &b)

{

    if(a==b)



        return true;


    else

        return false;

}



template <typename T>

    bool operator==(const T &a,const T &b)

{

    if(b==a)

        return true;

    else

        return false;


};

int main()
{
    int a=5,b=9;
    double m=5.0,n=9.0;
    if(isEqualTo(a,b))
    {
        cout<<"a is epual b"<<endl;
    }
    else
    {
        cout<<"a is not equal to b"<<endl;
    }
    if(isEqualTo(m,n))
        cout<<"m is equal to n"<<endl;
    else
        cout<<"m is not equal to n"<<endl;



    return 0;
}
