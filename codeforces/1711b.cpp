// cf 1711b

typedef long long ll;

#include <bits/stdc++.h>

using namespace std;

void solve(){
    //  ================================

    int n, m;
    cin >> n >> m;

    vector<int> un(n);

    for (int i = 0; i < n; i++){
        cin >> un[i];
    }

    vector<int> x(m);
    vector<int> y(m);
    vector<int> count(n);

    for (int i = 0; i < m; i++){
        cin >> x[i] >> y[i];
        count[x[i] - 1]++;
        count[y[i] - 1]++;
    }

    int minx = INT_MAX;
    if (m % 2 == 0){
        minx = 0;
    }
    for (int i = 0; i < n; i++){
        if (count[i] % 2 == 1){
            minx = min(minx, un[i]);
        }
    }
    for (int i = 0; i < m; i++){
        if (count[x[i] - 1] % 2 == 0 && count[y[i] - 1] % 2 == 0){
            minx = min(minx, un[x[i] - 1] + un[y[i] - 1]);
        }
    }

    cout << minx << "\n";

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