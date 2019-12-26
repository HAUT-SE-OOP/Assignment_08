#ifndef ARRAY_H
#define ARRAY_H

#include <bits/stdc++.h>
#include <iomanip>
#include <stdexcept>
using namespace std;
template<class T>
class Array
{
 friend ostream &operator<<( ostream &output, const Array<T> &a )
    {
      for ( size_t i = 0; i < a.size; ++i )
        {
        output << setw( 12 ) << a.ptr[ i ];
        if ( ( i + 1 ) % 4 == 0 )
                output << endl;
                }
        if ( a.size % 4 != 0 )
            output << endl;
      return output;
    }
    friend istream &operator>>( istream &input, Array<T> &a )
    {
        for ( size_t i = 0; i < a.size; ++i )
            input >> a.ptr[ i ];
  return input;
    }
public:


    explicit Array<T>( T arraySize = 10 )
    :size(arraySize),ptr( new T[ size ] )
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
    T *ptr; // pointer to first element of pointer-based array
}; // end class Array
template<class T>
Array<T>::Array( const Array &arrayToCopy )
    : size( arrayToCopy.size ),
      ptr( new T[ size ] )
{
    for ( size_t i = 0; i < size; ++i )
        ptr[ i ] = arrayToCopy.ptr[ i ]; // copy into object
} // end Array copy constructor
template<class T>
Array<T>::~Array()
{
    delete [] ptr; // release pointer-based array space
} // end destructor
template<class T>
size_t Array<T>::getSize() const
{
    return size; // number of elements in Array
} // end function getSize
template<class T>
const Array<T>&Array<T>::operator=( const Array &right )
{
    if ( &right != this ) // avoid self-assignment
    {
        if ( size != right.size )
        {
            delete [] ptr; // release space
            size = right.size; // resize this object
            ptr = new T[ size ]; // create space for Array copy
        } // end inner if
       for ( size_t i = 0; i < size; ++i )
            ptr[ i ] = right.ptr[ i ]; // copy array into object
    } // end outer if

    return *this; // enables x = y = z, for example
} // end function operator=
template<class T>
bool Array<T>::operator==( const Array &right ) const
{
    if ( size != right.size )
        return false; // arrays of different number of elements
    for ( size_t i = 0; i < size; ++i )
        if ( ptr[ i ] != right.ptr[ i ] )
            return false; // Array contents are not equal
            return true; // Arrays are equal
} // end function operator==
template<class T>
T &Array<T>::operator[]( int subscript )
{

    return ptr[ subscript ]; // reference return
} // end function operator[]

// overloaded subscript operator for const Arrays
// const reference return creates an rvalue
template<class T>
T Array<T>::operator[]( int subscript ) const
{
    return ptr[ subscript ]; // returns copy of this element
} // end function operator[]

#endif
