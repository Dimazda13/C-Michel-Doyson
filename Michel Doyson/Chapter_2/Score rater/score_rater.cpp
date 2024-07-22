#include <iostream>

using namespace std;

int main() {
    int score;

    cout << "Enter your score: ";
    cin >> score;

    if (score >= 1000) {
        cout << "You score 1000 or more";
    }
    else if(score >= 500) {
        cout << "You score 500 or more";
    }
    else if(score >= 250) {
        cout << "You score 500 or more";
    }
    else {
        cout << "You score less than 1000";
    }
    
    return 0;
}