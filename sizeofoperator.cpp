#include <iostream>
using namespace std;

int main() {
    /*sizeof() is a keyword that determine the size of variable
    or datatype in bytes and it is a compiler time operator*/
    int marks=20;
    cout<<sizeof(marks)<<endl;
    cout<<sizeof(int)<<endl;
    cout<<sizeof(float)<<endl;
    cout<<sizeof(double)<<endl;
    cout<<sizeof(char)<<endl;
    cout<<sizeof(bool)<<endl;
    return 0;
}