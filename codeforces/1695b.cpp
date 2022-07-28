// cf 1695b

typedef long long ll;

#include <bits/stdc++.h>

using namespace std;

void solve(){
    //  ================================

    int n;
    cin >> n;

    vector<int> s(2, INT_MAX);
    vector<int> si(2);

    int temp;

    for (int i = 0; i < n; i++){
        cin >> temp;

        if (temp < s[i % 2]){
            s[i % 2] = temp;
            si[i % 2] = i;
        }

    }


    string ans;
    if (n % 2 == 0){
        if (si[0] < si[1]){
            if (s[0] > s[1]){
                ans = "Mike";
            }
            else {
                ans = "Joe";
            }
        }
        else {
            if (s[1] > s[0]){
                ans = "Joe";
            }
            else {
                ans = "Mike";
            }
        }
    }
    else {
        cout << "Mike";
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