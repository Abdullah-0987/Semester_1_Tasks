#include <iostream>
#include <string>
#include<cmath>
using namespace std;

void DiscountedPrice(string countryName, float ticketPrice)
{
    float ticketpriceafterdiscount;

    if (countryName == "Pakistan")
    {
        ticketpriceafterdiscount = ticketPrice-5%
    }
    if (countryName == "Ireland")
     {
        ticketpriceafterdiscount = ticketPrice-10%
    }
    if (countryName == "India")
     {
        ticketpriceafterdiscount = ticketPrice-20%
    }
    if (countryName == "England")
     {
        ticketpriceafterdiscount = ticketPrice-30%
    }
    if (countryName == "Canada")
     {
        ticketpriceafterdiscount = ticketPrice-45%
    }
    cout << "Final ticket price after discount: $" << ticketPriceAfterDiscount << endl;

}

main()
{
    string countryName; float ticketPrice;
    cout << "Enter the country's name: ";
    cin >> countryName;
    cout << "Enter the ticket price in dollars: $";
    cin >> ticketPrice;
    DiscountedPrice(countryName, ticketPrice);
}