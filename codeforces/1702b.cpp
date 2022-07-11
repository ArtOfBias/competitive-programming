// cf 1702b

typedef long long ll;

#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    //  ================================

    ll incount;
    cin >> incount;

    string curr;
    vector<char> currlist;
    int currcount = 0;
    int currtotal = 0;

    for (ll i = 0; i < incount; i++){
        cin >> curr;

        for (int j = 0; j < curr.size(); j++){
            if (currcount < 3){
                if (find(currlist.begin(), currlist.end(), curr[j]) == currlist.end()){
                    currlist.push_back(curr[j]);
                    currcount++;

                    if (currcount == 3){
                        currtotal++;
                    }
                }
            }
            else {
                if (find(currlist.begin(), currlist.end(), curr[j]) == currlist.end()){
                    currcount = 1;
                    currlist.clear();
                    currlist.push_back(curr[j]);
                }
            }
        }
        if (currcount != 3){
            currtotal++;
        }

        cout << currtotal << "\n";

        currtotal = 0;
        currcount = 0;
        currlist.clear();
    }

    //  ================================
}