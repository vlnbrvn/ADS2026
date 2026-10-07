#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<pair<string, string>> a(n);   
    for (int i = 0; i < n; i++) {
        string s;
        cin >> s;                        
        string key = s.substr(6, 4) + s.substr(3, 2) + s.substr(0, 2); 
        a[i] = {key, s};
    }

    sort(a.begin(), a.end());

    for (auto &p : a) cout << p.second << "\n";
    return 0;
}
