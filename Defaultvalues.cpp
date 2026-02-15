#include<iostream>
using namespace std;

void PlayMusic(int songid, float duration=10);   //default value parameter should come after parameter with no default value

int main()
{
    PlayMusic(1,5.5);
    PlayMusic(2,6.5);
    PlayMusic(3);
    return 0;
}

void PlayMusic(int songid, float duration)    
{
    cout << "Playing song " << songid << " for " << duration << " minutes" << endl;
}
