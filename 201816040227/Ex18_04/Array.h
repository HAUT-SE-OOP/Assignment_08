#ifndef ARRAY_H_INCLUDED
#define ARRAY_H_INCLUDED


#include <iostream>
using namespace std;

template <typename T>
class Array
{
    friend ostream &operator<<(ostream &output, const Array<T> &a )
    {
     for (size_t i=0; i<a.size; ++i)
     {
         output << setw(12)<< a.ptr[i];
         if ((i+1)%4 == 0)
            output << endl;
     }
        if (a.size%4 !=0 )
            output << endl;

         return output;
    }


    friend istream &operator>>(istream &input, Array<T> &a)
   {
     for (size_t i=0; i<a.size; ++i)
        input >>a.ptr[i];

     return input;
   }

public:
    explicit Array<T>(T = 10);//default constructor

    Array<T>(const Array<T>&); //copy constructor
    ~Array<T>();
    size_t getSize() const;//return size

    const Array<T> &operator=(const Array<T> &);//assignment operator
    //Array &operator()(const Array<T> &);//equality operator
    bool operator==(const Array<T> &) const;
    bool operator!=( const Array<T> &right ) const
    {
        return !( *this == right);
    }

    T &operator[](int);//subscript operator for non-const objects returns modifiable lvalue
    T operator[]( int) const;//subscript operator for const objects returns rvalue


private:
    size_t size;//pointer-based array size
    T *ptr;//pointer to first element of pointer-based array
    //int rc;

};//end class DoubleSubscriptedArray

// default constructor for class DoubleSubscriptedArray
template<typename T>
Array<T>::Array( T arraySize )
      : size(arraySize > 0 ? arraySize :
             throw invalid_argument ("Array size must be greater than 0")),
        ptr ( new T [size])
{
    for (size_t i=0; i<size; ++i)
        ptr[i]=0;
}//end Array default constructor

//copy constructor for class Array
template<typename T>
Array<T>::Array(const Array &arrayToCopy)
      :size(arrayToCopy.size),
        ptr( new T[ size])
 {
     for (size_t i=0; i<size; ++i)
        ptr[i]=arrayToCopy.ptr[i];
 }

 //destructor for class Array
 template<typename T>
 Array<T>::~Array()
 {
     delete[]ptr;
 }

 template<typename T>
 size_t Array<T>::getSize() const
 {
     return size ;
 }

 //overloaded assignment operator;

 template<typename T>
 const Array<T>& Array<T> ::operator=( const Array &right)
 {
     if (&right != this )
     {
         if(size!= right.size)
         {
             delete []ptr;
             size = right.size;
             ptr=new T[size];
         }
         for(size_t i=0; i < size; ++i)
            ptr[i]=right.ptr[i];
     }
     return *this;
 }

 //determine if two DoubleSubscriptedArrays are equal
 template<typename T>
 bool Array<T>::operator==(const Array<T> &right) const
 {
     if ( size !=right.size)
        return false;
     for( size_t i=0;i<size; ++i)
        if( ptr[i]!=right.ptr[i])
           return false;
     return true;
 }

template<typename T>
 T &Array<T>::operator[](int subscript)
 {
    if ( subscript< 0 || subscript >=size)
        throw out_of_range( "subscript out of range");
     return ptr[ subscript ];
 }//end function operator

 template<typename T>
 T Array<T>::operator[](int subscript) const
 {
    if ( subscript< 0 || subscript >=size)
        throw out_of_range( "subscript out of range");
     return ptr[ subscript ];
 }//end function operator



#endif // ARRAY_H_INCLUDED
