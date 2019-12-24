#ifndef ARRAY_H_INCLUDED
#define ARRAY_H_INCLUDED

#include<iostream>
using namespace std;
#include<excpt.h>
#include<iomanip>
#include<stdexcept>
template<class T>
class Array
{
    friend::ostream &operator<<(ostream &output,Array<T> &a)
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
    friend::istream &operator>>(istream &input,Array<T> &a)
    {
        for(size_t i=0;i<a.size;++i)
            input>>a.ptr[i];
        return input;
    }
public:
    explicit Array(int arraysize=10)
                    :size(arraysize>0?arraysize:throw invalid_argument("Array size must be greater  than 0"))
                    ,ptr(new T[size])
    {
        for(size_t i=0;i<size;i++)
            ptr[i]=0;
    }
    Array(Array &arrayToCopy)
            :size(arrayToCopy.size),ptr(new T[size])
    {
        for(size_t i=0;i<size;++i)
            ptr[i]=arrayToCopy.ptr[i];
    }
    ~Array()
    {
        delete []ptr;
    }
    size_t getSize()
    {
        return size;
    }
    Array<T> &operator=(const Array &right)
    {
        if(&right!=this)
        {
            if(size!=right.size)
            {
                delete []ptr;
                size=right.size;
                ptr=new int[size];
            }
            for(size_t i=0;i<size;i++)
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
        return !(*this==right);
    }
    T &operator[](int subscript)
    {
        if(subscript<0||subscript>=size)
        throw out_of_range("Subscript out of range");
        return ptr[subscript];
    }
    T operator[](int subscript)const
    {
        if(subscript<0||subscript>=size)
            throw out_of_range("Subscript out of range");
        return ptr[subscript];
    }
private:
    size_t size;
    T *ptr;
};

#endif // ARRAY_H_INCLUDED
