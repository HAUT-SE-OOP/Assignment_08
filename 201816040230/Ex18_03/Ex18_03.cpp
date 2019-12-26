#include <iostream>
#include<array>
using namespace std;

class Sale//销售额
{
  public:
      Sale(double a,double b):salevolume(a),unitprice(b)
      {

      }
      double getsalevolume()
      {
          return salevolume;
      }
      double getunitprice()
      {
          return unitprice;
      }
      bool operator==(Sale a)
      {
          if(a.salevolume==salevolume&&a.unitprice==unitprice)
            return true;
          return false;
      }
  private:
    double salevolume;//销售量
    double unitprice;//单价
};
template<typename T1>
bool isEqualTo(T1 a,T1 b)
{
    if(a==b)
        return true;
    return false;

}

int main()
{
    int x=1,y=1;
    if(x==y)
    cout<<"x=y"<<endl;
    else
    cout<<"x!=y"<<endl;
    Sale m(1.1,2.2);
    Sale n(1.1,1.1);
    if(n==m)//两个对象比较
        cout<<"n=m"<<endl;
    else
        cout<<"n!=m"<<endl;
    return 0;
}
