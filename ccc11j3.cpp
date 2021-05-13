// 11 j3

#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    //  ================================

    int k = 2;
    int a, b, x;
    cin >> a >> b;

    while (true){
        x = a - b;
        if (x < 0){
            cout << k << "\n";
            break;
        }
        a = b;
        b = x;
        k++;
    }
    
    //  ================================
}