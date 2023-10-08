#include <iostream>
using namespace std;

void inchesToFeets(float inches) 
{
    float feet = inches / 12;
    cout << "Equivalent in feet: " << feet;
}
 main()
{
    float inches;
    cout << "Enter the measurement in inches: ";
    cin >> inches;
    inchesToFeets(inches);
}