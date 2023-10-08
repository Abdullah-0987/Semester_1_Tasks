#include <iostream>
using namespace std;

void Stickers(int sLength) {
    int stickers = (sLength * sLength) * 6;
    cout << "Number of stickers needed: " << stickers;
}

main()
{
    int sLength;
    cout << "Enter the side length of the Rubik's Cube: ";
    cin >> sLength;
    Stickers(sLength);
}