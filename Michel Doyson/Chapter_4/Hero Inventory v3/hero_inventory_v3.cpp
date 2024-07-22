#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    vector<string> invetory;

    invetory.push_back("Sword");
    invetory.push_back("Armor");
    invetory.push_back("Shield");

    vector<string>::iterator myiterator;
    vector<string>::const_iterator iter;

    cout << "You have " << invetory.size() << " items" << endl;
    cout << "\nYour inventory\n";
    for (iter = invetory.begin(); iter != invetory.end(); ++iter) {
        cout << *iter << endl;
    }

    cout << "You trade your sword for a battle axe." << endl;
    myiterator = invetory.begin();
    *myiterator = "Battle axe";

    cout << "\nYour inventory\n";
    for (iter = invetory.begin(); iter != invetory.end(); ++iter) {
        cout << *iter << endl;
    }

    cout << "The item name '" << *myiterator << "' has " << (*myiterator).size() << " letters in it" << endl;
    //cout << "The item name '" << *myiterator << "' has " << myiterator->size() << " letters in it" << endl;

    invetory.insert(myiterator, "Crossbow");

    cout << "\nYou have " << invetory.size() << " items" << endl;
    cout << "\nYour inventory\n";
    for (iter = invetory.begin(); iter != invetory.end(); ++iter) {
        cout << *iter << endl;
    }

    invetory.erase(myiterator + 2);
    cout << "Your armor is broken" << endl;
    cout << "\nYour inventory\n";
    for (iter = invetory.begin(); iter != invetory.end(); ++iter) {
        cout << *iter << endl;
    }

    
    return 0;
}