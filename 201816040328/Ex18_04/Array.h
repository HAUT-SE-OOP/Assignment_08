#ifndef ARRAY_H_INCLUDED
#define ARRAY_H_INCLUDED

#include<iostream>
using namespace std;

template <class T>
class Array
{
    friend ostream &operator<<(ostream &output,const Array &a)
    {
        for(int i=0;i<a.size;i++)
        {
            output<<"      "<<a.ptr[i];
            if((i+1)%4==0)//4 number per row of out
                output<<endl;
        }
        if(a.size%4!=0)
            output<<endl;
        return output;
    }//end function
    friend istream &operator>>(istream &input,Array &a)
    {
        for(int i=0;i<a.size;++i)
        {
            input>>a.ptr[i];
        }
        return input;
    }//end function
public:
    //default constructor
    explicit Array (int arraysize=10)
    :size(arraysize>0?arraysize:
          throw invalid_argument("size must be >0")),
    ptr(new T[size])
    {
        for(int i=0;i<size;i++)
            ptr[i]=0;//set pointer-based element
    }//end Array default constructor
    //copy constructor
    Array(const Array &arraycopy)
    :size(arraycopy.size),
    ptr(new T[size])
    {
        for(int i=0;i<size;i++)
            ptr[i]=arraycopy.ptr[i];//copy into object
    }//end array copy constructor
    //destructor
    ~Array()
    {
        delete [] ptr;//release pointer-based array space
    }//end destructor
    //return size
    int getsize()const
    {
        return size;
    }//end get size
    const Array &operator=(const Array &right)
    {
        if(&right!=this)
        {
            delete [] ptr;//release space
            size=right.size;//resize this object
            ptr=new T[size];//create space for Array copy
        }
        for(int i=0;i<size;++i)
            ptr[i]=right.ptr[i];//copy Array to object
    }
    bool operator==(const Array &right)const
    {
        if(size!= right.size)
           return false;// arrays of different number of elements
        for (int  i =0; i <size; i++)
           if(ptr[i] !=right.ptr[i])
             return false;// Array contents are not equal
        return true; // Arrays are equal
    }

    //inequality operator
    bool operator!=(const Array &right)const
    {
        return !(*this==right);
    }//end function operator !=
    //subscript operator for non-const object returns modifiable value
    T &operator [](int subscript)
    {
        if( subscript< 0||subscript>=size)
           throw out_of_range("Subscript out of range");
       return ptr[ subscript];//reference return
    }// end function operator[]
 //overloaded subscript operator for const Arrays
 //const reference return creates an rvalue
  T  operator[]( int subscript) const
  {
     //check for subscript out-of-range error
     if (subscript <0 ||subscript >=size)
         throw out_of_range( "Subscript out of range");

    return ptr[ subscript];// returns copy of this element
  }  //end function operator[]

private:
    int size;//pointer-based array size
    T *ptr;//pointer to first element of pointer-based array
}; //end class Array
#endif // ARRAY_H_INCLUDED
