#include<iostream>
using namespace std;
int main()
{
    //check if given number is prime or not
    int n,i;
    cin>>n;
    for(i=2;i<n;i++)
    {
        //if n is divisible by i
        if(n%i==0)
        {
            break;
        }
}
//out of loop
if(i==n)
{
    cout<<"Prime";
}
else{
    cout<<"Not Prime";
}
}