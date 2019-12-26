#ifndef ARRAY_H
#define ARRAY_H

#include<iostream>
#include<stdexcept>
#include<iomanip>
using namespace std;

//类模版声明
template< typename T>
class Array
{
    //友元函数<<
    friend ostream &operator<<(ostream &output, const Array &a)
    {
        for(size_t i = 0; i < a.size; ++i )
        {
            output << setw( 12 ) << a.ptr[i];
            if( ( i + 1 ) % 4 == 0 )
                output << endl;
        }
        if( a.size % 4 != 0 )
            output << endl;
        return output;
    }

    //友元函数>>
    friend istream &operator>>(istream &input, Array &a)
    {
        for( size_t i = 0; i < a.size; ++i )
            input >> a.ptr[i];

        return input;
    }

public:
    //默认构造函数
    explicit Array(T arraySize= 10):size(arraySize > 0 ? arraySize :
          throw invalid_argument("Array size must be greater than 0")),
    ptr(new T[size])
    {
        for(size_t i = 0; i < size; ++i)
            ptr[i] = 0;
    }
    Array(const Array &arrayToCopy):size( arrayToCopy.size ),
    ptr( new int[size] )
    {
        for(size_t i = 0; i < size; ++i)
            ptr[i] = arrayToCopy[size];
    }
    ~Array()
    {
        delete []ptr;
    }
    size_t getSize() const
    {
        return size;
    }

    //=号运算符
    const Array &operator=(const Array &right)
    {
        if( &right != this)
        {
            if( size != right.size)
            {
                delete [] ptr;
                size = right.size;
                ptr = new T[size];
            }

            for(size_t i = 0; i < size; ++i)
                ptr[i] = right.ptr[i];
        }
        return *this;
    }
    //==运算符
    bool operator==(const Array &right) const
    {
        if ( size != right.size )
            return false;

        for( size_t i = 0; i < size; ++i )
            if( ptr[i] != right.ptr[i] )
                return false;

        return true;
    }
    // !=运算符
    bool operator!=(const Array &right) const
    {
        return ! ( *this == right);
    }

    T &operator[]( int);
    T operator[]( int ) const;
private:
    size_t size;
    T *ptr;
};


template< typename T >
T &Array<T>::operator[]( int subscript )
{
    if( subscript < 0 || subscript >= size)
        throw out_of_range( "Subscript out of range" );

    return ptr[subscript];
}


#endif // ARRAY_H
