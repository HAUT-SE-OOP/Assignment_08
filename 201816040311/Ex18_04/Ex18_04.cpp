#include <iostream>
#include <string>
#include "Array.h"
using namespace std;

int main()
{
    Array<int> s1(3);
    Array<int> s2;
    cout<<"请输入3个int数:";
    cin >> s1;
    cout <<"s1:"<<s1;
    cout<<"s2等于s1"<<endl;
    s2=s1;
    cout<<"s2:"<<s2;
    cout<<"s1和s2是否相等？  "<<endl;
    cout<<(s2==s1)<<endl;
    cout<<"s1和s2是否不相等？  "<<endl;
    cout<<(s2!=s1);
}
