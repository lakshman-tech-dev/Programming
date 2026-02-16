#include <iostream>
using namespace std;

// Function to add two integers
int add(int a, int b) {
    return a + b;
}

// Function to add two floats
float add(float a, float b) {
    return a + b;
}

// Function to add two doubles
double add(double a, double b) {
    return a + b;
}

// Function to concatenate two strings
string add(string a, string b) {
    return a + b;
}

int main() {
    cout << "Add integers: " << add(10, 20) << endl;
    cout << "Add floats: " << add(5.5f, 4.5f) << endl;
    cout << "Add doubles: " << add(3.25, 4.75) << endl;
    cout << "Add strings: " << add("Hello ", "World") << endl;

    return 0;
}
