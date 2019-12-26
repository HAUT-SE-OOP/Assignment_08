//
//  main.cpp
//  Ex18_03
//
//  Created by misonomayubw on 2019/12/26.
//  Copyright © 2019 misonomayubw. All rights reserved.
//

#include <iostream>
#include<string>
using namespace std;

//def class
class Compare
{
    public:

        Compare()
        {
        a1=0;
        }
        Compare(int n)
        :a1(n)
        {
        }
    bool operator==( const Compare &right)
    {
        if(a1==right.a1)
            return true;
            
        else
            return false;
            
    }
    int a1;
private:
    

};//end def class

//template
template< typename T >
//function
//judge
T isEqualTo(T &a,T &b)
{
    if(a==b)
       {
        cout<<"they are equal to each other\n";
        return true;
       }
    else
        {
        cout<<"they are not equal to each other\n";}
        return false;
}


//main
int main()
{
    int a=1;int b=4;
    Compare A(5);
    Compare B(5);

    double c=9.0; double d=9.0;
    isEqualTo(a,b);
    isEqualTo(c,d);
//overload
    if(A==B)
        cout<<"they are equal to each other\n";
    else
        cout<<"they are not equal to each other\n";

}

