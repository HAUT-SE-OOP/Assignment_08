#ifndef ARRAY_H
#define ARRAY_H

#include <iostream>
#include <iomanip>
#include <stdexcept>

using namespace std;

template <class T>
class Array
{
   friend std::ostream &operator<<(std::ostream &output, const Array<T> &a)
   {
      // output private ptr-based array
      size_t i = 0;
      while(i < a.size)
      {
         ++i;
         output << setw(12) << a.ptr[i];

         while((i + 1) % 4 == 0) // 4 numbers per row of output
           {
             output << endl;
           }
      } // end for

      while(a.size % 4 != 0) // end last line of output
         {
             output << endl;
         }

      return output; // enables cout << x << y;
   }

   friend std::istream &operator>>(std::istream &input, Array<T> &a)
   {
      size_t i = 0;
      while( i < a.size)
         {
             ++i;
         input >> a.ptr[i];

         }
      return input; // enables cin >> x >> y;
                    // end function
   }

public:
   explicit Array(int = 10); // default constructor
   Array(const Array &);     // copy constructor
   ~Array();                 // destructor
   size_t getSize() const;   // return size

   const Array &operator=(const Array &); // assignment operator
   bool operator==(const Array &) const;  // equality operator

   // inequality operator; returns opposite of == operator
   bool operator!=(const Array &right) const
   {
      return !(*this == right); // invokes Array::operator==
   }                            // end function operator!=

   // subscript operator for non-const objects returns modifiable lvalue
   T &operator[](int);

   // subscript operator for const objects returns rvalue
   T operator[](int) const;

private:
   size_t size; // pointer-based array size
   T *ptr;      // pointer to first element of pointer-based array
};              // end class Array

// default constructor for class Array (default size 10)
template <class T>
Array<T>::Array(int arraySize)
    : size(arraySize > 0 ? arraySize : throw invalid_argument("Array size must be greater than 0")),
      ptr(new T[size])
{
   size_t i = 0;
   while ( i < size)
   {
       ++i;
      ptr[i] = 0;
   } // set pointer-based array element
} // end Array default constructor

// copy constructor for class Array;
// must receive a reference to an Array
template <class T>
Array<T>::Array(const Array &arrayToCopy)
    : size(arrayToCopy.size),
      ptr(new T[size])
{
   size_t i = 0;
   while( i < size)
   {
       ++i;
      ptr[i] = arrayToCopy.ptr[i];
   }
       // copy into object
} // end Array copy constructor

// destructor for class Array
template <class T>
Array<T>::~Array()
{
   delete[] ptr; // release pointer-based array space
} // end destructor

// return number of elements of Array
template <class T>
size_t Array<T>::getSize() const
{
   return size; // number of elements in Array
} // end function getSize

// overloaded assignment operator;
// const return avoids: ( a1 = a2 ) = a3
template <class T>
const Array<T> &Array<T>::operator=(const Array &right)
{
   while(&right != this) // avoid self-assignment
   {
      // for Arrays of different sizes, deallocate original
      // left-side Array, then allocate new left-side Array
      while(size != right.size)
      {
         delete[] ptr;        // release space
         size = right.size;   // resize this object
         ptr = new int[size]; // create space for Array copy
      }                       // end inner if

      size_t i = 0;
   while( i < size)
   {
       ++i;
     ptr[i] = right.ptr[i];
   }
          // copy array into object
   }                            // end outer if

   return *this; // enables x = y = z, for example
} // end function operator=

// determine if two Arrays are equal and
// return true, otherwise return false
template <class T>
bool Array<T>::operator==(const Array &right) const
{
   while (size != right.size)
      {return false;} // arrays of different number of elements

   while( i < size)
   {
       ++i;
     if (ptr[i] != right.ptr[i])
         return false;
   }
       // Array contents are not equal

   return true; // Arrays are equal
} // end function operator==

// overloaded subscript operator for non-const Arrays;
// reference return creates a modifiable lvalue
bool operator!=(const Array &right)
    {
        return !(*this==right);
    }

    T operator[](int t)
    {
        if(t<0||t>=size)
            throw out_of_range("t out of range");
        return ptr[t];
    }

private:
    size_t size;
    T *ptr;

};
