//Array.h

#ifndef ARRAY_H
#define ARRAY_H

#include<iostream>
#include<iomanip>
using namespace std;

template< typename T>
class Array
{
    friend ostream &operator<<(ostream &output,const Array<t>&a)
    {
        for(int i=0; i<a.asize; i++)
        {
            output<<setw(12)<<a.ptr[i];
                  if(i+1%4==0)
                      output<<endl;
        }
        if(a.asize%4!=0)
            output<<endl;
        return output;


    friend istream &operator>>(istream &input, Array &a)
    {
    for(size_t i = 0; i < a.size; ++i)
        input >> a.ptr[i];

        return input;
    }


public:
    Array(int s):asize(s>0? s:throw invalid_argument("Array size must greater than 0")),ptr(new t[asize])
    {
        for(int i=0; i<asize; i++)
        {
            ptr[i]=0;
        }
    }


Array(const Array<T> &arrayToCopy)
    :size(arrayToCopy.size),ptr(new T[size])
    {
            for (size_t i=0;i<size;++i)
            ptr[i]=arrayToCopy.ptr[i];
    }
~Array()
    {
        delete[]ptr;
    }

size_t getSize() const
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


 bool operator==(const Array &right)const//operator ==
    {
        if(size!=right.size)
            return false;
        for(size_t i=0;i<size;++i)
        if(ptr[i]!=right.ptr[i])
            return false;
        return true;
    }
    bool operator!=(const Array &right)const
    {
        return!(*this==right);
    }


T & operator[]( int subscript )
    {

        if( subscript < 0 || subscript >= size )
            throw out_of_range( "Subscript out of range" );
        return ptr[ subscript ];
    }


    T operator[] ( T subscript ) const
    {

        if( subscript < 0 || subscript >= size )
            throw out_of_range( "Subscript out of range" );
        return ptr[ subscript ];
    }

private:
    size_t size;
    T *ptr;
};
#endif
