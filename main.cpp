// 96 s2

#include <bits/stdc++.h>

typedef unsigned long long ull;

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // ================================

    int numberCount;
    cin >> numberCount;

    for (int i = 0; i < numberCount; i++){
        ull originalNumber, currentNumber;
        cin >> originalNumber;
        currentNumber = originalNumber;

        while (to_string(currentNumber).size() >= 2){
            cout << currentNumber << "\n";
            int residue = currentNumber % 10;
            currentNumber /= 10;
            currentNumber -= residue;
        }

        if (currentNumber % 11 == 0){
            printf("The number %llu is divisible by 11.\n\n", originalNumber);
        }
        else {
            printf("The number %llu is not divisible by 11.\n\n", originalNumber);
        }
    }

    // ================================

    return 0;
}