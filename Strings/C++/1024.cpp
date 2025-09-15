#include <bits/stdc++.h>

using namespace std;

string inverte(string word) {
    string new_word;
    for (int i = 0; i < word.size(); i++) new_word += word[word.size() - 1 - i];
    return new_word;
}

int main (void) {

    int N;
    
    cin >> N;
    cin.ignore();

    for (int i = 0; i < N; i++) {

    string word;
    
    getline(cin, word);

    for (int i = 0; i < word.size(); i++) if (word[i] >= 'A' && word[i] <= 'z') word[i] += 3;

    word = inverte(word);

    for (int i = word.size() - 1; i >= word.size()/2; i--) word[i] -= 1;

    cout << word << endl;

    }

    return 0;
}