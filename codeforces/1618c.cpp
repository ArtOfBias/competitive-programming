// cf 1618c

typedef long long ll;

#include <bits/stdc++.h>

using namespace std;

ll gcd(ll a, ll b)
{
    if (a == 0){
        return b;
    }

    return gcd(b % a, a);
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    //  ================================

    int incount;
    cin >> incount;

    int currcount;
    ll gcdodd, gcdeven;
    vector<ll> inputs;
    ll temp;

    for (int i = 0; i < incount; i++){
        cin >> currcount;

        for (int j = 0; j < currcount; j++){
            cin >> temp;
            inputs.push_back(temp);
        }

        gcdeven = inputs[0];
        gcdodd = inputs[1];
        for (int j = 0; j <= currcount + (currcount % 2) - 2; j += 2){
            gcdeven = gcd(gcdeven, inputs[j]);
        }

        for (int j = 1; j <= currcount - (currcount % 2) - 1; j += 2){
            gcdodd = gcd(gcdodd, inputs[j]);
        }

        bool flag = false;

        for (int j = 1; j <= currcount - (currcount % 2) - 1; j += 2){
            if (inputs[j] % gcdeven == 0){
                flag = true;
                break;
            }
        }

        if (!flag){
            cout << gcdeven << "\n";
        }
        else {
            for (int j = 0; j <= currcount + (currcount % 2) - 2; j += 2){
                if (inputs[j] % gcdodd == 0){
                    cout << 0 << "\n";
                    flag = false;
                    break;
                }
            }
            if (flag){
                cout << gcdodd << "\n";
            }
        }

        inputs.clear();
    }

    //  ================================
}