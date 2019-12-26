#include <iostream>
#include "Array.h"
using namespace std;

int main()
{
    Array<int> intt(7);
    Array<double> dd;
    cout<<"size of Array intt is"<<intt.getSize()
    <<"\nArray after initialization :\n"<<intt<<endl;
    cout<<"size of Array dd is"<<dd.getSize()
    <<"\nArray after initialization :\n"<<dd<<endl;
    cout<<"Enter 7 integers :"<<endl;
    cin>>intt;
    cout<<"Enter 10 doubles :"<<endl;
    cin>>dd;
    cout<<"\nAfter input ,the Arrays contain:\n"
    <<"intt :\n"<<intt
    <<"dd :\n"<<dd;
    Array<int> itt;
    if(itt!=intt)
        cout<<"itt and intt are not equal"<<endl;

    return 0;
}
