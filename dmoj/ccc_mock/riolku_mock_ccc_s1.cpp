#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, c, v;
    scanf("%d %d %d", &n, &c, &v);

    char s[n];
    scanf("%s", s);

    string vowels = "aeiouy";
    string consonants = "bcdfghjklmnpqrstvwxyz";

    int varr[n];
    for (int i = 0; i < n; i++){
        if (vowels.find(s[i]) != string::npos){
            varr[i] = 1;
        }
        else{
            varr[i] = -n;
        }
    }
    int vbest = 0, vsum = 0;
    for (int k = 0; k < n; k++) {
        vsum = max(varr[k], vsum + varr[k]);
        vbest = max(vbest, vsum);
    }
    if (vbest > v){
        printf("NO\n");
        return 0;
    }


    int carr[n];
    for (int i = 0; i < n; i++){
        if (consonants.find(s[i]) != string::npos){
            carr[i] = 1;
        }
        else{
            carr[i] = -n;
        }
    }
    int cbest = 0, csum = 0;
    for (int k = 0; k < n; k++) {
        csum = max(carr[k], csum + carr[k]);
        cbest = max(cbest, csum);
    }
    if (cbest > c){
        printf("NO\n");
        return 0;
    }

    printf("YES\n");

    return 0;
}
