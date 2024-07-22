#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
#include <vector>
#include <algorithm>
#include <cctype>

using namespace std;

int main() {
    const int MAX_WRONG = 8;

    vector<string> words;
    words.push_back("GUESS");
    words.push_back("HANGMAN");
    words.push_back("DIFFICULT");
    words.push_back("ANSWER");

    srand(time(0));
    random_shuffle(words.begin(), words.end());

    const string WORD = words[0];
    int wrong = 0;

    string soFar(WORD.size(), '-');
    string used = "";
    
    cout << "Welcome to HANGMAN. Good luck!" << endl;

    while ((wrong < MAX_WRONG) && (soFar != WORD)) {
        cout << "\n\nYou have " << (MAX_WRONG - wrong) << " incorrect guesses left\n";
        cout << "\nYou have used the following letters:\n" << used << endl;
        cout << "\nSo far. the word is\n" << soFar << endl;

        char guess;
        cout << "\n\nEnter your guess: ";
        cin >> guess;
        guess = toupper(guess);

        while (used.find(guess) != string::npos) {
            cout << "\nYou have allready guessed " << guess << endl;
            cout << "\n\nEnter your guess: ";
            cin >> guess;
            guess = toupper(guess);
        }   
        used += guess;
        if (WORD.find(guess) != string::npos) {
            cout << "That`s right! " << guess << " is in the word\n";
            for (int i = 0; i < WORD.length(); ++i) {
                if (WORD[i] == guess) {
                    soFar[i] = guess;
                }
            }
        }
        else {
            cout << "Sorry " << guess << " isn`t in the word";
            ++wrong;
        }
    }
    if (wrong == MAX_WRONG) {
        cout << "You have been hanged!";
    }
    else {
        cout << "You guessed it!";
    }
    cout << "\nThe word was " << WORD << endl;

    return 0;
}