#include <iostream>
using namespace std;

void calculatePayableAmount(string day, float amount)
{
    float payableAmount = amount * .95;
    if (day == "Sunday") {
        payableAmount = amount * .9;
    }
    cout << "Payable Amount: $" << payableAmount;
}

main()
{
    while (1) {
        string day; float amount;
        cout << "Enter the day of purchase: ";
        cin >> day;
        cout << "Enter the total purchase amount: $";
        cin >> amount;
        calculatePayableAmount(day, amount);
        cout<<endl;
    }
}