#ifndef ARRAY_H_INCLUDED
#define ARRAY_H_INCLUDED
#include<iostream>
#include<deque>

template<typename T>
class Array
{
    friend std::ostream&operator(std::ostream&,const Array&);
    friend std::istream&operator(std::istream&.Array&);
public:
    explicit Array(int = 10);
    Array(const Array&);
    ~Array();
    size_t getSize()const;
    const Array &operator=(const Array &);
    bool operator==(const Array&)condt;
    bool operator!=(const Array* right)const;
    int &operator[](int);
    int operator[](int)const;
private:
    size_t size;
    int *ptr;
    std::deque<T>Array;
} ;


#endif // ARRAY_H_INCLUDED
