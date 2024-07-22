#include <iostream>

using namespace std;

int main() {
    const int MAX_ITEMS = 10;
    int numitems = 3;
    string inventory[MAX_ITEMS] = {"Sword", "Armor", "Shield"};

    cout << "Your items" << endl;
    for (int i = 0; i < numitems; ++i) {
        cout << inventory[i] << endl;
    }

    inventory[0] = "Battle Axe";
    cout << "You bouth a Battle Axe and sold your sword" << endl << endl;

    for (int i = 0; i < 8; ++i) {
        cout << "You find a healing potion" << endl;
        if (numitems < MAX_ITEMS) {
            inventory[numitems++] = "Healing potion";
            cout << "You got the healing potion" << endl << endl;
        }
        else {
            cout << "not many space in inventory" << endl << endl;
        }
    }
    cout << "Your items" << endl;
    for (int i = 0; i < numitems; ++i) {
        cout << inventory[i] << endl;
    }

    return 0;
}