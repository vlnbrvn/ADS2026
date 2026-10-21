#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    string line;
    getline(cin, line); 

    while (n--) {
        getline(cin, line);
        stringstream ss(line);
        vector<string> words;
        string w;
        while (ss >> w) {
            words.push_back(w);
        }

        stable_sort(words.begin(), words.end(),
                    [](const string& a, const string& b) {
                        return a.size() < b.size();
                    });

        for (const string& x : words) {
            cout << x << " ";
        }
        cout << "\n";
    }
    return 0;
}
