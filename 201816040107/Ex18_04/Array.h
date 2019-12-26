#ifndef ARRAY_H_INCLUDED
#define ARRAY_H_INCLUDED
#include <iostream>
#include <iomanip>
#include <stdexcept>
using namespace std;
template <class T>
class Array
{
     friend ostream &operator<<(ostream &output,const Array &a)
{
    for(size_t i=0;i<a.size;++i)
    {
        output<<setw(12)<<a.ptr[i];
        if((i+1)%4==0)
            output<<endl;
    }
    if(a.size%4 !=0)
        output<<endl;
    return output;
}

    friend istream &operator>>(istream &input,Array &a)
{
    for(size_t i=0;i<a.size;++i)
    {
        input>>a.ptr[i];

    }
    return input;
}
public:
    explicit Array(T=10);//声明构造函数；
    Array(const Array &);
    ~Array();
    size_t getSize() const;
    const Array &operator=(const Array &);
    bool operator==(const Array &) const;//重载==；
    bool operator!=(const Array &right) const//重载！=；
    {
        return !(*this==right);
    }
    T &operator[](int);
    T operator[]( int ) const;
private:
    size_t size;
    T *ptr;

};
template <class T>
Array<T>::Array(T arraySize)
:size(arraySize>0 ?arraySize : throw invalid_argument("Array must be greater than 0")),
ptr(new T[ size ])
{
    for(size_t i=0;i<size;++i)
        ptr[i]=10;
}
template <class T>
Array<T>::Array(const Array &arrayTocopy)
:size(arrayTocopy.size),
ptr(new int[size])
{
    for(size_t i=0;i<size;++i)
    {
        ptr[i]=arrayTocopy.ptr[i];
    }
}
template <class T>
Array<T>::~Array()
{
    delete [] ptr;
}
template <class T>
size_t Array<T>::getSize() const
{
    return size;
}
template< typename T >
const Array<T> &Array<T>::operator=(const Array &right)
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


template <class T>
T &Array<T>::operator[](int subscript)
{
    if(subscript<0 || subscript >=size)
        throw out_of_range("Subscript out of range");
    return ptr[subscript];
}
template< typename T >
bool Array<T>::operator==(const Array &right) const
{
    if ( size != right.size )
        return false;

    for( size_t i = 0; i < size; ++i )
        if( ptr[i] != right.ptr[i] )
            return false;

    return true;
}


#endif // ARRAY_H_INCLUDED
