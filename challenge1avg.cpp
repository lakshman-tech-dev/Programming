//print the avg of 5 numbers and print the avg upto 4 decimal
#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int a,b,c,d,e,sum;
    cin>> a >> b >> c >> d >> e;
    sum=a+b+c+d+e;
    cout<<fixed<<setprecision(4)<<(float)sum/5;
    return 0;

}