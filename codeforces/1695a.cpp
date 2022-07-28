// cf 1695a

typedef long long ll;

#include <bits/stdc++.h>

using namespace std;

void solve(){
    //  ================================

    int h, w;
    cin >> h >> w;

    int ind = INT_MIN;
    int temp;
    int ans;
    for (int i = 1; i <= h; i++){
        for (int j = 1; j <= w; j++){
            cin >> temp;
            if (temp > ind){
                ind = temp;
                ans = max(i, h - i + 1) * max(j, w - j + 1);
            }
        }
    }
    cout << ans << "\n";

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