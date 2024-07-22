#include <iostream>

using namespace std;

int main() {
    cout << "Couting forward" << endl;
    for (int i = 0; i <= 10; ++i) {
        cout << i << " ";
    }

    cout << "\n\nCounting backward" << endl;
    for (int i = 10; i >= 0; --i) {
        cout << i << " ";
    }

    cout << "\n\n Counting by five" << endl;
    for (int i = 0; i <= 50; i += 5) {
        cout << i << " ";
    }

    cout << "\n\nCounting with null statement" << endl;
    int count = 0;
    for ( ; count < 10;) {
        cout << count << " ";
        count += 1;
    }

    cout << "\n\nCounting with nested for loops" << endl;
    const int ROWS = 5;
    const int COULUMS = 3;

    for (int i = 1; i <= ROWS; ++i) {
        for (int j = 1; j <= COULUMS; ++j) {
            cout << i << "," << j << " ";
        }
        cout << endl;
    }
    return 0;
}