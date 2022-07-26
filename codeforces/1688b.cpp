// cf 1688b

typedef long long ll;

#include <bits/stdc++.h>

using namespace std;

void solve(){
    //  ================================

    ll c;
    cin >> c;

    ll t;
    ll m = (ll) log2(LLONG_MAX);
        ll f = 0;
    for (int i = 0; i < c; i++){
        cin >> t;

        if (t % 2 == 0){
            f++;
            for (ll j = 1; j <= t; j += j){
                if ((t - j) == (t ^ j)){
                    m = min({m, (ll) (log2(j))});
                }
            }
        }
    }

    if (f == 0){
        cout << 0 << "\n";
    }
    else if ((c - f) > 0){
        cout << f << "\n";
    }
    else {
        cout << f + m - 1 << "\n";
    }

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