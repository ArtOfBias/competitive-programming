// cf 1711a

typedef long long ll;

#include <bits/stdc++.h>

using namespace std;

void solve(){
    //  ================================

    ll x;
    cin >> x;

    if (x % 2 == 0){
        for (int i = 0; i < x; i++){
            if (i % 2 == 0){
                cout << i + 2 << " ";
            }
            else {
                cout << i << " ";
            }
        }
    }
    else {
        cout << 1 << " ";
        for (int i = 1; i < x; i++){
            if (i % 2 == 1){
                cout << i + 2 << " ";
            }
            else {
                cout << i << " ";
            }
        }
    }
    cout << "\n";

    //  ================================
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll c;
    cin >> c;

    while (c--){
        solve();
    }
}