// cf 1706c

typedef long long ll;

#include <bits/stdc++.h>

using namespace std;

void solve(){
    //  ================================

    int n;

    cin >> n;

    vector<ll> h(n);

    vector<ll> cd(n);

    for (int i = 0; i < n; i++){
        cin >> h[i];
    }

    for (int i = 1; i < n - 1; i++){
        if (h[i] > max({h[i + 1], h[i - 1]})){
            cd[i] = 0;
        }
        else {
            cd[i] = max({h[i + 1], h[i - 1]}) - h[i] + 1;
        }
    }

    ll total = 0;

    if (n % 2 == 1){
        for (int i = 1; i < n; i += 2){
            total += cd[i];
        }
    }
    else {
        ll curr = 0;
        for (int i = 2; i < n; i += 2){
            total += cd[i];
            curr = total;
        }

        for (int i = 1; i < n - 1; i += 2){
            curr = curr + cd[i] - cd[i + 1];
            total = min({total, curr});
        }
    }

    cout << total << "\n";

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