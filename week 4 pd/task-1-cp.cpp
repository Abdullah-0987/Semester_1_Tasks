#include <iostream>
#include <string>
using namespace std;

void isEqual(int x, int y)
{
    string output = "false";
    if (x == y) {
        output = "true";
    }
    cout << output;
}

main()
{
    int n1, n2;
    cout << "Enter the first number: ";
    cin >> n1;
    cout << "Enter the second number: ";
    cin >> n2;
    isEqual(n1, n2);
}