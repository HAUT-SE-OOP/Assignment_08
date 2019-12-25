#ifndef ARRAY_H_INCLUDED
#define ARRAY_H_INCLUDED

#include <bits/stdc++.h>
using namespace std;

//Array function template
template <class T>
class Array//class Array
{
    //overload operator << by friend
    friend ostream &operator<<( ostream &output,const Array<T> &a )
    {
        //circle to output
        for(int i=0; i<a.sizet; ++i)
        {
            output << setw( 12 ) <<a.ptr[i];
            if((i+1)%4==0)
                output<<endl;
        }
        if( a.sizet%4!=0 )
            output<<endl;

        return output;
    }//end function
    //overload operator >> by friend
    friend istream &operator>>( istream &input, Array<T> &a )
    {
        //circle to input
        for(int i=0; i<a.sizet; ++i)
        {
            input >> a.ptr[i];
        }
        return input;
    }//end function

public:
    Array<T>( int sz )//constructor function
    {
        if( sz<0 )//judge if size<0
            throw invalid_argument( "the size must be >0" );
        else
        {
            sizet=sz;
            ptr=new T[sizet];
        }
    }//end function
    Array( const Array<T> &a )//copy constructor
    {
        sizet=a.sizet;
        ptr=new T[sizet];
        for(int i=0; i<sizet; ++i)
        {
            ptr[i]=a.ptr[i];
        }
    }//end function
    ~Array()//destructor function
    {
        delete[] ptr;
    }//end function
    size_t getSize()const//function to get size
    {
        return sizet;
    }//end function
    //overload the operator =
    const Array<T>& operator=( const Array<T> &right )
    {
        //avoid self-assignment
        if( &right!=this )
        {
            //judge if the sizes are equal
            if( sizet!=right.sizet )
            {
                delete[] ptr;
                sizet=right.sizet;
                ptr=new T[sizet];
            }
            for(int i=0; i<sizet; ++i)
            {
                ptr[i]=right.ptr[i];//copy array into object
            }
        }
        return *this;
    }//end function
    //overload operator == to determine if two Arrays ate equal
    bool operator==( const Array<T> &right )const
    {
        if( sizet!=right.sizet )
            return false;//Arrays are not equal
        for(int i=0; i<sizet; ++i)
        {
            if(ptr[i]!=right.ptr[i])
                return false;//Arrays are not equal
        }
        return true;//Arrays are equal
    }//end function
    //overload operator !=
    bool operator!=( const Array &right )const
    {
        return !(*this==right);
    }//end function
    //overload subscript operator for non-const Arrays
    //reference return creates a modifiable lvalue
    T&operator[]( int subscript )
    {
        //check if subscript out of range
        if(subscript<0||subscript>=sizet)
        {
            throw out_of_range( "Subscript out of the range" );
        }
        return ptr[subscript];//return copy of this element
    }
    //overload subscript operator for const Arrays
    //const reference return creates an rvalue
    T operator[]( int subscript )const
    {
        //check if subscript out of range
        if(subscript<0||subscript>=sizet)
        {
            throw out_of_range( "Subscript out of the range" );
        }
        return ptr[subscript];//return copy of this element
    }
private:
    T* ptr;
    size_t sizet;
};

#endif // ARRAY_H_INCLUDED
