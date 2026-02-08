#include<iostream>
using namespace std;
int main()
{
    //Bitwise operators in c++
    //bits on of number int and char
    //& - bitwise AND
    //| - bitwise OR
    //^ - bitwise XOR
    //<< - left shift
    //>> - right shift

    //bitwise and
    cout<<(5&7)<<endl;
    cout<<(5&2)<<endl;
    //bitwise or
    cout<<(5|7)<<endl;
    cout<<(5|3)<<endl;
    //bitwise xor
    cout<<(5^7)<<endl;
    cout<<(5^5)<<endl;
    //bitwise not
    cout<<(~0)<<endl;
    //not 0 is negative value -1 because b default it will be signed integer and frst bit is 1
}