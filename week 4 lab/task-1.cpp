#include <iostream>
using namespace std;

void calculateFuel(int distance) {
    cout << "Fuel needed: " << (distance * 10);
}

main()
{
    int distance;
    cout << "Enter the distance: ";
    cin >> distance;
    calculateFuel(distance);
}