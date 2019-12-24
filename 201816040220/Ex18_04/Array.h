#include<iostream>
#include <iomanip>
 using namespace std;
 template <typename T>
 class Array
 {
      template <typename T1>
      friend ostream &operator<<(ostream &,const Array<T1> &);
       template <typename T1>
      friend istream &operator>>(istream &,Array<T1> &);
  public:
   explicit Array(T = 10);
    Array(const Array<T>&);
    ~Array();
    size_t getSize();

    const Array &operator=(const Array<T> &right)
    {
      if(&right!=this)
      {
          if(size!=right.size)
          {
              delete[] ptr;
              size=right.size;
              ptr=new T[size];
          }

          for(size_t i=0;i<size;++i)
          {
              ptr[i]=right.ptr[i];
          }
      }
      return *this;
  }

    bool operator==(const Array<T> &right) const
     {
      if(size!=right.size)
        return false;

      for(size_t i=0;i<size;++i)
        if(ptr[i]!=right.ptr[i])
        return false;

      return true;
    }

    bool operator!=(const Array<T> &right) const
    {
        return !(*this==right);
    }

    T &operator[](int subscript)
     {
     return ptr[ subscript ];
     }

    T operator[](int subscript) const
     {
     return ptr[ subscript ];
     }

  private:
    size_t size;
    T *ptr;
 };


 template <typename T>
 Array<T> ::Array(T arraySize)
   :size(arraySize),
         ptr(new T[size])
 {
     for(int i = 0; i < size; ++i)
         ptr[i]=0;
 }

  template <typename T>
  Array<T>::Array(const Array<T> &arrayTocopy)
     :size(arrayTocopy.size),
         ptr(new T[size])
  {
    for(size_t i=0;i<size;++i)
    {
        ptr[i]= arrayTocopy. ptr[i];
    }
  }

template <typename T>
 Array<T>::~Array()
 {
     delete [] ptr;
 }

 template <typename T>
 size_t Array<T>::getSize()
 {
     return size;
 }

  template <typename T>
  istream &operator>>(istream &input,Array<T> &a)
  {
      for(size_t i=0;i<a.size;++i)
        input>>a.ptr[i];

      return input;
  }

   template <typename T>
  ostream &operator<<(ostream &output,const Array<T> &a)
  {
      for(size_t i=0;i<a.size;++i)
      {
          output<<setw(10)<<a.ptr[i];
          if((i+1)%4==0)
          {
              output<<endl;
          }
      }

      if(a.size%4!=0)
        output<<endl;

      return output;
  }




















