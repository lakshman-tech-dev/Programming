#include<iostream>
using namespace std;
int main()
{
    //increment(++) and decrement(--) operators in c++
    int a=10;
    int b=15;
    a++;//a++ is same as a=a+1
    b--;//b++ is same as b=b+1
    cout<<"A="<<a<<endl;
    cout<<"B="<<b<<endl;

    //Behaviour -> post increment and pre increment
    int x=10;
    int y=x++;//post increment
    cout<<x<<","<<y<<endl;
    int z=++x;//pre-increment
    cout<<x<<","<<z<<endl;

    //same for pre and post decrement also


}