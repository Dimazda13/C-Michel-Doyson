#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    vector<string> inventory;

    inventory.push_back("Sword");
    inventory.push_back("Armor");
    inventory.push_back("Shield");

    cout << "You have " << inventory.size() << " items" << endl;

    cout << "\nYour items\n";
    for (int i = 0; i < inventory.size(); i++) {
        cout << inventory[i] << endl;
    }

    inventory[0] = "Battle axe";
    cout << "You trade your sword for a battle axe." << endl;

    cout << "The item name '" << inventory[0] << "' has " << inventory[0].size() << " letters in it" << endl;

    inventory.pop_back();
    cout << "Your shield is broken" << endl;

    cout << "You have " << inventory.size() << " items" << endl;

    cout << "\nYour items\n";
    for (int i = 0; i < inventory.size(); i++) {
        cout << inventory[i] << endl;
    }

    //inventory.clear();
    if (inventory.empty()) {
        cout << "You have been robbed of all of your items by a thief" << endl;
        cout << "You have nothing";
    }
    else {
        cout << "You have at least one item" << endl;
        cout << "You have " << inventory.size() << " items" << endl;

        cout << "\nYour items\n";
        for (int i = 0; i < inventory.size(); i++) {
            cout << inventory[i] << endl;
        }
    }
    return 0;
}