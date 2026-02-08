#include<iostream>
using namespace std;
int main()
{/*
    forcing the compiler to change the datatype
    is called explicit typecasting*/
    cout<<(float)5/3<<endl;
    char letter='A';
    cout<<letter<<endl;
    cout<<char(letter+1)<<endl;
    cout<<(bool)8+1<<endl;//here any non zero value is taken as true o/p will be 2 here


}