// 96 s2

#include <bits/stdc++.h>

typedef unsigned long long ull;

using namespace std;

vector<int> subtract_pos(vector<int> v, int pos, int s);
void printv(vector<int> v);

vector<int> subtract_pos(vector<int> v, int pos, int s){
    if (v[pos] >= s){
        v[pos] -= s;
        return v;
    } else {
        int borrow = ceil( (float)(s - v[pos]) / (float)10 );
        v[pos] = borrow * 10 + v[pos] - s;
        return subtract_pos(v, pos - 1, borrow);
    }
}

void printv(vector<int> v){
    for (int i = 0; i < v.size(); i++) cout << v[i];
    cout << "\n";
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // ================================

    int numberCount;
    cin >> numberCount;

    for (int i = 0; i < numberCount; i++){
        string originalNumber;
        vector<int> currentNumber;

        cin >> originalNumber;
        cout << originalNumber << "\n";
        for (int i = 0; i < originalNumber.size(); i++){
            int digit = originalNumber[i] - '0';
            currentNumber.push_back(digit);
        }
        while (currentNumber.size() > 2){
            int sub = currentNumber.back();
            currentNumber.pop_back();
            currentNumber = subtract_pos(currentNumber, currentNumber.size() - 1, sub);
            printv(currentNumber);
        }

        if (currentNumber[0] == currentNumber[1]){
            cout << "The number " << originalNumber << " is divisible by 11.\n";
        }
        else {
            cout << "The number " << originalNumber << " is not divisible by 11.\n";
        }

        if (i != numberCount - 1){
            cout << "\n";
        }
    }

    // ================================

    return 0;
}