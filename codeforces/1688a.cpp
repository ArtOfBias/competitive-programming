// cf 1688a

typedef long long ll;

#include <bits/stdc++.h>

using namespace std;

void solve(){
    //  ================================

    ll c;
    cin >> c;

    if (c == 1){
        cout << 3;
    }
    else if ((c & (c - 1)) == 0){
        cout << c + 1;
    }
    else {
        for (ll i = 1; i < c; i += i){
            if (((i ^ c) > 0) && ((i & c) > 0)){
                cout << i;
                break;
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

    for (ll i = 0; i < c; i++){
        solve();
    }
}