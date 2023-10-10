#include <iostream>
#include <string>
using namespace std;

void Reverse(string string)
{
    string response = "Invalid Input !";
    if (string == "true") response = "false";
    if (string == "false") response = "true";
    cout << response;
}

main()
{
    string boolean;
    cout << "Enter 'true' or 'false': ";
    cin >> boolean;
    Reverse(boolean);
}