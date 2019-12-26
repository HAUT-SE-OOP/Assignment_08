//Ex18_03
#include<iostream>
#include<string>
using namespace std;

//a class Point3D
class Point3D
{
public:
    //Constructor
    Point3D(double a,double b,double c)
    :x(a),y(b),z(c)
    {}
    double getX(){return x;}//get function of x
    double getY(){return y;}//get function of y
    double getZ(){return z;}//get function of z
    void print(){cout<<"("<<x<<","<<y<<","<<z<<")";}
    //overload operators ==
    bool operator==(Point3D &a){
        if(a.getX()==x&&a.getY()==y&&a.getZ()==z)
            return true;
        return false;
    }
private:
    double x,y,z;//member of calss
};

template<typename T>
bool isEqualTo(T a,T b)
{
    if(a==b)
        return true;
    return false;
}
int main()
{
    int a=1,b=2;
    cout<<"a= "<< a << " b= "<< b <<endl;
    if(a==b)
        cout<< "a is equal to b" << endl << endl;
    else
        cout<< "a is not equal to b" << endl << endl;

    double x=3.14,y=3.14;
    cout<<"x= "<< x << " y= "<< y <<endl;
    if(x==y)
        cout<< "x is equal to y" << endl << endl;
    else
        cout<< "x is not equal to y" <<endl << endl;

    Point3D c(1,1,1),d(2,2,2);
    cout<<"c=";
    c.print();
    cout<<" d=";
    d.print();
    cout<<endl;
    if(c==d)
        cout<<"p is equal to q"<<endl;
    else
        cout<<"p is not equal to q"<<endl;
    return 0;
}//end main
