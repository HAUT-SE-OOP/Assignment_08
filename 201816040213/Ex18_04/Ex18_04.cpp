#include <iostream>
#include "Array.h"
using namespace std;

int main()
{
    Array< int > a(3);
    a[0] = 4;
    a[1] = 5;
    a[2] = 6; // declare and initialize array
    cout <<"Array a contains:"<< a;

    Array< int > b(a); // declare and initialize array
    cout <<"Array b contains:"<< b;

    if(a == b)
        cout<<"Array a is equal to array b."<<endl;
    else
        cout<<"Array a is not equal to array b."<<endl;

    cout<<endl;
    Array< double > c(3);
    c[0] = 4.4;
    c[1] = 5.5;
    c[2] = 6.6; // declare and initialize array
    cout <<"Array c contains:"<< c;
    Array< double > d(3);
    d[0] = 4.4;
    d[1] = 2.2;
    d[2] = 3.3; // declare and initialize array
    cout <<"Array d contains:"<< d;
    if(c == d)
        cout<<"Array c is equal to array d."<<endl;
    else
        cout<<"Array c is not equal to array d."<<endl;

    cout<<endl;
    Array< char > e(5);
    e[0] = 'H';
    e[1] = 'E';
    e[2] = 'L';
    e[3] = 'L';
    e[4] = 'O'; // declare and initialize array
    cout <<"Array e contains:"<< e;
    Array< char > f(5);
    f[0] = 'H';
    f[1] = 'E';
    f[2] = 'L';
    f[3] = 'L';
    f[4] = 'O'; // declare and initialize array
    cout <<"Array f contains:"<< f;
    if(e == f)
        cout<<"Array e is equal to array f."<<endl;
    else
        cout<<"Array e is not equal to array f."<<endl;

    return 0;
} //end main
