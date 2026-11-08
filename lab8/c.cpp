#include <bits/stdc++.h>
using namespace std;

int main() {
   int n;
   while(cin >> n && n){
    vector<string> p(n);
    for(auto &x : p) cin >> x;
    string t;
    cin >> t;

    vector<int> cnt(n, 0);
    int best = 0;
    for(int i=0; i<n; i++){
        size_t pos = t.find(p[i]);
        while(pos != string :: npos){
            cnt[i]++;
            pos = t.find(p[i], pos + 1);
        }
        best = max(best, cnt[i]);
    }
    cout << best << "\n";
    for(int i=0; i<n; i++)
    if(cnt[i] == best) cout <<p[i] << "\n";
   }
    return 0;
}
