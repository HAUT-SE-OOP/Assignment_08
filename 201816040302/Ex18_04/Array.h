
#ifndef ARRAY_H_INCLUDED

#define ARRAY_H_INCLUDED



#include <iomanip>
#include <array>
#include <iostream>
#include <string>

using namespace std;
template<class T>
class Array
{
    friend ostream &operator<<(ostream &output,const Array &a)
    {
        //output private ptr-based array
        for(size_t i=0;i<a.size;++i)
        {
            output<<setw(12)<<a.ptr[i];

            if((i+1)%4==0)//4 numbers pre row of output
                output<<endl;
        }
        if(a.size%4!=0)
            output<<endl;

        return output;
    }


    friend istream &operator>>(istream &input,Array &a)
    {
        for (size_t i=0;i<a.size;++i)
        {
            input>>a.ptr[i];
        }
        return input;
    }
public:
    explicit Array(int=6);
    Array( const Array<T1> &);
    ~Array()
    {
        delete [] ptr;
    }
    size_t getSize()const
    {
        return size;
    }
    const Array &operator=(const Array<T1> &right)
    {
        if(&right!=this)
        {
            if(size!=right.size)
            {
                delete [] ptr;
                size=right.size;
                ptr=new T1[size];
            }
            for(size_t i=0;i<size;++i)
            {
                ptr[i]=right.ptr[i];
            }
        }
        return *this;

    }
    bool operator==(const Array<T1> &right)const
    {
        if(size!=right.size)
            return false;
        if(ptr!=right.ptr)
            return false;
        return true;

    }
    bool operator!=(const Array<T1> &right)const
    {
        if(size!=right.size)
            return true;
        if(ptr!=right.ptr)
            return true;
        return false;
    }
    T1 &operator[](int subscript)
    {
        if(subscript<0||subscript>=size)
            throw std::out_of_range("Subscript out of range");
        return ptr[subscript];
    }
    T1 operator[](int subscript)const
    {
        if(subscript<0||subscript>=size)
            throw std::out_of_range("Subscript out of range");
        return ptr[subscript];
    }
private:
    size_t size;
    T *ptr;
};

template < typename T >
Array< T >::Array( int arraySize )
    : size( arraySize > 0 ? arraySize :
        throw invalid_argument( "Array size must be greater than 0" ) ),
      ptr( new T [ size ] )
{
    for ( size_t i = 0; i < getSize(); ++i )
        ptr[i] = 0;
}

template < typename T >
Array< T >::Array( const Array &arrayToCopy )
    : size( arrayToCopy.getSize() ),
      ptr( new T [ size ] )
{
    for ( size_t i = 0; i < getSize(); ++i )
        ptr[i] = arrayToCopy.ptr[i];
}
