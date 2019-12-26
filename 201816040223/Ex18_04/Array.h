
#ifndef ARRAY_H
#define ARRAY_H
#include <iostream>
#include <iomanip>
#include <stdexcept>
using namespace std;
template <class T>
using namespace std;
class Array
{
   friend ostream &operator<<(ostream &output, const Array<T> &a)
   {
      // output private ptr-based array
      for (size_t i = 0; i < a.size; ++i)
      {
         output << setw(12) << a.ptr[i];
         if ((i + 1) % 4 == 0) // 4 numbers per row of output
            output << endl;
      } // end for
      if (a.size % 4 != 0) // end last line of output
         output << endl;
      return output; // enables cout << x << y;
   }
friend istream &operator>>(istream &input, Array<T> &a)
   {
      for (size_t i = 0; i < a.size; ++i)
         input >> a.ptr[i]
      return input; // enables cin >> x >> y;
                    // end functio
   }
public:
   explicit Array(int = 10); // default constructor

   bool operator!=(const Array<T> &right) const
   {
      return !(*this == right); // invokes Array::operator==
   }                            // end function operator!=
 Array( const Array<T> &);
~Array()
{
   delete[] ptr; // release pointer-based array space
} // end destructor
// return number of elements of Array

getSize() const
{
   return size; // number of elements in Array
} // end function getSize

Array &operator=(const Array<T> &right)
{
   if (&right != this) // avoid self-assignment
   {
      // for Arrays of different sizes, deallocate original
      // left-side Array, then allocate new left-side Array
      if (size != right.size)
      {
         delete[] ptr;        // release space
         size = right.size;   // resize this object
         ptr = new int[size]; // create space for Array copy
      }                       // end inner if

    for (size_t i = 0; i < size; ++i)
         ptr[i] = right.ptr[i]; // copy array into object
   }                            // end outer if
   return *this; // enables x = y = z, for example
} // end function operator=
// determine if two Arrays are equal and
// return true, otherwise return false
bool operator==(const Array<T> &right) const
{
   if (size != right.size)
      return false; // arrays of different number of elements
   for (size_t i = 0; i < size; ++i)
      if (ptr[i] != right.ptr[i])
         return false; // Array contents are not equal
   return true; // Arrays are equal
} // end function operator==

T &operator[](int subscript)
{
   // check for subscript out-of-range error
   if (subscript < 0 || subscript >= size)
      throw out_of_range("Subscript out of range");
   return ptr[subscript]; // reference return
} // end function operator[]

// overloaded subscript operator for const Arrays
// const reference return creates an rvalue
T operator[](int subscript) const
{
   // check for subscript out-of-range error
   if (subscript < 0 || subscript >= size)
      throw out_of_range("Subscript out of range");
   return ptr[subscript]; // returns copy of this element
} // end function operator[]
private:
    T *ptr;
    size_t size;
};
template <typename T>
Array<T>::Array(T arraySize)
    :size(arraySize >0 ? arraySize :
        throw invalid_argument("Array size must be greater than 0")),ptr(new T[size])
{
   for(size_t i=0;i<size;++i)
     ptr[i]=0;
}
template <typename T>
Array<T>::Array(const Array &arrayToCopy)
    :size(arrayToCopy.size),ptr(new T[size])
{
    for(size_t i=0 ;i<size ;++i)
    ptr[i]=arrayToCopy.ptr[i];
}
