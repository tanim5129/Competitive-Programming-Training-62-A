#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    map<string, int> freq;
    
    for(int i = 0; i < n; i++) {
        string word;
        cin >> word;
        freq[word]++; // If word doesn't exist, it's created with value 0, then incremented
    }

    cout << "Word Frequencies:" << endl;
    // Iterating through the map (elements are stored in alphabetical order of keys)
    for(auto it = freq.begin(); it != freq.end(); it++) {
        cout << it->first << " : " << it->second << endl;
    }

    // Accessing a specific key
    string query;
    cin >> query;
    cout << "Frequency of '" << query << "' is: " << freq[query] << endl;

    return 0;
}
