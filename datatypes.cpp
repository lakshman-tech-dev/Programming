#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int a=1229;
    float b=12.200500234;
    double d=12.200500234;
    char e ='A';
    bool c=true;

    cout<<a<<endl;
    cout<<fixed<<setprecision(8)<<b<<endl;//it is used to represent amount like 100.50 paise reprsent simple decimal values
    cout<<c<<endl;
    cout<<fixed<<setprecision(8)<<d<<endl;//used for high precision
    cout<<e<<endl;
    return 0;
    // both b and d will have show different values now because of approximation
}
