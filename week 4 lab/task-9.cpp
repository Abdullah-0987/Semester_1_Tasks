#include <iostream>
using namespace std;

void calculateFuel(float distance)
{
    float calculatedFuel = distance * 10;
    if (calculatedFuel < 100) {
        calculatedFuel = 100;
    }
    cout << "Fuel needed: " << calculatedFuel;
}

main()
{
    float distance;
    cout << "Enter the distance: ";
    cin >> distance;
    calculateFuel(distance);
}