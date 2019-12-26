#include<iostream>
using namespace std;
template <typename T>
bool isEqualTo(T a,T b){
    return a==b?true:false;
}
template <typename T>
class Time{
    private: T second,minute,hour;
    public:
        Time(T s,T m,T h):second(s),minute(m),hour(h){}
        bool operator == (const Time<T> & right){
            if(right.second==second&&right.minute==minute&&right.hour==hour)
                return true;
            else return false;
        }
};
int main(){
    int a=1,b=2;
    cout<<isEqualTo(a,b)<<endl;
    double c=1.1,d=1.1;
    cout<<isEqualTo(c,d)<<endl;
    Time<int> t1(10,20,30);
    Time<int> t2(10,20,30);
    cout<<isEqualTo(t1,t2)<<endl;
    return 0;
}
