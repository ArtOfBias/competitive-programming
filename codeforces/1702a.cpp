// cf 1702a

typedef long long ll;

#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    //  ================================

    ll incount;
    cin >> incount;

    ll curr;

    string currstr;

    for (ll i = 0; i < incount; i++){
        cin >> curr;

        currstr = to_string(curr);

        printf("%lld\n", (ll) (curr - (pow(10, (currstr.size()-1)))));

    }

    //  ================================
}