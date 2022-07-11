// cf 1581a

typedef long long ll;

#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    //  ================================

    ll incount;
    stack<int> one, two, three;

    cin >> incount;

    ll curr;

    ll factorial = 1;

    for (ll i = 0; i < incount; i++){
        cin >> curr;
        for (ll j = 3; j <= (curr * 2); j++){
            factorial = (factorial * j) % 1000000007;
        }

        cout << (ll) (factorial % 1000000007) << "\n";

        factorial = 1;
    }

    //  ================================
}