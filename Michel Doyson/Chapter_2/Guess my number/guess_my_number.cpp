#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;
    
int main() {
    srand(static_cast<unsigned int>(time(0)));
    int secret_num = rand() % 100 + 1;
    int tires = 0;
    int guess;
    cout << "\t Welcome to Guess my number\n" << endl;

    do {
        cout << "Enter a guess: ";
        cin >> guess;
        tires += 1;

        if (guess > secret_num) {
            cout << "Too high\n" << endl;
        }
        else if (guess < secret_num) {
            cout << "Too low\n" << endl;
        }
        else {
            cout << "That`s it. You got it in " << tires << " guesses!" << endl; 
        }

    } while (guess != secret_num);
    return 0;
}