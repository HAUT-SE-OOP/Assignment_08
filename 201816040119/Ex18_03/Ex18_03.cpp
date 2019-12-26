#include <iostream>
#include<deque>
using namespace std;

template<typename T>
bool isEqualTo(T a,T b)
{
    if(a==b)
        return true;
    else
        return false;
}
class Student
{
   public:Student(int a):id(a){} ;
   private:int id;
};
class Student1
{
   public:
       bool operator==(Student1 &a)
   {
       if(this->id==a.id)
         return true;
       else
        return false;
   }
       Student1(int a):id(a){} ;
   private:int id;
};
int main()
{
    int a1=1,b1=2,c1=1;
    double a2=1.0,b2=2.0,c2=1.0;
    string a3="luo",b3="yang",c3="luo";
    Student a4(1),b4(2),c4(1);
    Student1 a5(1),b5(2),c5(1);
    cout<<"int 类型调用函数模板两种结果如下:"<<endl;
    cout<<"a1 and b1:"<<isEqualTo(a1,b1)<<" ";
    cout<<"a1 and c1:"<<isEqualTo(a1,c1)<<endl;
    cout<<"double 类型调用函数模板两种结果如下:"<<endl;
    cout<<"a2 and b2:"<<isEqualTo(a2,b2)<<" ";
    cout<<"a2 and c2:"<<isEqualTo(a2,c2)<<endl;
    cout<<"string 类型调用函数模板两种结果如下:"<<endl;
    cout<<"a3 and b3:"<<isEqualTo(a3,b3)<<" ";
    cout<<"a3 and c3:"<<isEqualTo(a3,c3)<<endl;
    cout<<"未重载Student类型调用函数模板两种结果如下:"<<endl;
    cout<<"编译器报错：no match for 'operator==' (operand types are 'Student' and 'Student'"<<endl;
    cout<<"重载Student类型调用函数模板两种结果如下:"<<endl;
    cout<<"a5 and b5:"<<isEqualTo(a5,b5)<<" ";
    cout<<"a5 and c5:"<<isEqualTo(a5,c5)<<endl;
    return 0;
}
