#include <bits/stdc++.h>

using namespace std;

int main(){
    vector<string> turns;
    vector<string> locations;
    string turn, location;

    locations.push_back("HOME");

    while (true) {
        cin >> turn;
        cin >> location;
        if (turn == "R") turn = "LEFT";
        if (turn == "L") turn = "RIGHT";
        turns.push_back(turn);
        if (location == "SCHOOL") break;
        locations.push_back(location);
    }

    for (int i = turns.size() - 1; i > 0; i--){
        cout << "Turn " << turns[i] << " onto " << locations[i] << " street.\n";
    }

    cout << "Turn " << turns[0] << " into your HOME.\n";

    
    return 0;
}