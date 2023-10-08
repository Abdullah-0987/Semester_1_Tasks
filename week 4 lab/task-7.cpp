#include <iostream>
using namespace std;

void evenORodd(int num)
{
    if (num % 2 == 0) {
        cout << "Number " << num << " is even";
    }
    if (num % 2 == 1) {
        cout << "Number " << num << " is odd";
    }
}

main()
{
    int num;
    cout << "Enter a number: ";
    cin >> num;
    evenORodd(num);
}