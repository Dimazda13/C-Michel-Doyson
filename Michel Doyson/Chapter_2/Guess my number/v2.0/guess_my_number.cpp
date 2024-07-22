#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    cout << "\t Welcom to 'Guess my nummber'\n\n";

    srand(static_cast<unsigned int>(time(0)));
    int bot_secret_num = rand() % 100 + 1;
    int player_secret_num;

    int gamemode;

    int player_tires = 0;
    int bot_tires = 0;

    int player_guess;
    int bot_guess;

    cout << "Gamemodes\n1 - Guess\n2 - Make a number\n";
    cout << "Choose gamemode: ";
    cin >> gamemode;

    switch (gamemode)
    {
    case 1:
        do
        {
            cout << "Enter a guess: ";
            cin >> player_guess;
            player_tires += 1;

            if (player_guess > bot_secret_num) {
                cout << "Too high\n" << endl;
            }
            else if (player_guess < bot_secret_num) {
                cout << "Too low\n" << endl;
            }
            else {
                cout << "That`s it. You got it in " << player_tires << " guesses!" << endl; 
            }
        } while (bot_secret_num != player_guess);
        
        break;
    case 2:
        cout << "Enter your number: ";
        cin >> player_secret_num;
        do
        {
            bot_guess = rand() % 100 + 1;
            cout << "Yout number is: " << player_secret_num << endl;
            cout << "The bot chose a number: " << bot_guess << endl;
            bot_tires += 1;
            
            if (bot_guess != player_secret_num) {
                cout << "The bot choose a wrong number\n" << endl;
            }
            else {
                cout << "The bot are guess your number. He got it in " << bot_tires <<" guesses!" << endl;
            }
        } while (player_secret_num != bot_guess);
        
        break;
    default:
        cout << "Wrong gamemode!!!";
    }

    return 0;
}