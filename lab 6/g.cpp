#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    map<string, string> cur;   

    while (n--) {
        string a, b;
        cin >> a >> b;

        string orig = a;                 
        if (cur.count(a)) {
            orig = cur[a];               
            cur.erase(a);                
        }
        cur[b] = orig;                   
    }

    vector<pair<string, string>> res;    
    for (auto &p : cur)
        res.push_back({p.second, p.first});

    sort(res.begin(), res.end());

    cout << res.size() << "\n";
    for (auto &p : res)
        cout << p.first << " " << p.second << "\n";
    return 0;
}
