#include <iostream>
#include <string>
using namespace std;

void possibleBonus(int a, int b)
{
    string response = "true";
    if ((a+6) < b) response = "false";
    cout << response;
}

main()
{
    int yourpsn, frndpsn;
    cout << "Enter your position: ";
    cin >> yourpsn;
    cout << "Enter your friend's position: ";
    cin >> frndpsn;
    possibleBonus(yourpsn, frndpsn);
}