#include <iostream>
#include <string>
using namespace std;

void checkSpeed(float speed)
{
    string jawab = "Perfect! You're going good.";
    if (speed > 100)
    {
        jawab = "Halt... YOU WILL BE CHALLENGED!!!";
    }
    cout << jawab;
}

main()
{
    float speed;
    cout << "Speed: ";
    cin >> speed;
    checkSpeed(speed);
}