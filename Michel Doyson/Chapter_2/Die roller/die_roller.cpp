#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>


using namespace std;

int main() {
    string next;
    bool exit;
    do {
        cout << "Roll or not? ";
        cin >> next;

        if (next == "Roll" || next == "roll") {
            srand(static_cast<unsigned int>(time(0)));

            int random_num = rand();

            int die = (random_num % 6) + 1;

            cout << "You rolled a " << die << endl;

            exit = false;
        }
        else if (next == "exit") {
            cout << "Goodbye" << endl;
            exit = true;
        }
        else {
            cout << "I don`t understand you" << endl;
            exit = false;
        }
    } while (!exit);
    return 0;
}