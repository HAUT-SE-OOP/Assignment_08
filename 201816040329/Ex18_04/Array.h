#ifndef ARRAY_H_INCLUDED
#define ARRAY_H_INCLUDED
using namespace std;
#include<iostream>
#include<ostream>
#include<stdexcept>


class Array
{
        friend istream &operator>>(istream &input, Array<T> &k)

    {

        for(i=0;i<k.size;++i)

        {

            input>>k.ptr[i];

        }

        return input;

    }
     friend ostream &operator<<(ostream &output,const Array<T> &k)

    {

        for(size_t i=0;i<k.size;i++)

        {
            output<<setw(12)<<k.ptr[i];
        }

        if(k.size%4!=0)

        {

            output;

        }

        return output;

    }





public:

   explicit Array(int =12);

   Array(const Array &);
   ~Array();
    int getSize() const;
    bool operator==(const Array &);
    const Array &operator=(const Array &);


   bool operator!=(const Array &k) const

   {

      return !(*this == k);
   }

   T &operator[](int);

   T operator[](int) const;
    };



    bool operator==(const Array<T> &k)const

    {

        if(size!=k.size)

        {
            return false;
        }
        else
            return true;

        if(ptr==k.ptr)

           {
            return true;
           }
           else
            return false;

    }





    bool operator!=(const Array &k)

    {

        return !(*this==k);

    }



    T operator[](int n)

    {

        if(n<0&&n>=size)

            throw out_of_range("n should bein size");

        return ptr[n];

    }



private:

    int size;

    T *ptr;


};
Array<T>::Array(const Array &k)
: size(k.size),

      ptr(new T[size])

{

   for (i = 0; i < size; ++i)

      ptr[i] = arrayToCopy.ptr[i];

}

template <class T>

Array<T>::~Array()

{
   delete[] ptr;
}


template <class T>

int Array<T>::getSize() const

{

   return size;
}


#endif // ARRAY_H_INCLUDED
