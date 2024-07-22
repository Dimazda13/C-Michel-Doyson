#include <iostream>

using namespace std;

int main(){
    const int Points = 150;
    int kills = 10;
    int score = Points * kills;
    cout << "Score: " << score << endl;
    
    enum dificult {Novice, Easy, Normal, Hard, Extreme};
    dificult mydificult = Normal;
    enum cost {Fighter = 25, Bomber, Cruiser = 50};
    cost mycost = Bomber;
    cout << "\nTo upgrade to Cruiser will cost " << (Cruiser - mycost) << " resource points.\n";

    return 0;
}