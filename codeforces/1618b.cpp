// cf 1618b

typedef long long ll;

#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    //  ================================

    int incount;
    cin >> incount;

    int length;
    string word, bigram;

    for (int i = 0; i < incount; i++){
        cin >> length;
        cin >> word;
        for (int j = 0; j < length - 3; j++){
            cin >> bigram;

            if (bigram[0] != word.back()){
                word.push_back(bigram[0]);
                word.push_back(bigram[1]);
            }
            else {
                word.push_back(bigram[1]);
            }
        }

        if (word.length() != length){
            word.push_back('a');
        }

        cout << word << "\n";

        word = "";
        bigram = "";
    }

    //  ================================
}