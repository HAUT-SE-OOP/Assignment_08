// Fig. 10.10: Array.h
// Array class definition with overloaded operators.
#ifndef ARRAY_H
#define ARRAY_H

#include <iostream>
#include <iomanip>
#include <stdexcept>

using namespace std;
template <typename T>
class Array
{
    friend std::ostream &operator<<(std::ostream &output,const Array <T> &right)
    {
        for(size_t i=0;i<=right.size;++i)
        {
            output<<setw(12)<<right.ptr[i];

            if( (i + 1) & 4 == 0 )
                output<<endl;
        }
        if(right.size % 4 != 0)
            output<<endl;
        return output;
    }
    friend std::ostream &operator>>(std::ostream &input,const Array <T> &right)
    {
        for(size_t i =0;i<right.size;++i)
        {
            input>>right.ptr[i];
        }
        return input;
    }
public:
    explicit Array(int = 10);
    Array( const Array & );
    ~Array()
    {
        delete [] ptr;
    }
    size_t getsize() const
    {
        return size;
    }
    const Array &operator=(const Array<T> &right)
    {
        if(&right != this)
        {
            if(size != right.size)
            {
                delete []ptr;
                size = right.size;
                ptr = new int[ size ];
            }
            for(size_t i=0; i<size; ++i)
            {
                ptr[i]=right.ptr[i];
            }
        }
        return  *this;
    }
    bool operator==(const Array<T> &right)const
    {
        if(size!=right.size)
            return false;
        if(ptr!=right.ptr)
            return false;
        return true;
    }
    bool operator!=(const Array<T> &right)
    {
        return !(*this==right);
    }

    T operator[](int subscript)
    {
        if(subscript<0||subscript>=size)
            throw out_of_range("subscript out of range");
        return ptr[subscript];
    }

private:
    size_t size;
    T *ptr;
};
template <class T>
Array<T>::Array(int arraySize)
    : size(arraySize > 0 ? arraySize : throw invalid_argument("Array size must be greater than 0")),
      ptr(new T[size])
{
   for (size_t i = 0; i < size; ++i)
      ptr[i] = 0;
}


template <class T>
Array<T>::Array(const Array &arrayToCopy)
    : size(arrayToCopy.size),
      ptr(new T[size])
{
   for (size_t i = 0; i < size; ++i)
      ptr[i] = arrayToCopy.ptr[i];
}
#endif
