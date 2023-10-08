#include <iostream>
using namespace std;

void calScore(int score) {
    if (score > 50) {
        cout << "Pass";
    }
    if (score <= 50) {
        cout << "Fail";
    }
}

main()
{
    int score;
    cout << "Enter your score: ";
    cin >> score;
    calScore(score);
}