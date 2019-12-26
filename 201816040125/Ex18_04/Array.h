#ifndef ARRAY_H
#define ARRAY_H
#include<deque>
template <typename>
class Array
{
friend std::ostream &operator<<(std::ostream &,const Array &);
    friend std::istream &operator>>(std::istream &, Array &);
public:
    explicit Array(int=12)
    :size(arraySize>0?arraySize):
            throw invalid_argument("DoubleSubscriptedArray size must be greater than 0")),
            ptr(new int[size])
  {
         for(size_t i=0;i<size;++i)
                    ptr[i]=0;
  }

    Array (const Array &arrayToCopy):size(arrayToCopy.size),ptr(new int[size])
  {
      for(size_t i=0;i<size;++i)
                    ptr[i]=arrayToCopy.ptr[i];
  }
    ~Array()
    {
     delete [] ptr;
 }

    size_t getSize()const;
    {
     return size;
    }
    const Array& operator=(const Array &right)
    {
     if(&right!=this)
     {
         if(size!=right.size)
         {
             delete [] ptr;
             size=right.size;
             ptr=new int[size];
         }
         for(size_t i=0;i<size;++i)
            ptr[i]=right.ptr[i];
     }
     return *this;
 }
    bool operator==(const Array &right )const
    {
     if(size!=right.size)
        return false;
     for(size_t i=0;i<size;++i)
        if(ptr[i]!=right.ptr[i])
         return false;
     return true;
 }

    bool operator!=(const Array &right)const
    {
        return !(*this==right);
    }
    int &operator()(int row,int columns)
    {
    if(row*columns<0||row*columns>size)
        throw out_of_range("Subscript out of range");
    return ptr[row*columns];
}
    int operator()(int row,int columns)const
    {
    if(row*columns<0||row*columns>size)
        throw out_of_range("Subscript out of range");
    return ptr[row*columns];
}

private:
    size_t size;
    int *ptr;


};
#endif // ARRAY_H
