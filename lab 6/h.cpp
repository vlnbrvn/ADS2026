#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector<char> a(n);
    for (auto &c : a) cin >> c;

    char x;
    cin >> x;

    auto it = upper_bound(a.begin(), a.end(), x);   

    if (it == a.end()) cout << a[0] << "\n";        
    else cout << *it << "\n";
    return 0;
}
