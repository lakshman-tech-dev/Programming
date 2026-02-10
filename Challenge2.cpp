#include<iostream>
using namespace std;
int main()
{
    //Read N numbers and print sum of even numbers
    int n,i,sum=0;
    cin>>n;
    for(i=0;i<n;i++)
    {
        int no;
        cin>>no;
        if(no%2==0)
        {
            sum=sum+no;
        }
    }
    cout<<sum;

}