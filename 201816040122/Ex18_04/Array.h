#ifndef ARRAY_H_INCLUDED
#define ARRAY_H_INCLUDED

#include<iostream>
#include<iomanip>
#include<stdexcept>
using namespace std;
template< class T >
class Array
{
    friend istream &operator >> ( istream &input , Array &a )
    {
        for (size_t i=0;i<a.size;++i)
        {
            input>>a.Tptr[i];
        }
        return input;
    }
        friend ostream &operator << ( ostream &output , const Array &a)
    {
        for(size_t i=0;i<a.size;++i)
        {
            output<<setw(12)<<a.Tptr[i];

            if((i+1)%4==0)//4 numbers pre row of output
                output<<endl;
        }
        if(a.size%4!=0)
            output<<endl;

        return output;
    }
public:
        Array(int Size)
        :size(Size>0?Size:throw invalid_argument("Array size must be greater than 0")),
            Tptr( new T [size] )
            {
                for( size_t i=0 ; i<size ; ++i )
                    Tptr[i]=0;
            }
            Array( const Array &arrayToCopy )
            :size( arrayToCopy.size ),
            Tptr(new T [size])
            {
                for(size_t i=0;i<size;++i)
                    Tptr[i]=arrayToCopy.Tptr[i];
            }
            size_t getSize() const
            {
                return size;
            }
            const Array &operator = (const Array &right)
            {
                if( &right != this )
                {
                    if( this->size != right.size )
                    {
                        delete [] Tptr;
                        size = right.size;
                        this->Tptr = new int [size];
                    }
                    for( size_t i=0 ; i<size ; ++i )
                        this->Tptr[i] = right.Tptr[i];
                }
                return *this;
            }
            bool operator == ( const Array &right ) const
            {
                int flag=0;
                if( this->size != right.size )
                    return false;
                for( int i=0 ; i<size ; ++i )
                    {
                    if( this->Tptr[i] != right.Tptr[i] )
                    flag=1;
                    }
                if(flag==1)
                    return false;
                else if(flag==0)
                   return true;
            }
            bool operator != (const Array &right ) const
            {
               int flag=0;
                if( this->size != right.size )
                    return true;
                for( int i=0 ; i<size ; ++i )
                    {
                    if( this->Tptr[i] != right.Tptr[i] )
                    flag=1;
                    }
                if(flag==1)
                    return true;
                else if(flag==0)
                   return false;
            }
            T &operator[](int subscript)
            {
                if( subscript<0 || subscript >= size )
                    cout<< "Subscript out of range";
                 return Tptr[subscript];
            }
            T operator[] ( int subscript )const
            {
                if( subscript<0 || subscript>=size )
                    cout << "Subscript out of range";
                return Tptr[ subscript ];
            }
private:
    size_t size;
    T *Tptr;


};

#endif // ARRAY_H_INCLUDED
