// cf 1706a

typedef long long ll;

#include <bits/stdc++.h>

using namespace std;

void solve(){
    //  ================================

    int n, m;

    cin >> n >> m;

    string word = "";

    for (int i = 0; i < m; i++){
        word += "B";
    }

    int curr, currmin, currmax;

    for (int i = 0; i < n; i++){
        cin >> curr;
        currmin = min({curr, m + 1 - curr});
        currmax = max({curr, m + 1 - curr});

        if (word[currmin - 1] == 'B'){
            word[currmin - 1] = 'A';
        }
        else {
            word[currmax - 1] = 'A';
        }
    }

    cout << word << "\n";

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