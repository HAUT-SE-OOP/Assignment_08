#ifndef ARRAY_H
#define ARRAY_H
#include <iostream>
using namespace std;

template <class T>
{
public:

  friend ostream& operator << (ostream& output,Array<T>& obj) //overload the << function
  {
      for(size_t i = 0;i < obj.size;i++)
      {
          output << obj.ptr[i];
      }
  }
  friend istream& operator >> (istream& input,Array<T>& obj) //overload the >> function
  {
      for(size_t i = 0;i < obj.size;i++)
        input >> obj.ptr[i];
  }
  const Array<T> &operator=(const Array<T> &right)//overload the = function
  {
      if(this==&right)
      {
        for(size_t i = 0;i < size;i++)
            ptr[i] = right.ptr[i];
      }
      return *this;
  }
  bool operator==(const Array<T> &right)//overload the == function
  {
      if(size!=right.size)
        return false;
      for(size_t i = 0;i < size;i++)
      {
        if(ptr[i]!=right.ptr[i])
            return false;
        else
            return true;
      }
  }
  K operator[](int sub)//overload the [] function
  {
        return ptr[subscript];
  }

private:
    size_t size;
    T *ptr;
#endif // ARRAY_H
