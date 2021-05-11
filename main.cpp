// year problem

#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    //  ================================

    vector<int> cash = {1,5,10,25,100,200,500,1000,2000,5000,10000};
    int coinCashSplitter = 500;

    int val, minCoins, residue;
    minCoins = 0;
    
    cin >> val;
    residue = val;

    for (int i = cash.size() - 1; i >= 0; i--){
        int count = residue / cash[i];
        if (count){
            if (cash[i] >= coinCashSplitter){
                cout << cash[i] / 100 << " dollars: " << count << " bill";
                if (count > 1) cout << "s";
                cout << "\n";
            }
            else {
                cout << cash[i] << " cents: " << count << " coin";
                if (count > 1) cout << "s";
                cout << "\n";
            }
        }
        minCoins += count;
        residue = residue % cash[i];
    }

    cout << "total: " << minCoins << "\n";
    
    //  ================================
}