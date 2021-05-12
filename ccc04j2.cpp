// 04 j2

#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    //  ================================

    int fYear, lYear, year;

    cin >> fYear >> lYear;
    year = fYear;

    while (year <= lYear){
        cout << "All positions change in year " << year << "\n";
        year += 60;
    }    
    
    //  ================================
}