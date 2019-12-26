#include <iostream>
#include <array>
#include <vector>
#include <deque>

using namespace std;

template <typename T>
bool isEqualTo(const T &a,const T &b)
{
    if(a==b)
    {
        return true;
    }
    else
    {
        return false;
    }
}//用模板比较两个数是否相等

int main()
{
    int x=1, y=2;
    isEqualTo(x,y);
    cout<<"x != y"<<endl;
    double x1=1.1,y1=2.2;
    isEqualTo(x1,y1);
    cout<<"x1 != y1"<<endl;
    int x2=3,y2=3;
    isEqualTo(x2,y2);
    cout<<"x2 != y2"<<endl;
    return 0;
}

class aibi
{
public:
      aibi(int x=1);
      bool operator ==(aibi &righ)
      {
          if(x==righ.x)
          {
              return true;
          }
          else
          {
              return false;
          }
      }
private:
    int x;
};//end aibi
