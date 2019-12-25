#ifndef ARRAY_H_INCLUDED
#define ARRAY_H_INCLUDED
#include<iostream>

using namespace sd;

template< class T >
class Array
{
    friend ostream &operator<<(ostream &output, Array &a)
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
    
    friend istream &operator>>(istream &input, Array &a)
    {
        for( size_t i = 0; i < a.size; ++i )
            input >> a.ptr[i];
        return input;
    }

private:
    T* ptr;
    size_t sizet;

public:
    Array<T>( int sizee )
    {
        if( sizee<0 )
            throw invalid_argument( "Size must be bigger than 0" );
        else
        {
            sizet=sizee;
            ptr=new T[sizet];
        }
    }
    Array( const Array<T> &a )
    {
        sizet=a.sizet;
        ptr=new T[sizet];
        for(int i=0; i<sizet; i++)
        {
            ptr[i]=a.ptr[i];
        }
    }

     ~Array<T>()
    {
        delete []ptr ;
    }
    
    size_t getSize()
    {
        return sizet;
    }
    
    Array &operator=(Array<T> &r)
    {
        if( &r != this )
        {
            if(sizet != r.sizet)
            {
                delete []ptr;
                sizet = r.sizet;
                ptr = new int[sizet];
            }
        for(size_t i=0 ; i<sizet ; i++)
            ptr[i]=r.ptr[i];
    }
        return *this;
    }
    
    bool operator==(Array<T> &r)
    {
        if(sizet!=right.sizet)
            return false;
        for(size_t i=0 ; i<sizet ; i++)
        {
            if(ptr[i]!=r.ptr[i])
                return false;
        }
        return true;
    }
    
    bool operator!=( Array<T> &r)
    {
        return !(*this == r);
    }
    
    T &operator[](int subscript)
    {
        if( subscript < 0 || subscript > = sizet)
            throw out_of_range("Subscript out of range");

        return ptr[subscript];
    }
    
    T operator[](int subscript)
    {
        if( subscript < 0 || subscript >= sizet)
        throw out_of_range("Subscript out of range");

        return ptr[subscript];
    }
};
#endif // ARRAY_H_INCLUDED
