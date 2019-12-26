#ifndef ARRAY_H_INCLUDED
#define ARRAY_H_INCLUDED
#include <iostream>
using namespace std;

template <class T>
class Array
{
    friend ostream &operator<<(ostream &out,const Array<T> & b)
    {
        for(int i=0;i<b.size;++i)
        {
            out<<b.ptr[i];
        }
        return out;
    }
    friend istream &operator>>(istream &in,Array &c)
    {
        for (int i=0;i<c.size;++i)
        {
            in>>c.ptr[i];
        }
        return input;
    }

public:

    Array(int a):size(a){};
    Array(const Array & b);
    ptr(new T[size])
    {
        for (size_t i=0;i<size;++i)
            ptr[i]=0;
    }
    ~Array()
    {
        delete []ptr;
    }
    int getSize()const
    {
        return size;
    }

    const Array &operator=(const Array<T> &r)
    {
        if(&r!=this)
        {
            if(size!=r.size)
            {
                delete [] ptr;
                size=r.size;
                ptr=new T[size];
            }
            for(size_t i=0; i<size; ++i)
            {
                ptr[i]=r.ptr[i];
            }
        }
        return *this;
    };
    bool operator==(const Array<T> &r)
    {
        if(size!=r.size||ptr!=r.ptr)
            return false;
        return true;
    }
    bool operator!=(const Array &r)
    {
        return !(*this==r);
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

#endif // ARRAY_H_INCLUDED
