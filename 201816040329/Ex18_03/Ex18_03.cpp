#include <iostream>

#include <array>

#include <string>

using namespace std;



template< typename T >

bool Equal(const T&k,const T&n)

{
    if(k==n)
    return true;
    else
        return false;
}



int main()

{
   int m=8,n=8;

    if(Equal(m,n))

        cout<< m << " is equal to " << n<<endl ;

    else

        cout<< m << " is not equal to " << n <<endl;

    double y=6.6,h=6.8;

    if(Equal(y,h))

        cout<<y << " is equal to " << h<<endl ;

    else

        cout<<y<< " is not equal to " <<h<<endl ;


}
