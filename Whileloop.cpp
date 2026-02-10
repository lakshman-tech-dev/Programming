#include<iostream>
using namespace std;
int main()
{
    //while - loops through a block of code untill specific condition is true
    //TASK-READ NUMBERS AND COMPUTE SUM OF N NUMBERS
    int n;
    cin>>n;
    int i=1;//tracks the number of times the loop runs
    int sum=0;
    while(i<=n)
    {
        int no;
        cin>>no;
        sum=sum+no;
        i=i+1;//update
        
    }
    cout<<sum;

}