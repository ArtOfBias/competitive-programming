// cf 1695c

typedef long long ll;

#include <bits/stdc++.h>

using namespace std;

void solve(){
    //  ================================

    int n, m;
    cin >> n >> m;

    vector<vector<int>> grid(n, vector<int>(m));
    vector<vector<int>> mn(n, vector<int>(m));
    vector<vector<int>> mx(n, vector<int>(m));


    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            cin >> grid[i][j];
        }
    }

    mn[0][0] = mx[0][0] = grid[0][0];

    for (int i = 1; i < n; i++){
        mn[i][0] = mx[i][0] = grid[i][0] + mx[i - 1][0];
    }

    for (int i = 1; i < m; i++){
        mn[0][i] = mx[0][i] = grid[0][i] + mx[0][i - 1];
    }
    
    for (int i = 1; i < n; i++){
        for (int j = 1; j < m; j++){
            mn[i][j] = grid[i][j] + min(mn[i - 1][j], mn[i][j - 1]);
            mx[i][j] = grid[i][j] + max(mx[i - 1][j], mx[i][j - 1]);
        }
    }

    if (!((m + n) % 2) || mn[n - 1][m - 1] > 0 || mx[n - 1][m - 1] < 0){
        cout << "NO\n";
    }
    else {
        cout << "YES\n";
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