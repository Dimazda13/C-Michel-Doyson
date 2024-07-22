#include <iostream>

using namespace std;

int main() {
    char again = 'y';

    while(again == 'y') {
        cout << "You lose" << endl;
        cout << "Restart (y/n): ";
        cin >> again;
    }
    cout << "Game over";

    return 0;
}