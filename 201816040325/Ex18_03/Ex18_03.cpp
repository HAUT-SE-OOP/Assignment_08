#include <iostream>

using namespace std;


template<typename A>
bool isEqualTo(A a,A b)
{
    if(a==b)
    {
        return true;
    }
    else
    {
        return false;
    }
}


int main()
{
    int a=1,b=2;
    if(isEqualTo(a,b))
        printf("a=b\n");
    return 0;
}
