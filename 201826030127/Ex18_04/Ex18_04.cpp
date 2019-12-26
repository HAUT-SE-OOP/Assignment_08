#include<iostream>
#include"Array.h"
#include<stdexcept>
using namespace std;
#include<iomanip>
template<typename T>
Array<T>::Array(int arraysize)
:size(arraysize > 0 ? arraysize :
      throw invalid_argument("The array size must be >0")),
      ptr(new T[size])
{
    for(size_t i=0;i<size;i++)
        ptr[i]=0;//initialize array
}//end Array default constructor

//copy constructor for class Array
template<typename T>
Array<T>::Array(const Array<T> &arrayToCopy)
:size(arrayToCopy.size),ptr(new T[size])
{
    for(size_t i=0;i<size;i++)
        ptr[i]=arrayToCopy.ptr[i];//copy into object

}
template<typename T>
Array<T>::~Array()
{
    delete[]ptr;//release pointer - based space
}//end destructor
template<typename T>
size_t Array<T>::getsize() const
{
    return size;//number of Array element

}//end function get size
template<typename T>
Array<T>  &Array<T>::operator=(const Array<T> &right)
{

    if(this != &right)
    {

        if(size != right.size)
        {
            delete[]ptr;//release ptr
            ptr=new T [right.size];
            size=right.size;
        }//end function if

        for(size_t i=0;i < size;i++)

            ptr[i]=right.ptr[i];//copy array object

    }
    return *this;

}//end function operator=

template<typename T>
bool Array<T>::operator==(const Array<T> &right) const
{
    if(right.size != size)

         return false;

        for(size_t i=0;i<size;i++)
        {
            if(ptr[i]!=right.ptr[i])

                return false;

        }

        return true;//Array is equal
}//end function operator==
template<typename T>
T & Array<T>::operator[](int subscript)
{
    if(subscript > size)
        throw invalid_argument("The sub must < size");
        else
    return ptr[subscript];//reference return

}//end function operator[]

template<typename T>
T Array<T>::operator[](int subscript)  const
{
    if(subscript > size)
        throw invalid_argument("The sub must < size");

     return ptr[subscript];//copy the element
}//end functon  operator[]
template<typename T>
istream &operator>>(istream &input,Array<T> &a)
{
    for(size_t i=0;i<a.size;i++)

        input>>a.ptr[i];

    return input;//enables cin>>x>>y
}//end function operator>>
template<typename T>
ostream &operator<<(ostream &output, const Array<T> &a)
{
    for(size_t i = 0;i < a.size;i++)
    {
          output <<setw(12)<< a.ptr[i];

          if((i+1)%4==0)
            cout<<endl;//4 numbers per of outpyt

    }

    return output;//enables cout<<x<<y
}//end function operator<<

int main()
{
    Array<int>integers1(7);//seven-element Array

    Array<int>integers2;//10 elements by default
    cout << "size of Array integers1 is："<<integers1.getsize()<<"\nArray after intializtion :\n"<<integers1;

    cout << "\nsize of Array integers2 is："<<integers2.getsize()<<"\nArray after intializtion :\n"<<integers2;

    cout<<"\nEnter 17 elements:"<<endl;
    cin>>integers1>>integers2;
    cout<<"Afer input ,the array contains:\n"<<"integers1:"<<"\n"<<integers1<<"\nintegers2:"<<"\n"<<integers2;

    cout<<"\nEvaluating integers1!=integers2"<<"\n";

    if(integers1 != integers2)
        cout<<"\nintegers1 is not equal to intagers2"<<"\n";
    Array<int> integers3(integers1);//copy constructor

    cout<<"\nSize of integers3 is:"<<integers3.getsize()<<"\nAfter intialization integers3 is :\n"<<integers3;

    cout<<"\nAssignment integers2 to integers1:"<<endl;

    integers1 = integers2;
    cout<<"integers1 is :\n"<<integers1;
    cout<<"\nintegers2 is :"<<"\n"<<integers2;
    cout<<"\nevaluating integers1 == integsrs2 "<<endl;

    if(integers1==integers2)
        cout<<"\nintegers1 is equal to integers2"<<endl;

    cout<<"\nintegers1[5] is "<<integers1[5];
    cout<<"\n\nAssignment 1000 t0 integers1[5] "<<endl;
    integers1[5] = 1000;
    cout<<"\nintegers1 :\n"<<integers1;
    try
    {
        cout<<"\nAssignment 1000 to integers1[15]:"<<endl;
        integers1[15] =  1000;

    }   //end try

    catch (out_of_range &ex )
    {
        cout << "An exception occurred : "<<ex.what()<<endl;
    }//end catch


}//end main
