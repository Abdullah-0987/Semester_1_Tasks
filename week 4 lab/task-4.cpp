#include <iostream>
using namespace std;

void add(float n1, float n2) {
    cout << "Addition: " << (n1+n2);
}

void subtract(float n1, float n2) {
    cout << "Subtraction: " << (n1-n2);
}

void multiply(float n1, float n2) {
    cout << "Multiplication: " << (n1*n2);
}

void divide(float n1, float n2) {
    cout << "Division: " << (n1/n2);
}

main()
{
    float n1, n2;
    char option;
    cout << "Enter 1st number: "; 
    cin >> n1;
    cout << "Enter 2nd number: "; 
    cin >> n2;
    cout << "Enter an operator (+, -, *, /): "; cin >> op;

    if (option == '+') {
        add(n1, n2);
    }
    if (option == '-') {
        subtract(n1, n2);
    }
    if (option == '*') {
        multiply(n1, n2);
    }
    if (option == '/') {
        divide(n1, n2);
    }
}