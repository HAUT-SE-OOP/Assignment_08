#ifndef ARRAY_H_INCLUDED
#define ARRAY_H_INCLUDED

#include <iostream>
#include <iomanip>
#include <stdexcept>
using namespace std;

template <typename T>
class Array
{
    friend ostream &operator<<(ostream &output,const Array &a) //看的书上的代码
    {
        for(size_t i=0;i<a.size;++i)
        {
            output<<setw(12)<<a.ptr[i];
            if((i+1)%4==0)
                output<<endl;
        }
        if(a.size%4!=0)
            output<<endl;
        return output;
    }
    friend istream &operator>>(istream &input,const Array &a)
    {
        for(size_t i=0;i<a.size;++i)
            input>>a.ptr[i];
        return input;
    }
public:
    Array(int arraySize)
       :size(arraySize >0? arraySize :
            throw invalid_argument("Array size must be greater than 0") ),
        ptr(new T[size])
    {
        for(size_t i=0;i<size;++i)
            ptr[i] = 0;
    }

    Array(const Array &arrayToCopy)
         :size(arrayToCopy.size),
        ptr(new T[size])
    {
        for (size_t i=0;i<size;++i)
            ptr[i] = arrayToCopy.ptr[i];
    }
    ~Array()
    {
        delete [] ptr;
    }
    size_t getSize() const
    {
        return size;
    }

    const Array &operator = (const Array &right)
    {
        if(&right != this)
        {
            if(size !=right.size)
            {
                delete []ptr;
                size = right.size;
                ptr=new T[size];
            }

            for(size_t i=0;i<size;++i)
                ptr[i]=right.ptr[i];
        }
        return *this;
    }
    bool operator == (const Array &right)const
    {
        if(size != right.size)
            return false;
        for(size_t i=0;i<size;++i)
            if(ptr[i]!=right.ptr[i])
            return false;

        return true;
    }

    bool operator!=(const Array &right) const
    {
        return !(*this == right);
    }

    T &operator[](int subscript)
    {
        if(subscript < 0||subscript >= size)
            throw out_of_range("Subscript out of range");
        return ptr[subscript];
    }
    T operator[](int subscript) const
    {
        if(subscript < 0||subscript >= size)
            throw out_of_range("Subscript out of range");
        return ptr[subscript];
    }
private:
    size_t size;
    T *ptr;

};

#endif // ARRAY_H_INCLUDED
