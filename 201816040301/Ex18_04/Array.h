#ifndef ARRAY_H_INCLUDED
#define ARRAY_H_INCLUDED
#include <iostream>

using namespace std;

template < class T >
class Array
{
    friend ostream &operator<<( ostream &output, const Array & )
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
     bool operator==(const Array &right)const
    {
        if(size!=right.size )
            return false;

        for(size_t i=0; i<size;++i)
            if(ptr[i]!=right.ptr[i])
            return false;

        return true;
    }

    bool operator!=(const Array &right) const
    {
        return !(*this==right);
    }

    T &operator[](int subscript)
    {
        if(subscript<0||subscript>=size)
            throw out_of_range("Subscript out of range");

        return ptr[subscript];
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





