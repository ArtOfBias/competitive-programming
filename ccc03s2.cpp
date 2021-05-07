// 03 s2

#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // ================================

    const string vowels = "aeiou";

    string verseCount;
    getline(cin, verseCount);

    int intVerseCount = stoi(verseCount);
    
    for(int i = 0; i < intVerseCount; i++){
        vector<string> verse;
        for (int j = 0; j < 4; j++){
            string line, word, syllable;
            getline(cin, line);

            // gets last word
            auto lastSpace = line.rfind(' ');
            if (lastSpace != string::npos){
                word = line.substr(lastSpace + 1);
            }
            else {
                word = line;
            }
            for(int i = 0; i < word.size(); i++){
                word[i] = tolower(word[i]);
            }

            // gets last syllable
            auto lastPlace = word.find_last_of("aeiou");
            if (lastPlace != string::npos){
                syllable = word.substr(lastPlace);
            }
            else {
                syllable = word;
            }

            verse.push_back(syllable);         
        }
        
        if (verse[0] == verse [2]){
            if (verse[1] == verse[3]){
                if (verse[0] == verse[1]) printf("perfect\n");
                else printf("cross\n");               
            }
            else printf("free\n");
        }
        else if (verse[0] == verse[1] && verse[2] == verse[3]) printf("even\n");

        else if (verse[0] == verse[3] && verse[1] == verse[2]) printf("shell\n");

        else printf("free\n");
    }
    
    // ================================
    return 0;
}