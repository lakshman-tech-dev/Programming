#include<iostream>
using namespace std;
int main()
{
    //if block in c++ execute block of code only if condition is true
    int phone = 15,money; //15K
    //read the money
    cin>>money;
    if(money>phone)
    {
        cout<<"Lets buy this !!"<<endl;
    }
    else{
        cout<<"Lets wait for the sale"<<endl;
    }
    cout<<"Thanks for shopping !!";
    return 0;
}