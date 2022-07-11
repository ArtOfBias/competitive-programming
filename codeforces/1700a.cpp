// cf 1700a

#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    //  ================================

    long long inCount, n, m;

    cin >> inCount;

    for (int i = 0; i < inCount; i++){
        cin >> n >> m;

        cout << ((n + 1) * n / 2) * m + ((m - 1) * m / 2) << "\n";
    }

    //  ================================
}