// Fig. 10.10: Array.h
// Array class definition with overloaded operators.
#ifndef ARRAY_H
#define ARRAY_H

#include <iostream>
#include <iomanip>
#include <stdexcept>
using namespace std;
template <class T>
class Array
{
    friend ostream &operator<<(ostream &output, const Array &a)
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
    }                  // end function operator<<
    friend istream &operator>>(istream &input, Array &a)
    {
        for (size_t i = 0; i < a.size; ++i)
            input >> a.ptr[i];

        return input; // enables cin >> x >> y;
    }                 // end function

public:
    Array(int arraySize = 10)
        : size(arraySize > 0 ? arraySize : throw invalid_argument("Array size must be greater than 0")),
          ptr(new T[size])
    {
        for (size_t i = 0; i < size; ++i)
            ptr[i] = 0; // set pointer-based array element
    }                   // end Array default constructor

    Array(const Array &arrayToCopy)
        : size(arrayToCopy.size),
          ptr(new T[size])
    {
        for (size_t i = 0; i < size; ++i)
            ptr[i] = arrayToCopy.ptr[i]; // copy into object
    }                                    // end Array copy constructor

    ~Array()
    {
        delete[] ptr; // release pointer-based arraay space
    }                 // end destructor

    size_t getSize() const
    {
        return size; // number of elements in Array
    }                // end function getSize

    const Array &operator=(const Array &right)
    {
        if (&right != this) // avoid self-assignment
        {
            // for Arrays of different sizes, deallocate original
            // left-side Array, then allocate new left-side Array
            if (size != right.size)
            {
                delete[] ptr;      // release space
                size = right.size; // resize this object
                ptr = new T[size]; // create space for Array copy
            }                      // end inner if

            for (size_t i = 0; i < size; ++i)
                ptr[i] = right.ptr[i]; // copy array into object
        }                              // end outer if

        return *this; // enables x = y = z, for example
    }                 // end function operator=

    bool operator==(const Array &right) const
    {
        if (size != right.size)
            return false; // arrays of different number of elements

        for (size_t i = 0; i < size; ++i)
            if (ptr[i] != right.ptr[i])
                return false; // Array contents are not equal

        return true; // Arrays are equal
    }                // end function operator==

    // inequality operator; returns opposite of == operator
    bool operator!=(const Array &right) const
    {
        return !(*this == right); // invokes Array::operator==
    }                             // end function operator!=

    // subscript operator for non-const objects returns modifiable lvalue
    T &operator[](int subscript)
    {
        // check for subscript out-of-range error
        if (subscript < 0 || subscript >= size)
            throw out_of_range("Subscript out of range");

        return ptr[subscript]; // reference return
    }                          // end function operator[]

    // subscript operator for const objects returns rvalue
    T operator[](int subscript) const
    {
        // check for subscript out-of-range error
        if (subscript < 0 || subscript >= size)
            throw out_of_range("Subscript out of range");

        return ptr[subscript]; // returns copy of this element
    }                          // end function operator[]
private:
    size_t size; // pointer-based array size
    T *ptr;      // pointer to first element of pointer-based array
};               // end class Array

#endif
