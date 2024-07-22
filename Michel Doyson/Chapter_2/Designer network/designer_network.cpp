#include <iostream>
#include <string>

using namespace std;

int main() {
    string username;
    string password;
    bool success;

    cout << "\t Game Designer`s" << endl;

    do {
        cout << "Username: ";
        cin >> username;

        cout << "Password: ";
        cin >> password;

        if (username == "Dimazda" && password == "admin") {
            cout << "Welcome boss" << endl;
            success = true;
        } 
        else if (username == "guest" || password == "guest") {
            cout << "Welcome guest" << endl;
            success = true;
        }
        else {
            cout << "Wrong login or password, try again" << endl;
            success = false;
        }
    } while (!success);


    return 0;
}