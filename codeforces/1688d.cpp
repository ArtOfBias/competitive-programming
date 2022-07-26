// cf 1688d

typedef long long ll;

#include <bits/stdc++.h>

using namespace std;

void solve(){
    //  ================================

    ll n, k;
    cin >> n >> k;

    if (k < n){
        vector<ll> pfs(n + 1);

        pfs[0] = 0;
        for (int i = 1; i < n + 1; i++){
            cin >> pfs[i];
            pfs[i] = pfs[i] + pfs[i-1];
        }

        ll ms = 0;
        for (int i = 0; i < n - k + 1; i++){
            ms = max({ms, pfs[i + k] - pfs[i]});
        }

        cout << ms + (ll) (k * (k - 1) / 2) << "\n";
    }
    else {
        ll sum = 0;
        ll temp;
        for (int i = 0; i < n; i++){
            cin >> temp;
            sum += temp;
        }

        sum += (n * k - (n * (n + 1) / 2));

        cout << sum << "\n";
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