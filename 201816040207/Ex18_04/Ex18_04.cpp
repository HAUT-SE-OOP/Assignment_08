#include <iostream>
#include"Array.h"

using namespace std;

int main()
{


    Array<int> a(10),b(5);
    cout<<a.getSize()<<" "<<b.getSize()<<endl;
    if(a==b)
        cout<<"Yes"<<endl;
    else
        cout<<"No"<<endl;



    Array<double> c(10),d(10);
    cout<<c.getSize()<<" "<<d.getSize()<<endl;
    if(c==d)
        cout<<"Yes"<<endl;
    else
        cout<<"No"<<endl;



    Array<string> e(2);
    cin>>e;
    cout<<e;

    return 0;
}
