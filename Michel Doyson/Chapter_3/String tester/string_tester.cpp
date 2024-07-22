#include <iostream>
#include <string>

using namespace std;

int main() {
    string word1 = "Game";
    string word2("Over");
    string word3(3, '!');
    string phrase = word1 + " " + word2 + word3;

    cout << "The phrase is: " << phrase << endl;
    cout << "The phrase has " << phrase.size() << " characters in it" << endl;
    cout << "The character at position 0 is: " << phrase[0] << endl;
    cout << "Changing the character at position 0" << endl;
    phrase[0] = 'L';
    cout << "The phrase is now: " << phrase << endl << endl;

    for ( unsigned int i = 0; i < phrase.size(); ++i) {
        cout << "The character at position " << i << " is: " << phrase[i] << endl;
    }

    cout << "The sequence 'Over' begins at location: " << phrase.find("Over") << endl;

    if (phrase.find("elephant") == string::npos) {
        cout << "'elephant' is not found in phrase" << endl;
    }

    phrase.erase(2, 5);
    cout << "The phrase is now: " << phrase << endl;
    phrase.erase(4);
    cout << "The phrase is now: " << phrase << endl;
    phrase.erase();
    if (phrase.empty()) {
        cout << "The phrase is no more";
    }

    return 0;
}