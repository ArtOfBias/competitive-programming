// cchange bottom up

typedef long long ll;

#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    //  ================================

    ll x, n;
    cin >> x >> n;
    vector<ll> denoms(n);


    for (int i = 0; i < n; i++){
        cin >> denoms[i];
    }

    vector<ll> dp(x + 1);

    dp[0] = 0;
    for (int i = 1; i < x + 1; i++){
        dp[i] = x + 1;
    }

    for (int i = 1; i < x + 1; i++){
        for (int j = 0; j < n; j++){
            if (i - denoms[j] >= 0){
                dp[i] = min({dp[i], dp[i-denoms[j]] + 1});
            }
        }
    }

    if (dp[x] != x + 1){
        cout << dp[x];
    }


    //  ================================
}