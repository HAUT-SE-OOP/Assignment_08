#include<iostream>
#include<stdexcept>
#include"Array.h"
using namespace std;

int main()
{
    Array chessBoard1(5);
    Array chessBoard2;

    cout<<"Size of Array chessBoard1 is: "<<chessBoard1.getSize()<<"\nArray after initialization:\n"<<chessBoard1;
    cout<<"Size of Array chessBoard2 is: "<<chessBoard1.getSize()<<"\nArray after initialization:\n"<<chessBoard2;

    cout<<"\nEnter "<<chessBoard1.getSize()<<" chessBoard: " <<endl;
    cin>>chessBoard1;
    cout<<"\nAfter input, the Array contain:\n"<<"chessBoard1:\n"<<chessBoard1;


    cout<<"\nEnter "<<chessBoard2.getSize()<<" chessBoard: " <<endl;
    //cin>>chessBoard2;
    cout<<"\nAfter input, the Array contain:\n"<<"chessBoard2:\n"<<chessBoard2;

    if(chessBoard1!= chessBoard2)
        cout<<"chessBoard1 and chessBoard2 are not equal";
    DoubleSubscriptedArray chessBoard3(chessBoard1);
    cout<<"\nSize of Array chessBoard3 is: "<<chessBoard3.getSize()<<"\nArray after initialization:\n"<<chessBoard3;

    cout<<"\nAssigning chessBoard2 to chessBoard1:"<<endl;
    chessBoard1=chessBoard2;
    cout<<"chessBoard1:\n"<<chessBoard1
        <<"chessBoard2:\n"<<chessBoard2;
    if(chessBoard1==chessBoard2)
        cout<<"chessBoard1 and chessBoard2 are  equal";

    cout<<"\nchessBoard1(1,4) is "<<chessBoard1(1,4);
    chessBoard1(1,4)=1000;
    cout<<"\n\nAssigning 1000 to chessBoard1(1,4)"<<endl;
    cout<<"chessBoard1:\n"<<chessBoard1;


}
