#include <iostream>
#include <string>
#include <vector>

using namespace std;

string& refToElement(vector<string>& vec, int i) {
    return vec[i];
}

int main() {
    vector<string> inventory;
    inventory.push_back("Sword");
    inventory.push_back("Armor");
    inventory.push_back("Shield");

    cout << "Sending the returned reference to cout: " << endl;
    cout << refToElement(inventory, 0) << "\n\n";

    cout << "Assigning the returned reference to another reference\n";
    string& rStr = refToElement(inventory, 1);
    cout << "Sending the new reference to cout:\n";
    cout << rStr << "\n\n";

    cout << "Assigning the returned reference to string object\n";
    string str = refToElement(inventory, 2);
    cout << "Sending the new string object to cout: \n";
    cout << str << "\n\n";

    cout << "Altering an object through a returned reference\n";
    rStr = "Healing poiton";
    cout << "Sending altered object to cout: \n";
    cout << inventory[1] << "\n\n";
    
    for(vector<string>::const_iterator iter = inventory.begin(); iter != inventory.end(); ++iter) {
        cout << *iter << endl;
    }

    return 0;
}