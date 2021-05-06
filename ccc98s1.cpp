// 98 s1

#include <bits/stdc++.h>

using namespace std;

int main(){
    int lineCount;
    cin >> lineCount;

    for (int i = 0; i < lineCount; i++){
        vector<string> line;
        string x;
        cin >> x;
        if (x.size() == 4) x = "****";
        line.push_back(x);
        while (cin.peek() != '\n'){
            cin >> x;
            if (x.size() == 4) x = "****";
            line.push_back(x);
        }
        for (int j = 0; j < line.size(); j++){
            cout << line[j] << " ";
        }
        cout << "\n";
    }
    
    return 0;
}