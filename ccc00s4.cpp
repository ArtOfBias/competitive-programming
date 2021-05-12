// 00 s4

#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    //  ================================

    int length, clubCount;
    cin >> length >> clubCount;

    int clubs[clubCount];
    for (int i = 0; i < clubCount; i++){
        cin >> clubs[i];
    }
    int value[length];
    value[0] = 0;

    for (int i = 1; i <= length; i++){
        value[i] = 1000000000;
        for (auto club : clubs){
            if (i - club >= 0){
                value[i] = min(value[i], value[i - club] + 1);
            }
        }
    }

    if (value[length] != 1000000000) cout << "Roberta wins in " << value[length] << " strokes.\n";
    else cout << "Roberta acknowledges defeat.\n";
    
    //  ================================
}