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

 template<typename T>




bool &operator==(const T &w1,const T &w2)//equal operator
{
    while(w1!=w2)

        {
          return false;
        }//contents not equal

    while(w1==w2)
        {
            return true;
        }//contents are equal

}
 int main()
{
    int x=5,y=6;
    cout << isEqualTo(x,y) << endl;

    double a=6.0, b=8.0;
    cout << isEqualTo(a,b) << endl;

    string ch="hahah",sh="hahae";

    if(ch==sh)
        cout<<"true"<<endl;
    else
        cout<<"false"<<endl;

    return 0;
}
