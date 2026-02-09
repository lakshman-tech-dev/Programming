#include<iostream>
using namespace std;
int main()
{
    /*grade to students based on marks*/
    /*
    Marks   Grade
    81-100  A
    61-80   B
    41-60   C
    <=40    D
    */
    int marks;
    cin>>marks;
    if(marks>80)
    {
        cout<<"Grade A"<<endl;     
    }
    else if(marks>60)
    {
        cout<<"Grade B"<<endl;
    }
    else if(marks>40)
    {
        cout<<"Grade C"<<endl;
    }
    else
    {
        cout<<"Grade D"<<endl;
    }
    return 0;
}