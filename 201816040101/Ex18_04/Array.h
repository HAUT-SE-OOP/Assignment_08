#ifndef ARRAY
#define ARRAY
#include <iostream>
using namespace std;
template<class T>
class Array
{
  friend  istream &operator>>(istream &input,Array &a)
{
    for(size_t i=0;i<a.size;++i)
    {
        input>>a.ptr[i];
    }
    return input;
}
  friend  ostream &operator<<(ostream &output, Array &a)
{
    for(int i=0;i<a.size;++i)
        output<<a.ptr[i]<<"  ";
    return output;
}

public:

    Array(int arraysize)
    :size(arraysize>0? arraysize :
          throw invalid_argument("Array size must be greater than 0") ),
    ptr(new T[size])
{
    for(int i=0;i<size;++i)
        ptr[i]=0;
}
   Array(Array &tocopy)
      :size(tocopy.size),
      ptr(new T[size])
{
    for(size_t i=0;i<size;++i)
        ptr[i]=tocopy.ptr[i];
}
    ~Array<T>()
{
    delete []ptr ;
}

    size_t getSize()
{
    return size;
}
    Array &operator=(Array &right)
  {
    if(&right!=this)
    {
        if(size!=right.size)
        {
            delete []ptr;
            size=right.size;
            ptr=new int[size];
        }
        for(size_t i=0;i<size;++i)
            ptr[i]=right.ptr[i];
    }
    return *this;
  }
    bool operator==(Array &right)
 {
    if(size!=right.size)
        return false;
    for(size_t i=0;i<size;++i)
        if(ptr[i]!=right.ptr[i])
          return false;
    return true;
 }
    bool operator!=(Array &right)
    {
        return  !(*this == right);
    }
  T &operator[](int sub)
  {
    if(sub<0 || sub>=size)
        throw out_of_range("sub out of range");
    return ptr[sub];
  }
  T operator[](int sub) const
  {
    if(sub<0||sub>=size)
        throw out_of_range("sub out of range");
    return ptr[sub];
  }
private:
    int size;
    T *ptr;
};
#endif


