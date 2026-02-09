#include<iostream>
using namespace std;
int main()
{
    //Simple calculator using switch case
    //To select one of many code blocks to be executed we use switch case
    int a,b;
    char op;
    cin >> a >> b;
    cin>>op;
    switch(op)
    {
    case '+':
    cout<<(a+b)<<endl;
    break;
    case '-':
    cout<<(a-b)<<endl;
    break;
    case '*':
    cout<<(a*b)<<endl;
    break;
    case '/':
    cout<<(a/b)<<endl;
    break;
    default:
    cout<<"Enter valid operator"; 

    }
    return 0;
}