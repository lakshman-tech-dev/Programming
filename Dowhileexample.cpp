#include<iostream>
using namespace std;
int main()
{
    int n;
    //read numbers until getting a negative number
    //10,2,3,5,7,98,-25 stop
    do{
        cin>>n;
        cout<<n<<" ";
    }while(n>=0);
}