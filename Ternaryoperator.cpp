#include<iostream>
using namespace std;
int main()
{
    //ternary operators - used to replace simple if else statement
    string weather;
    int temp;
    cin>>temp;
    weather=(temp>30 ? "Hot" : "pleasant");
    cout<<weather;
}