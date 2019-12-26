#ifndef ARRAY_H
#define ARRAY_H
#include <iomanip>
#include <iostream>
#include <array>
using namespace std;

template<class T>
class Array
{
    friend ostream &operator<<( ostream &output, const Array<T> &a )
    {
        for ( size_t i = 0; i < a.size; ++i )
        {
            output<<setw(12)<<a.ptr[i];
            if((i+1)%4==0)
                output<<endl;
        }
       if(a.size%4 !=0)
        output<<endl;
        return output;
    }
    friend istream &operator>>( istream &input, Array<T> &a )
    {
        for ( size_t i = 0; i < a.size; ++i )
            input >> a.ptr[ i ];
        return input;
    }

public:
    explicit Array<T>( T arraySize=10 )
    :size(arraySize),
    ptr( new T[ size ] )
    {
        for ( size_t i = 0; i < size; ++i )
            ptr[ i ] = 0;
    }
    Array<T>( const Array<T> & );
    ~Array<T>();
    size_t getSize() const;

    const Array<T> &operator=( const Array<T> & );
    bool operator==( const Array<T> & ) const;

    bool operator!=( const Array<T> &right ) const
    {
        return ! ( *this == right );
    }
    T &operator[]( int );


    T operator[]( int ) const;
private:
    size_t size;
    T *ptr;
};



template<class T>
Array<T>::Array( const Array &arrayToCopy )
    : size( arrayToCopy.size ),
      ptr( new T[ size ] )
{
    for ( size_t i = 0; i < size; ++i )
        ptr[ i ] = arrayToCopy.ptr[ i ];
}


template<class T>
Array<T>::~Array()
{
    delete [] ptr;
}


template<class T>
size_t Array<T>::getSize() const
{
    return size;
}

template<class T>
const Array<T>&Array<T>::operator=( const Array &right )
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

template<class T>
bool Array<T>::operator==( const Array &right ) const
{
    if ( size != right.size )
        return false; // arrays of different number of elements

    for ( size_t i = 0; i < size; ++i )
        if ( ptr[ i ] != right.ptr[ i ] )
            return false; // Array contents are not equal

    return true; // Arrays are equal
}

template<class T>
T &Array<T>::operator[]( int subscript )
{
    if(subscript<0 || subscript >=size)
        throw out_of_range("Subscript out of range");
    return ptr[ subscript ];
}

template<class T>
T Array<T>::operator[]( int subscript ) const
{
    if(subscript<0 || subscript >=size)
        throw out_of_range("Subscript out of range");
    return ptr[ subscript ];
}
#endif

