#include <iostream>
#include <string>

using namespace std;

int main() {
    cout << "Dificult levels\n" << endl;

    cout << "Easy" << endl;
    cout << "Normal" << endl;
    cout << "Hard" << endl;
    cout << "Impossible\n" << endl;

    string choice;
    int d_num;
    cout << "Choice: ";
    cin >> choice;

    if (choice == "Easy") {
        d_num = 1;
    }
    else if (choice == "Normal") {
        d_num = 2;
    }
    else if (choice == "Hard") {
        d_num = 3;
    }
    else if (choice == "Impossible") {
        d_num = 4;
    }
    else {
        d_num = 0;
    }

    switch (d_num) {
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