#ifndef ARRAY_H
#define ARRAY_H
#include <iostream>
#include <iomanip>
#include <stdexcept>
using namespace std;
template <typename T>


class Array
{
    friend ostream &operator<<(ostream &output,const Array<T> &a)

    {
        for(size_t i=0;i<a.size;++i)
        {
            output<<setw(12)<<a.ptr[i];

            if((i+1)%4==0)//4 numbers per row of output
                output<<endl;

        }//end for

        if(a.size%4!=0)//end last line of output

            output<<endl;

        return output;//enables cout<<x<<y;

    };//end function operator<<

    friend istream &operator>>(istream &input, Array<T> &a)

    {

        for(size_t i=0; i<a.size; ++i)

        {

            input>>a.ptr[i];

        }

        return input;

    };//end function

public:

    explicit Array(int arraySize)

    :size(arraySize>0 ? arraySize:throw invalid_argument("array size must be greater than 0"))//default constructor

    {
        ptr=new T[size];
        for(size_t i=0;i<size;++i)
        {
            ptr[i]=0;//set pointer-based array element
        }
    };//end array default constructor

    Array( const Array<T> &ArrayTocopy)

    :size(ArrayTocopy.size),
     ptr(new T[size])

    {
        for(size_t i=0;i<size;++i)
           ptr[i]=ArrayTocopy.ptr[i];//copy into object

    };
    ~Array()

    {

        delete [] ptr;//release pointer-based array space

    };

    size_t getSize()const

    {

        return size;

    };

    const Array &operator=(const Array<T> &right)

    {
        if(&right!=this)//avoid self-assignment

        {
            if(size!=right.size)
            {
            delete [] ptr;//release space

                size=right.size;//resize this object

                ptr=new T[size];//create space for Array copy

            }//end inner if

            for(size_t i=0; i<size; ++i)

            {

                ptr[i]=right.ptr[i];//copy array into object

            }//end outer if

        }

        return *this;//enables x=y=z,for example

    };

    bool operator==(const Array<T> &right)const
    {
        if(size!=right.size)
            return false;//arrays of different number of element
        for(size_t i=0;i<size;++i)
            if(ptr[i]!=right.ptr[i])
               return false;
        return true;

    };//end function operator==

    bool operator!=(const Array<T> &right)const

    {

       return !(*this==right);//invokes Array::operator==

    };
    T &operator[](int subscript)
    {
        if(subscript<0||subscript>=size)
            throw std::out_of_range("Subscript out of range");
        return ptr[subscript];
    };

private:
    T *ptr;
    size_t size;
};

#endif // ARRAY_H
