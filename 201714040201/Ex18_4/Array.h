//Array.h
//Array class definition with overloaded operator
#ifndef ARRAY_H
#define ARRAY_H

#include <iostream>
using namespace std;
template <class T,int arraySize>
class Array
{
    friend std::ostream &operator<<(std::ostream &output,const Array &a);
    friend std::istream &operator>>(std::istream &input,Array &a);
public:
    explicit Array()//default constructor
        :size(arraySize > 0 ? arraySize : throw invalid_argument("Array size be greater than 0")),
        ptr(new T[size])
    {
        for(size_t i=0;i<size ;i++)
            ptr[i]=0;
    }//end array default constructor
    Array (const Array &arrayToCopy)//copy constructor
        :size(arrayToCopy.size),
        ptr(new T[size])
    {
        for(size_t i=0;i<size ;i++)
            ptr[i]=arrayToCopy.ptr[i];//copy into object
    }//end Array copy constructor
    ~Array()//destructor
    {
        delete []ptr;//release pointer-based array space
    }//end destructor
    size_t getSize() const//return size
    {
        return size;
    }//end function getSize
    const Array &operator=(const Array &right)//assignment operator
    {
        if(&right !=this)
        {
            if(size!=right.size)
            {
                delete [] ptr;
                size=right.size;
                ptr=new T[size];
            }
            for(size_t i=0;i<size;++i)
                ptr[i]=right.ptr[i];//copy array into object
        }
        return *this;
    }
    bool operator==(const Array &right)const//equality operator
    {
        if(size!=right.size)
            return false;
        for(size_t i=0;i<size;i++)
            if(ptr[i]!=right.ptr[i])
                return false;
        return true;
    }//end function operator
    //inequality operator;returns pposite of ==operator
    bool operator!=(const Array &right)const
    {
        return !(*this==right);
    }//end function operator!=

    //subscript operator for const objiects returns rvalue
    T operator[](int subscript)const
    {
        if(subscript<0||subscript>=size)
            throw out_of_range("Subscript out of range");

        return ptr[subscript];
    }//end function operator[]
    //subscript operator for non-const objects returns modidiable lvalue
    T &operator[](int subscript)
    {
        if(subscript<0||subscript>=size)
            throw out_of_range("Subscript out of range");
        return ptr[subscript];
    }//end function operator[]
    friend std::istream &operator>>(std::istream &input,Array &a)
    {
        for(size_t i=0;i<a.size;++i)
            input>>a.ptr[i];
        return input;
    }//end function

//overloaded output operator for class Array
    friend std::ostream &operator<<(std::ostream &output,const Array &a)
    {
        //out put private ptr-based Array
        for(size_t i=0;i<a.size;++i)
        {
            output<<setw(12)<<a.ptr[i];
            if((i+1)%4==0)
                output<<endl;
        }
        if(a.size %4!=0)
            output<<endl;
        return output;
    }//end function operator
private:
    size_t size;//pointer-base array size
    T *ptr;//pointer to first element of pointer-based array
};

#endif // ARRAY_H
