#include<iostream>
using namespace std;
int main()
{
    //dowhile demo
    int money = 5;
    do{
        cout<<"Shopping with money "<<money<<endl;
        money=money-1;
    }while(money>0);
    return 0;
    
}