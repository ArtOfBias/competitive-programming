// cf 1706b

typedef long long ll;

#include <bits/stdc++.h>

using namespace std;

void solve(){
    //  ================================

    int n;

    cin >> n;

    vector<vector<int>> indices(n);

    int curr;

    for (int i = 0; i < n; i++){
        cin >> curr;

        indices[curr - 1].push_back(i);
    }

    int total = 0;
    int currindice;
    for (int i = 0; i < n; i++){
        if (!indices[i].empty()){
            currindice = indices[i][0];
            total++;

            for (int j = 0; j < indices[i].size(); j++){
                if ((indices[i][j] - currindice) % 2 == 1){
                    currindice = indices[i][j];
                    total++;
                }
            }
        }

        cout << total << " ";
        total = 0;
    }

    cout << "\n";

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