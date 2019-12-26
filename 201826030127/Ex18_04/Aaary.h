#ifndef ARRAY_H_INCLUDED
#define ARRAY_H_INCLUDED
#include<iostream>
using namespace std;
template<typename T>
class Array;
template<typename T>
ostream& operator<<(ostream&,const Array<T>&);
template<typename T>
istream& operator>>(istream&, Array<T>&);
template<typename T>
class  Array
{

public:

    explicit Array(int =10);//default constructor
    Array(const Array<T> &);//copy constructor
    ~Array();//destructor;
    size_t getsize() const ;//return size
    Array<T> &operator=(const Array<T> &);//assignment operator
    bool operator==(const Array<T> &) const;//equality operator
    bool operator!=(const Array &right)  const
    {
        return !(*this==right);
    }//end function !=operator

    T &operator[](int);

    T operator[](int)  const;

    friend ostream &operator<< <T>(ostream &output, const Array< T >  &a);
    friend istream &operator>> <T>(istream &input ,Array< T > &a);


private:
    size_t size;//the array's number
    T *ptr;//pointer to the first element in the array

};//end class Array


#endif // ARRAY_H_INCLUDED
