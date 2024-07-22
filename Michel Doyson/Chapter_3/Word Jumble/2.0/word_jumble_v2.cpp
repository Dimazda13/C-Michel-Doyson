#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    enum fields {WORD, HINT, NUM_FIELDS};
    const int NUM_WORDS = 4;
    const string WORDS[NUM_WORDS][NUM_FIELDS] = {
        {"wall", "Do you feel you`re banging your head against something"},
        {"glasses", "These might help you see the answer"},
        {"labored", "Going slowly, is it?"},
        {"jumble", "It`s what the game is all about"}
    };

    

    cout << "\t\t\tWelcome to word jumble!\n\n";
    cout << "Unscramble the letters to make a word\n";
    cout << "Enter 'HINT' for a hint\n";
    cout << "Enter 'QUIT' to quit the game\n\n";
    
    string guess;
    bool cycle = true;
    int score = 0;

    while (guess != "QUIT") {
        srand(static_cast<unsigned int>(time(0)));
        int choice = (rand() % NUM_WORDS);
        string theWord = WORDS[choice][WORD];
        string theHint = WORDS[choice][HINT];

        string jumble = theWord;
        int lenght = jumble.size();
        for (int i = 0; i < lenght; ++i) {
            int index1 = (rand() % lenght);
            int index2 = (rand() % lenght);
            char temp = jumble[index1];
            jumble[index1] = jumble[index2];
            jumble[index2] = temp;
        }
        cout << "The jumble is: " << jumble;
        while (cycle) {
            cout << "\n\nYour guess: ";
            cin >> guess;
            if (guess == "QUIT") {
                cycle = false;
            }
            else if (guess == "HINT") {
                cout << "You spent 5 points on a hint\n";
                score -= 5;
                cout << "Your score: " << score << endl;
                cout << theHint;
            }
            else if (guess == theWord) {
                cout << "\nThat`s it!\n";
                score += theWord.size();
                cout << "Your score: " << score << endl;
                break;
            }
            else {
                cout << "That`s is not it\n";
                score -= theWord.size();
                cout << "Your score: " << score;
            }
        }
        
    }
    if (score >= 0) {
        cout << "\nYou got " << score << " points";
    }
    else {
        cout << "\nYou have lost " << score * -1 << " points";
    }
    cout << "\nThanks for playing";
    return 0;
}