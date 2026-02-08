#include<iostream>
using namespace std;
int main()
{
    //implicit type casting - change in data type by compiler itself based on priority
    /*priority order: float--int--char--bool*/
    // float+int
    cout<<(5/3.0)<<endl;//Implicit typecasting-result wil be float based on priority
    char letter='A';
    cout<<letter<<endl;//here it will print the letter A
    //char+int
    cout<<letter+1<<endl;//here result will be integer based on ascii value
    letter = letter+1;
    cout<<letter<<endl;//here it will print the letter because letter variable belongs to char datatype at line 8
    //bool+int;
    cout<<(true+1)<<endl;//false -0,true-1 bool+int =int
    //ascii values
    /* A-65
       B-66...so on
    */

}