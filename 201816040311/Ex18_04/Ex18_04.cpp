#include <iostream>
#include <string>
#include "Array.h"
using namespace std;

int main()
{
    Array<int> s1(3);
    Array<int> s2;
    cout<<"������3��int��:";
    cin >> s1;
    cout <<"s1:"<<s1;
    cout<<"s2����s1"<<endl;
    s2=s1;
    cout<<"s2:"<<s2;
    cout<<"s1��s2�Ƿ���ȣ�  "<<endl;
    cout<<(s2==s1)<<endl;
    cout<<"s1��s2�Ƿ���ȣ�  "<<endl;
    cout<<(s2!=s1);
}
