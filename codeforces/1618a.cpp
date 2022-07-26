// cf 1618a

typedef long long ll;

#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    //  ================================

    int incount;
    cin >> incount;

    ll x, y, z;

    for (int i = 0; i < incount; i++){
        for (int j = 0; j < 4; j++){
            cin >> x;
        }

        cin >> z >> y >> x;

        cout << x - y << " " << x - z << " " << y + z - x << "\n";
    }

    //  ================================
}