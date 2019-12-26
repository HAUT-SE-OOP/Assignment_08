// Exercise 18.4 Solution:Array.h
#ifndef ARRAY_H
#define ARRAY_H

#include<iostream>

using namespace std;
template <class T>
class Array
{
    template <class U>
    friend ostream &operator<<(ostream &,const Array<U> &);
    template <class U>
    friend istream &operator>>(istream &,Array<U> &);

public:
    explicit Array( int = 10);//default constructor
    Array( const Array<T> &);//copy constructor
    ~Array();//destructor
    void setSize( int );
    size_t getSize() const;// return size;
    const Array &operator=(const Array<T> &);//assignment operator
    bool operator==(const Array<T> &)const;//equality operator

    //inequality operator;returns opposite of == operator
    bool operator!=(const Array<T> &right) const
    {
        return !(*this == right);//invokes Array::operator==
    }

    //subscript operator for non-const objects returns modifiable rvalue
    T &operator[]( int );
    //subscript operator for const objects returns rvalue
    T operator[]( int ) const;
private:
    int size;
    T* ptr;
};
//default constructor for class Array(default size 10)
template <class T>
Array<T>::Array( int arraySize)
    //:size(arraySize),
    //ptr( new T[size])
{
    setSize(arraySize);
    ptr=new T[size];
    for(int i = 0; i < size; ++i)
        ptr[i]=0;//set pointer-based array element
}
template <class T>
Array<T>::Array(const Array<T> &arrayToCopy)
    :size(arrayToCopy.size),
    ptr( new T [size])
{
    for(int i = 0;i < size; ++i)
        ptr[i]=arrayToCopy.ptr[i];//copy into object
}

//destructor for class Array
template <class T>
Array<T>::~Array()
{
    delete [] ptr;//release pointer-based array space
}
template <class T>
void Array<T>::setSize( int arraySize)
{
    size=arraySize > 0?arraySize:throw invalid_argument("Array size must be greater than 0");
}
//return number of elements of Array
template <class T>
size_t Array<T>::getSize()const
{
    return size;//number of elements in Array
}

//overloaded assignment operator;
//const return avoids;(a1 = a2)=a3
template <class T>
const Array<T> &Array<T>::operator=(const Array<T> &right)
{
    if(&right != this)//avoid self-assignment
    {
        if(size !=right.size)
        {
            delete [] ptr;//release space
            size = right.size;//resize this object
            ptr = new T[size];//create space for Array copy
        }

        for(int i=0;i<size; ++i)
            ptr[i]=right.ptr[i];//copy array into object
    }
    return *this;
}

//determine if two Array are equal and
//return true,otherwise return false
template <class T>
bool Array<T>::operator==(const Array<T> &right)const
{
    if(size != right.size)
        return false;//arrays of different number of elements

    for( int i=0; i<size; ++i)
        if(ptr[i] != right.ptr[i])
            return false;//Array content are not equal
    return true;// Arrays are equal
}

//overloaded subscript operator for non-const Array;
//reference return creates a modifiable lvalue
template <class T>
T &Array<T>::operator[]( int subscript)
{
    //check for subscript out-of-range error
    if(subscript<0||subscript >= size)
        throw out_of_range("Subscript out of range");
    return ptr[ subscript ];//returns copy of this element
}
//overloaded subscript operator for const Array;
//const reference return creates a  rvalue
template <class T>
T Array<T>::operator[](int subscript) const
{
    if(subscript<0||subscript >= size)
        throw out_of_range("Subscript out of range");

    return ptr[ subscript ];//returns copy of this element
}
//overloaded input operator for class Array;
//inputs values for entire Array
template <class T>
istream &operator>>(istream &input,Array<T> &a)
{
    for(int i=0; i< a.size; ++i)
        input >> a.ptr[i];

    return input;
}

//overloaded output operator for class Array;
template <class T>
ostream &operator<<(ostream &output, const Array <T>&a)
{
    //output private ptr-based array
    for(int i=0; i<a.size; ++i)
    {
        output << setw(12) <<a.ptr[i];

        if( ( i+1) %4 == 0)//4 number per row of output
            output << endl;
    }
    if(a.size % 4!=0)//end last line of output
        output << endl;
    return output;//enable cout << x <<y;
}

#endif // ARRAY_H
