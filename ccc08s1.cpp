// 08 s1

#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    //  ================================

    string city, coldestCity;
    int temperature, coldestTemp;

    cin >> city;
    cin >> temperature;

    coldestCity = city;
    coldestTemp = temperature;

    while (city != "Waterloo"){
        cin >> city;
        cin >> temperature;
        
        if (temperature < coldestTemp){
            coldestCity = city;
            coldestTemp = temperature;
        }
    }

    cout << coldestCity << "\n";
    
    //  ================================
}