#ifndef ARRAY_H_INCLUDED
#define ARRAY_H_INCLUDED

// Fig. 24.12: Array.h
// Array class definition with overloaded operators.
#include<iostream>
#include<iomanip>
#include<stdexcept>
using namespace std;
template< class T >
class Array
{
    friend istream &operator >> ( istream &input , Array &a )
    {
        for(size_t i=0;i<a.size;++i)
        {
            input>>a.ptr[i];
        }
        return input;
    }
        friend ostream &operator << ( ostream &output , const Array &a)
    {
        for(size_t i=0 ; i<a.size ; ++i )
        {
         output << a.ptr[ i ] ;
        }
        output << "\n" ;
        return output ;
    }
public:
    Array(int arraySize):

            ptr( new T [size] )

            {
                for( size_t i=0 ; i<size ; ++i )
                    ptr[i]=0;
            }
            Array( const Array &arrayToCopy )

            :size( arrayToCopy.size ),
            ptr(new T [size])
            {
                for(size_t i=0;i<size;++i)
                    ptr[i]=arrayToCopy.ptr[i];
            }
            size_t getSize() const
            {
                return size;
            }
            const Array &operator = (const Array &right)
            {

                if( &right != this )

                {
                 if( size != right.size )

                    {
                        delete [] ptr;
                       size = right.size;
                        ptr = new int [size];
                    }
                    for( size_t i=0 ; i<size ; ++i )
                        ptr[i] = right.ptr[i];

                }

                return *this;
            }
bool operator == ( const Array &right ) const
            {
                if( size != right.size )
                    return false;
                for( size_t i=0 ; i<size ; ++i )
                    if( ptr[i] != right.ptr[i] )
                       return false;

                return true;
            }
    bool operator != (const Array &right ) const
{
                return !(*this==right);
}
T &operator[](int subscript)

{
    if( subscript<0 || subscript >= size )

     cout<< "Subscript out of range";
    return ptr[subscript];

}
T operator[] ( int subscript )const

{
    if( subscript<0 || subscript>=size )

        cout << "Subscript out of range";

    return ptr[ subscript ];
}

private:
    size_t size;

    T *ptr;

};
#endif
