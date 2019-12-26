#include <iostream>
#include <iomanip>
#include <stdexcept>
using namespace std;
template <typename T>
class Array
{
    //overload input operator
    friend istream &operator>>(istream &input, Array<T> &a)
    {
        for (size_t i = 0; i < a.size; ++i)
            input >> a.ptr[i];
        return input;
    } // end function

    //overload output operator
    friend ostream &operator<<(ostream &output, const Array<T> &a)
    {
        // output private ptr-based array
        for (size_t i = 0; i < a.size; ++i)
        {
            output << setw(4) << a.ptr[i];
        } //end for
        cout << endl;
        return output;
    }

public:
    //default constructor
    Array(int arraySize)
        : size(arraySize > 0 ? arraySize : throw invalid_argument(" Array size must be greater than 0")),
          ptr(new T[size])
    {
        for (size_t i = 0; i < size; ++i)
            ptr[i] = 0; //set pointer-based array element
    }                   //end Array default constructor

    //copy constructor
    Array(const Array<T> &arrayToCopy)
        : size(arrayToCopy.size), ptr(new T[size])
    {
        for (size_t i = 0; i < size; ++i)
            ptr[i] = arrayToCopy.ptr[i]; //set pointer-based array element
    }                                    //end Array copy constructor

    ~Array()
    {
        delete[] ptr; //release pointer-based array space
    }                 // end destructor

    //overload = operator
    const Array<T> &operator=(const Array<T> &right)
    {
        if (&right != this) // avoid self-assignment
        {
            if (size != right.size)
            {
                delete[] ptr;      //release space
                size = right.size; //resize this object
                ptr = new T[size]; //create space for Array copy
            }
            for (size_t i = 0; i < size; ++i)
                ptr[i] = right.ptr[i]; // copy array into object
        }
        return *this;
    } // end function operator=

    //overload == operator
    bool operator==(const Array<T> &right) const
    {
        if (size != right.size)
            return false; //arrays of different number of elements
        for (size_t i = 0; i < size; ++i)
            if (ptr[i] != right.ptr[i])
                return false; //Array contents are not equal
        return true;          //Arrays are equal
    }                         //end function operator==

    //overload [] operator
    T &operator[](int subscript)
    {
        //check for subscript out-of-range error
        if (subscript < 0 || subscript >= size)
            throw out_of_range("Subscript out of range");
        return ptr[subscript]; // reference return
    }                          // end function operator[]

    //overload [] operator
    T operator[](T subscript) const
    {
        //check for subscript out-of-range error
        if (subscript < 0 || subscript >= size)
            throw out_of_range("Subscript out of range");
        return ptr[subscript]; // returns copy of this element
    }                          // end function operator[]

private:
    int size; //pointer-based array size
    T *ptr;   //pointer to first element of pointer-based array
};
