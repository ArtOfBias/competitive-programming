// cf 1702c

typedef long long ll;

#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    //  ================================

    int t;
    cin >> t;

    ll n,k;
    vector<ll> stations;
    ll stats, state;
    ll inp;


    for (int i = 0; i < t; i++){
        cin >> n >> k;
        for (ll j = 0; j < n; j++){
            cin >> inp;
            if (j > 0 && inp == stations.back()){
            }
            else {
                stations.push_back(inp);
            }
        }
        for (ll j = 0; j < k; j++){
            cin >> stats >> state;

            auto it = find(stations.begin(), stations.end(), stats);

            if (it != stations.end()){
                auto it2 = find(it, stations.end(), state);

                if (it2 != stations.end()){
                    cout << "YES\n";
                }
                else {
                    cout << "NO\n";
                }
            }
            else {
                cout << "NO\n";
            }
        }

        stations.clear();
    }

    //  ================================
}