
#ifndef ARRAY_H
#define ARRAY_H
#include <iostream>
#include <iomanip>
#include <stdexcept>
using namespace std;
template <class T>
class Array{

    friend ostream &operator << ( ostream &output , const Array &a )
    {
        for (int i = 0 ; i < a.size ; ++i)
        {
            output << setw( 12 ) << a.list[ i ];
            if ( ( i + 1 ) % 4 == 0 )
                output << endl;
        }
        if ( a.size % 4 != 0 )
            output << endl;
        return output;
    }

    friend istream &operator >> ( istream &input , Array &a )
    {
        for ( int i = 0 ; i < a.size ; ++i )
            input >> a.list[ i ];
        return input;
    }
public:
    explicit Array(int sz=10);
    Array(const Array<T>&a);
    ~Array();
    const Array<T>&operator = (const Array<T> &rhs);
    bool operator==( const Array<T> & a) const
    {
    if (size != a.size)
        return false;
    for ( int i = 0 ; i < size ; ++i )
        if ( list[i] != a.list[i] )
         return false;

    return true;
    }
    T &operator[](int i);
    T operator[](int) const;

    operator T*();
    operator const T*()const;
    int getsize()const;
    void resize(int sz);

private:
    T* list;
    int size;
};
template <class T>
Array<T>::Array(int sz){

    size=sz;
    list = new T[size];
}
template<class T>
Array<T>::~Array(){
    delete[]list;
}

template<class T>
Array<T>::Array(const Array<T>&a)
{
    size=a.size;
    list = new T[size];
    for(int i=0;i<size;i++)
    {
        list[i]=a.list[i];
    }
}
template <class T>
const Array<T> &Array<T>::operator = (const Array<T> &rhs)
{
    if(&rhs != this)
    {
        if(size!=rhs.size)
        {
            delete[]list;
            size=rhs.size;
            list=new T[size];
        }
        for(int i=0;i<size;i++)
        {
            list[i]=rhs.list[i];
        }
    }
    return *this;
}

template <class T>
T &Array<T>::operator[](int n)
{

    return list[n];
}

template <class T>
T Array<T>::operator[](int subscript) const
{
    if(subscript < 0 || subscript >= size)
        throw out_of_range("Subscript out of range");

    return list[subscript];
}

template<class T>
Array<T>::operator T*()
{
    return list;
}
template <class T>
Array<T>::operator const T*()const
{
    return list;
}

template<class T>
int Array<T>::getsize()const
{
    return size;
}
template<class T>
void Array<T>::resize(int sz)
{

    if(sz==size)
    {
        return;
    }
    T* newlist = new T[size];
    int n=(sz<size)?sz:size;
    for(int i=0;i<n;i++)
    {
        newlist[i]=list[i];
    }
    delete[]list;
    list=newlist;
    size=sz;
}
#endif // ARRAY_H

