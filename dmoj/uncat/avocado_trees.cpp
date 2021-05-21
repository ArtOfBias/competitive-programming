// avocado trees

#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    //  ================================

    int n, q, h;
    scanf("%d%d%d", &n, &q, &h);

    vector<int> sums;
    sums.push_back(0);
    int best = 0, csum = 0;

    for (int i = 0; i < n; i++){
        int a, b;
        scanf("%d%d", &a, &b);
        if (a > h) b = 0;
        csum += b;
        sums.push_back(csum);
    }

    for (int i = 0; i < q; i++){
        int a, b, sum;
        scanf("%d%d", &a, &b);
        if (sums[b] - sums[a - 1] > best) best = sums[b] - sums[a - 1];
    }

    printf("%d\n", best);

    //  ================================
}