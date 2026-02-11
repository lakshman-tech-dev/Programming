#include<iostream>
using namespace std;
int main()
{ //break statement example
        int cal = 0;
    int mom_calls_up = 10;

    while (cal < 50) {
        cout << "Runing & burning " << cal << endl;

        if (cal == mom_calls_up) {
            break;//break statement terminates the loop containing it 
        }

        cal = cal + 1;
    }

    cout << "Workout complete " << cal << endl;

    return 0;

}