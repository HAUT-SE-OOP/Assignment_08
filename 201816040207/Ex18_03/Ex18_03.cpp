#include <iostream>

using namespace std;





template <typename T>
bool isEqualTo(T a,T b)
{
    if(a==b)
        return true;
    else
        return false;

}
class Try
{
public:
    Try(double d)
        :date(d)
    {
    }
    double getdate()
    {
        return date;
    }
private:
    double date;

};

bool operator==(Try a, Try b)
{



    if(a.getdate()==b.getdate())
        return true;
    else
        return false;

}


int main()
{
    int a = 0,b=1;
    double c= 1.5,d=1.5;
    Try e(0.6),f(0.7);

    if(isEqualTo(a,b))
    {
        cout<<"Yes,a=b"<<endl;

    }
    else
    {
        cout<<"No,a!=b"<<endl;
    }


    if(isEqualTo(c,d))
    {
        cout<<"Yes,c=d"<<endl;
    }
    else
    {
        cout<<"No,c!=d"<<endl;
    }

    if(isEqualTo(e,f))
    {
        cout<<"Yes,e=f"<<endl;
    }
    else
    {
        cout<<"No,e!=f"<<endl;
    }

    return 0;
}
