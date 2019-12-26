//
//  Ex18_04.h
//  Ex18_03
//
//  Created by misonomayubw on 2019/12/26.
//  Copyright © 2019 misonomayubw. All rights reserved.
//

#ifndef Array_h
#define Array_h

#include <stdio.h>
#include <iostream>
#include <stdexcept>

using namespace std;
template <typename T>

class Array
//virtual class
{
    friend ostream &operator<<(ostream &output, Array &a)
    {
        for(size_t i=0; i<a.size; ++i)
        {
            output << a.ptr[i];
            if((i+1)%4==0)
            output<<endl;
        }
        if(a.size%4!=0)
        output<<endl;
        return output;
    }
    friend istream &operator>>(istream &input, Array &a)
    {
        for(size_t i=0;i<a.size;++i)
            input>>a.ptr[i];
        return input;
    }
public:
    Array<T>(int a)
    {
        size(a>0?a:
             throw invalid_argument("Array size must be greater than 0"))
        ptr(new int[size]);
        for(size_t i=0; i<size; ++i)
        ptr[i]=0;
    }
    Array(const Array & a)
    {
        for(size_t i=0; i<size; ++i)
        ptr[i]=a.ptr[i];
    }
    ~Array()//virtual function
    {
        delete [] ptr;
    }
    size_t getSize()const
    {
        return size;
    }
    Array<T> & operator=(const Array&right)
    {
        if(&right != this)
        {
            if(size != right.size)
            {
                delete [] ptr;
                size=right.size;
                ptr=new int[size];
            }
            for (size_t i=0; i<size; ++i)
              ptr[i]=right.ptr[i];
        }
    }

private:
    size_t size;
    int *ptr;
    
public:
    bool operator==(const Array &right) const
    //judge
    {
        if(size != right.size)
            return false;
        for(size_t i=0;i<size; ++)
            if(ptr[i]!=right.ptr[i])
              return  false;
        return ture;
    }
    T operator[](int sub)
    {
        if(sub<0 || sub >=size)
            throw out_of_range("sub out of range")
        return out_of_range(sub);
    }
    T operator [](int sub) const
    {
        if(sub <0||sub>=size)
           throw out_of_range("sub out of range")
        return ptr[sub];
    }
};

#endif /* Ex18_04_hpp */
