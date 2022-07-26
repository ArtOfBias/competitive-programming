// cf 1673a

typedef long long ll;

#include <bits/stdc++.h>

using namespace std;

int value(char x){
    return tolower(x) - 'a' + 1;
}

int value(string x){
    int a;

    for (int i = 0; i < x.size(); i++){
        a += value(x[i]);
    }

    return a;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    //  ================================

    ll incount;
    cin >> incount;

    string word;

    for (int i = 0; i < incount; i++){
        cin >> word;

        if (word.size() == 1){
            cout << "Bob " << value(word) << "\n";
        }
        else {
            cout << "Alice ";
            if (word.size() % 2 == 1){
                cout << max({(value(word.substr(0, word.size() - 1)) - value(word.back())), (value(word.substr(1, word.size() - 1)) - value(word[0]))});
            }
            else {
                cout << value(word);
            }
            cout << "\n";
        }
    }

    //  ================================
}