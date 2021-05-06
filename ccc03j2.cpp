// 03 j2

#include <bits/stdc++.h>

using namespace std;

int main(){
    int square = 1;
    int dice;

    scanf("%d", &dice);

    while (dice != 0){
        square += dice;

        // snakes
        if (square == 54) square = 19;
        if (square == 90) square = 48;
        if (square == 99) square = 77;
        // ladders
        if (square == 9) square = 34;
        if (square == 40) square = 64;
        if (square == 67) square = 86;
        // win - 100
        if (square == 100){
            printf("You are now on square %d\n", square);
            printf("You Win!\n");
            return 0;
        }
        // over 100
        if (square > 100){
            square -= dice;
        }
        printf("You are now on square %d\n", square);

        scanf("%d", &dice);
    }
    printf("You Quit!\n");

    return 0;
}