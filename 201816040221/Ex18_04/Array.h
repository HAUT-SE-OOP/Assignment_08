// Fig. 24.12: Array.h
// Array class definition with overloaded operators.
#ifndef ARRAY_H
#define ARRAY_H

#include <iostream>

class Array
{
   friend std::ostream &operator<<( std::ostream &, const Array & );
   friend std::istream &operator>>( std::istream &, Array & );

public:
   explicit Array( size_t = 10 ); // default constructor
   Array( const Array & ); // copy constructor
   Array( Array && ); // move constructor; should be noexcept
   ~Array(); // destructor
   size_t getSize() const; // return size

   Array &operator=( const Array & ); // copy assignment operator
   Array &operator=( Array && ); // move assignment operator
   bool operator==( const Array & ) const; // equality operator

   // inequality operator; returns opposite of == operator
   bool operator!=( const Array &right ) const
   {
      return ! ( *this == right ); // invokes Array::operator==
   } // end function operator!=

   // subscript operator for non-const objects returns modifiable lvalue
   int &operator[]( size_t );

   // subscript operator for const objects returns rvalue
   int operator[]( size_t ) const;
private:
   size_t size; // pointer-based array size
   int *ptr; // pointer to first element of pointer-based array
}; // end class Array

#endif


