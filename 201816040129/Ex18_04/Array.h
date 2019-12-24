#ifndef ARRAY_H_INCLUDED
#define ARRAY_H_INCLUDED

#include<iostream>
#include<iomanip>
#include<stdexcept>
using namespace std;
 template<typename T>
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
        if(a.size%4!=0)
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
    Array(int arraySize)//default constructor
      :size(arraySize>0?arraySize:
            throw invalid_argument("Array size must be greater than 0")),
            ptr(new T [size])
            {
                for(size_t i=0;i<size;++i)
                    ptr[i]=0;//set pointer-based array element
            }
            Array(const Array &arrayToCopy)//copy constructor
            :size(arrayToCopy.size),
            ptr(new T [size])
            {
                for(size_t i=0;i<size;++i)
                    ptr[i]=arrayToCopy.ptr[i];//copy into object
            }
            ~Array()//destructor
            {
                delete [] ptr;//release pointer-based array space
            }
            size_t getSize()const//return size
            {
                return size;//number of elements in Array
            }
            const Array &operator=(const Array &right)//assignment operator
            {
                if(&right!=this)//avoid self-assignment
                {
                    if(size!=right.size)
                    {
                        delete [] ptr;//release space
                        size=right.size;//resize this object
                        ptr=new int[size];//create space for Array copy
                    }
                    for(size_t i=0;i<size;++i)
                        ptr[i]=right.ptr[i];//copy array into object
                }
                return *this;//enables x=y=z,for example
            }
            bool operator ==(const Array &right)const//equality operator
            {
                if(size!=right.size)
                    return false;//arrays of different number of elements
                for(size_t i=0;i<size;++i)
                    if(ptr[i]!=right.ptr[i])
                       return false;//Array contents are not equal
                return true;//Array are equal
            }
            bool operator !=(const Array &right)const
            {
                return !(*this==right);//invokes Array::operator==
            }
            //subscript operator for non-const objects returns modifiable lvalue
            T &operator[](int subscript)
            {
                if(subscript<0||subscript>=size)
                    throw out_of_range("Subscript out of range");
                return ptr[subscript];
            }
            //subscript operator for const objects returns lvalue
            T operator[](int subscript)const
            {
                if(subscript<0||subscript>=size)
                    throw out_of_range("Subscript out of range");
                return ptr[subscript];
            }
private:
    size_t size;
    T *ptr;


};

#endif // ARRAY_H_INCLUDED
