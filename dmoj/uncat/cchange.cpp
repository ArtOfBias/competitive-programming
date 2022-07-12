// cchange

typedef long long ll;

#include <bits/stdc++.h>

using namespace std;

vector<ll> denoms;
map<ll, int> dpval;
ll x, n;

int dp(ll x){
    if (dpval.find(x) != dpval.end()){
        return dpval[x];
    }
    else {
        if (x == 0){
            dpval[0] = 0;
            return 0;
        }
        else {
            int best = x + 1;
            for (int i = 0; i < n; i++){
                if (x - denoms[i] >= 0){
                    if (1 + dp(x - denoms[i]) < best){
                        best = 1 + dp(x - denoms[i]);
                    }
                }
            }

            dpval[x] = best;
            return best;
        }
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    //  ================================

    ll temp;
    cin >> x >> n;


    for (int i = 0; i < n; i++){
        cin >> temp;
        denoms.push_back(temp);
    }

    cout << dp(x);

    //  ================================
}