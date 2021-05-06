// 02 s2

#include <bits/stdc++.h>

using namespace std;

int gcd(int a = 1, int b = 1){
    if(a == b){
        return a;
    }
    if(a <= b){
        int temp = b % a;
        if(temp == 0){
            return a;
        }
        b = a;
        a = temp;
        return gcd(a,b);
    }
    if(a >= b){
        int temp = a % b;
        if(temp == 0){
            return b;
        }
        a = b;
        b = temp;
        return gcd(a,b);
    }
    return 0;
}

int main(){
    int x, y;
    scanf("%d %d", &x, &y);

    // zero
    if (x == 0){
        printf("0\n");
        return 0;
    }

    // integer
    if (x % y == 0){
        printf("%d\n", x / y);
        return 0;
    }

    // x > y
    if (x > y){
        int intpart = x / y;
        int remainder = x % y;
        int cd = gcd(remainder,y);
        int numer = remainder / cd;
        int denom = y / cd;
        printf("%d %d/%d\n", intpart, numer, denom);
        return 0;
    }

    // x < y
    if (x < y){
        int cd = gcd(x,y);
        int numer = x / cd;
        int denom = y / cd;
        printf("%d/%d\n", numer, denom);
        return 0;
    }

    return 0;
}