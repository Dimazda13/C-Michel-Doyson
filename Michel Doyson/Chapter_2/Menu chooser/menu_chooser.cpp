#include <iostream>

using namespace std;

int main() {
    cout << "Dificult levels\n" << endl;

    cout << "1 - Easy" << endl;
    cout << "2 - Normal" << endl;
    cout << "3 - Hard" << endl;
    cout << "4 - Impossible\n" << endl;

    int choice;
    cout << "Choice: ";
    cin >> choice;

    switch (choice) {
        case 1:
            cout << "Your choice is Easy" << endl;
            break;
        case 2:
            cout << "Your choice is Normal" << endl;
            break;
        case 3:
            cout << "Your choice is Hard" << endl;
            break;
        case 4:
            cout << "Your choice is Impossible" << endl;
            break;
        default:
            cout << "Your choice are illegal" << endl;
    }

    return 0;
}