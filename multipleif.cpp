#include<iostream>
using namespace std;
int main()
{
    int phone=15;//15k
    int money;
    string weather;
    cin>>money>>weather;
    //phone
    if(money>phone)//independent if
    {
        cout<<"Lets buy this !!"<<endl;
    }
    //picnic
    if(weather=="pleasant")
    {
        cout<<"Lets go for picnic !!"<<endl;
    }
    else{
        cout<<"Lets play indoor games";//else block only depends on condition 2

    }
}