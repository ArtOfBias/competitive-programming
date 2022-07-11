// cf 490a

typedef long long ll;
#define PB push_back

#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    //  ================================

    ll incount;
    stack<int> one, two, three;

    cin >> incount;

    int curr;

    for (int i = 1; i <= incount; i++){
        cin >> curr;
        if (curr == 1){
            one.push(i);
        }
        else if (curr == 2){
            two.push(i);
        }
        else if (curr == 3){
            three.push(i);
        }
    }

    int maxteams = min({one.size(), two.size(), three.size()});

    int a,b,c;

    printf("%d\n", maxteams);

    if (maxteams != 0){
        for (int i = 0; i < maxteams; i++){
            printf("%d %d %d\n", one.top(), two.top(), three.top());
            one.pop();
            two.pop();
            three.pop();
        }
    }



    //  ================================
}