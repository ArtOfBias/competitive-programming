// 14 s3

#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // ================================

    int testCount;
    cin >> testCount;

    for (int currentTest = 0; currentTest < testCount; currentTest++){
        int carCount;
        int nextCar = 1;
        
        vector<int> cars;
        stack<int> branch;
        branch.push(0);
        
        cin >> carCount;

        for (int i = 0; i < carCount; i++){
            int currentCar;
            cin >> currentCar;
            cars.push_back(currentCar);
        }

        for (int i = carCount - 1; i >= 0; i--){
            if (cars[i] == nextCar){
                nextCar++;
            }
            else if (branch.top() == nextCar){
                nextCar++;
                branch.pop();
            }
            else {
                branch.push(cars[i]);
            }
        }

        while (branch.top() == nextCar){
            nextCar++;
            branch.pop();
        }

        if (nextCar == carCount + 1) cout << "Y\n";
        else cout << "N\n";
    }
    
    // ================================
}