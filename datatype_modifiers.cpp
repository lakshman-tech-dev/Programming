#include<iostream>
using namespace std;
int main()
{

    long long number = 3000000000LL;   // 3 billion (needs 8 bytes)
    int number_int = number;            // overflow will happen

    cout << number << endl;             // correct
    cout << number_int << endl;         // corrupted

    cout << sizeof(number) << endl;     // 8
    cout << sizeof(number_int) << endl; // 4
    cout << sizeof(short) << endl;      // 2

    return 0;
}

