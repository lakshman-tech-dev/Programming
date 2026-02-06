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
    cout<<b<<endl;
    cout<<c<<endl;
    cout<<fixed<<setprecision(6)<<d<<endl;
    cout<<e<<endl;
    return 0;
}