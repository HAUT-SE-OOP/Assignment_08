#ifndef ISEQUALTO_H
#define IDEQUALTO_H
#include<deque>
template<typename T>
class isEqualTo
{
public:
    bool operator==(number1 const *n1, number2 const *n2)
    {
        if(n1==n2)
        {
            return true;
        }
        else
        return false;
    }
private:
    int number1;
    int number2;
};
#endif // ISEQUALTO_H
