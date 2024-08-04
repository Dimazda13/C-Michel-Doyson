#include <iostream>

using namespace std;

int main() {
    int myScore = 1000;
    int& mikesScore = myScore;

    cout << "My score is: " << myScore << endl;
    cout << "Mike score is: " << mikesScore << endl << endl;

    cout << "Adding to my score 500 points" << endl;
    myScore += 500;

    cout << "My score is: " << myScore << endl;
    cout << "Mike score is: " << mikesScore << endl << endl;

    cout << "Adding to Mike score 500 points" << endl;
    mikesScore += 500;

    cout << "My score is: " << myScore << endl;
    cout << "Mike score is: " << mikesScore << endl << endl;

    return 0;
}