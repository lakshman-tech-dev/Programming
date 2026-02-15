#include<iostream>
using namespace std;

void PlayMusic(); //Forward declaration to avoid compile time error

int main()
{
    PlayMusic();
}
void PlayMusic()
{
    cout<<"Playing music";
}