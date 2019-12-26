#ifndef ARRAY_H_INCLUDED
#define ARRAY_H_INCLUDED

#include <iostream>
using namespace std;

template <typename T>
class Array
{
    friend ostream &operator<<( ostream &output, const Array<T> &a )
    {
        for( size_t i = 0; i < a.size; ++i )
        {
            output << setw(12) << a.ptr[i];
            if( (i+1)%4 == 0 )
                output << endl;
        }//end for

        if( a.size % 4 != 0 )
            output << endl;

        return output;
    }//end function operator<<

    friend istream &operator>>( istream &input, Array<T> &a )
    {
        for( size_t i = 0; i< a.size; ++i)
        {
            input >> a.ptr[i];
        }
        return input;
    }//end function operator>>
public:
    explicit Array( T arraySize ) //default constructor
    : size(arraySize > 0 ? arraySize : throw invalid_argument("Array size must be greater than 0")),
    ptr(new T[size])
    {
        for(size_t i = 0; i<size; ++i)
            ptr[i]=0;
    }

    Array( const Array &arrayToCopy )//copy constructor
    : size(arrayToCopy.size), ptr(new T[size])
    {
        for( size_t i=0; i < size; ++i )
            ptr[i] = arrayToCopy.ptr[i];
    }

    ~Array() // destructor
    {
        delete []ptr;
    }

    size_t getSize() const
    {
        return size;
    }

    const Array &operator=( const Array &right )// assignment operator
    {
        if(&right != this)
        {
            if(size != right.size)
            {
                delete []ptr;
                size = right.size;
                ptr = new T[size];
            }

            for(size_t i=0; i<size; ++i)
                ptr[i] = right.ptr[i];
        }

        return *this;
    }
    bool operator==(const Array &right) const //equality operator
    {
        if(size != right.size)
            return false;

        for( size_t i=0; i < size; ++i)
            if(ptr[i] != right.ptr[i])
            return false;

        return true;
    }

    bool operator!=( const Array &right ) const
    {
        return !( *this == right );
    }//end function operator!=

    T &operator[]( T subscript)
    {
        if(subscript < 0 || subscript >= size)
            throw out_of_range("Subscript out of range");

        return ptr[ subscript ];
    }

    T operator[]( T subscript) const
    {
        if( subscript < 0||subscript >= size)
            throw out_of_range("Subscript out of range");

        return ptr[ subscript ];
    }
private:
    size_t size; // pointer-based array size
    T *ptr; //pointer to first element of pointer-based array
};//end class Array

#endif // ARRAY_H_INCLUDED
