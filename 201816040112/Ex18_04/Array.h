#ifndef ARRAY_H_INCLUDED
#define ARRAY_H_INCLUDED
#include <iostream>
#include<iomanip>
using namespace std;
template<typename t>
class Array
{
    friend ostream &operator<<(ostream &output,const Array<t>&a)
    {
        for(int i=0; i<a.asize; i++)
        {
            output<<setw(12)<<a.ptr[i];
                  if(i+1%4==0)
                      output<<endl;
        }
        if(a.asize%4!=0)
            output<<endl;
        return output;
    }
    friend istream &operator>>(istream &input,Array<t> &a)
    {
        for(int i=0; i<a.asize; i++)
        {
            input>>a.ptr[i];
        }
        return input;
    }

public:
    Array(int s):asize(s>0? s:throw invalid_argument("Array size must greater than 0")),ptr(new t[asize])
    {
        for(int i=0; i<asize; i++)
        {
            ptr[i]=0;
        }
    }
    Array<t>(const Array<t> &acopy)
    {

        asize=acopy.asize;
        ptr=new t[asize];
        for(int i=0; i<asize; i++)
        {
            ptr[i]=acopy.ptr[i];
        }

    }
    ~Array()
    {
        delete[] ptr;
    }
    int getsize() const
    {
        return asize;
    }
    const Array<t> &operator=(const Array<t> & right)
    {
        if(right!=*this)
        {
            if(asize!=right.asize)
            {
                delete []ptr;
                asize=right.asize;
                ptr=new t[asize];
            }
            for(int i=0; i<asize; i++)
            {
                ptr[i]=right.ptr[i];
            }

        }
        return *this;

    }
    bool operator==(const Array<t> &right)
    {
        if(asize!=right.asize)
            return false;
        for(int i=0; i<asize; i++)
        {
            if(ptr[i]!=right.ptr[i])
                return false;
        }
        return true;
    }
    bool operator!=(const Array<t> &right)
    {
        if(*this==right)
            return false;
        return true;
    }
    int operator[](const int x) const
    {
        if(x<0||x>=asize)
            throw out_of_range("out of range");
        return ptr[x];
    }
    int operator[](const int &x)
    {
        if(x<0||x>=asize)
            throw out_of_range("out of range");
        return ptr[x];
    }



private:
    int  asize;
    t *ptr;
};


#endif // ARRAY_H_INCLUDED
