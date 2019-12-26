#ifndef ARRAY_H
#define ARRAY_H
using namespace std;
template <class T>
class Array
{
    friend ostream &operator<<(ostream &output,const Array<T> &a)
    {
        for(size_t i=0;i<a.size;++i)
        {
            output<<a.ptr[i];
            if((i+1)%4==0)
                output<<endl;
        }
        if(a.size%4!=0)
            output<<endl;
        return output;
    }
    friend istream &operator>>(istream &input,Array<T> &a)
    {
            for(size_t i=0;i<a.size;++i)
            input>>a.ptr[i];
            return input;
    }
public:
    explicit Array(int arraySize)
    :size(arraySize>0?arraySize:throw invalid_argument("Array size must be greater than 0"))
    {
        ptr=new T[size];
        for (size_t i=0;i<size;++i)
            ptr[i]=0;
    }
    Array(const Array<T> &arrayToCopy)
    :size(arrayToCopy.size),ptr(new T[size])
    {
            for (size_t i=0;i<size;++i)
            ptr[i]=arrayToCopy.ptr[i];
    }
    ~Array()
    {
        delete[]ptr;
    }
    size_t getSize()const
    {
        return size;
    }
    const Array<T> &operator=(const Array<T> &right)
    {
        if(&right!=this)
        {
            if(size!=right.size)
            {
                delete[]ptr;
                size=right.size;
                ptr=new T[size];
            }
            for(size_t i=0;i<size;++i)
                ptr[i]=right.ptr[i];
        }
        return *this;
    }
    bool operator==(const Array<T> &right)const
    {
        if(size!=right.size)
            return false;
        for (size_t i=0;i<size;++i)
        if(ptr[i]!=right.ptr[i])
        return false;
        return true;
    }
    bool operator!=(const Array<T> &right)const
    {
        return !(*this==right);
    }
    T &operator[](T subscript)
    {
        if(subscript<0||subscript>=size)
            throw out_of_range("Subscript out of tange");
            return ptr[subscript];
    }
    T operator[](T subscript)const
    {
        if(subscript<0||subscript>=size)
            throw out_of_range("Subscript out of tange");
        return ptr[subscript];
    }
private:
    size_t size;
    int *ptr;
};
#endif // ARRAY_H
