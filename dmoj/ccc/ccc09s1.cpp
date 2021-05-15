// 09 s1

#include <bits/stdc++.h>

using namespace std;

int main(){
    int lower, upper;
    cin >> lower;
    cin >> upper;

    float lowerroot = pow((float)lower, 1.0 / 6.0 );
    float upperroot = pow((float)upper, 1.0 / 6.0 );

    int lowerbound = ceil(lowerroot);
    int upperbound = floor(upperroot);

    cout << upperbound - lowerbound + 1 << "\n";
    
    return 0;
}