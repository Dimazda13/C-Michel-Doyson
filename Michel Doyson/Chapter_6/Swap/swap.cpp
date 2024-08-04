#include <iostream>

using namespace std;

void badSwap(int x, int y);
void goodSwap(int& x, int& y);

int main() {
    int myScore = 150;
    int mikeScore = 200;

    cout << "Original values" << endl;
    cout << "My score: " << myScore << endl;
    cout << "Mike score: " << mikeScore << endl << endl;

    cout << "Calling bad swap" << endl;
    badSwap(myScore, mikeScore);
    cout << "My score: " << myScore << endl;
    cout << "Mike score: " << mikeScore << endl << endl;

    cout << "Calling good swap" << endl;
    goodSwap(myScore, mikeScore);
    cout << "My score: " << myScore << endl;
    cout << "Mike score: " << mikeScore << endl << endl;

    return 0;
}

void badSwap(int x, int y) {
    int temp = x;
    x = y;
    y = temp;
}

void goodSwap(int& x, int& y) {
    int temp = x;
    x = y;
    y = temp;
}