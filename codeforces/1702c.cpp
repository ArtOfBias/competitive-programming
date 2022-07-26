// cf 1702c

typedef long long ll;

#include <bits/stdc++.h>

using namespace std;

void solve(){
    //  ================================

    int n, k;
    cin >> n >> k;

    map<ll, pair<int, int>> stations;
    ll temp;

    for (int i = 0; i < n; i++){
        cin >> temp;
        if (stations.find(temp) == stations.end()){
            stations[temp] = make_pair(i,i);
        }
        else {
            stations[temp].second = i;
        }
    }

    bool ok;
    ll a, b;
    for (int i = 0; i < k; i++){
        cin >> a >> b;
        if (stations.find(a) == stations.end()){
            ok = false;
        }
        else if (stations.find(b) == stations.end()){
            ok = false;
        }
        else {
            if (stations[a].first < stations[b].second){
                ok = true;
            }
            else {
                ok = false;
            }
        }
        if (ok){
            cout << "YES\n";
        }
        else {
            cout << "NO\n";
        }
    }

    //  ================================
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);


    ll incount;
    cin >> incount;

    for (int i = 0; i < incount; i++){
        solve();
    }

}