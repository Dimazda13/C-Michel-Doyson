#include <iostream>
#include <string>

using namespace std;

int main() {
    const int GOLD_PIECES = 900;
    int adventures, killed, survivors;
    string leader;

    //Informations
    cout << "Welcome to Lost Fortune\n\n";
    cout << "Enter the following for your personalized adventure\n";
    cout << "Enter a number: ";
    cin >> adventures;
    cout << "Enter a number, smaller then the first: ";
    cin >> killed;
    survivors = adventures - killed;
    cout << "Enter your name: ";
    cin >> leader;

    //Story
    cout << "\nA brave group of " << adventures << " set out on a quest" << endl;
    cout << "in search of the lost treasure of the Ancient Dwarves." << endl;
    cout << "The group was led by that legendary rouge. " << leader << endl;
    cout << "\nAlong the way, a band of marauding ogres ambushed the party," << endl;
    cout << "and the ogres were defeated, but at a cost " << endl;
    cout << "Of the adventures, " << killed << " were vanquished. " << endl;
    cout << "leaving just " << survivors << " in the group\n" << endl;
    cout << "\nThe party was about to give up all hope. ";
    cout << "But while laying the deceased to rest. " << endl;
    cout << "they stumbled upon the buried fortune. " << endl;
    cout << "So the adventurers split " << GOLD_PIECES << " gold pieces." << endl;
    cout << leader << " held on to the extra " << (GOLD_PIECES % survivors);
    cout << " pieces to keep things fair of course.\n";

    return 0;
}