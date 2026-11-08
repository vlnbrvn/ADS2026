
#include <bits/stdc++.h>
using namespace std;

int main() {
   string s;
   int q;
   cin >> s >> q;
   while(q--){
    int l, r;
    cin >> l >> r;
    string t = s.substr(l - 1, r - l + 1);
    int cnt = 0;
    size_t pos = s.find(t);
    while(pos != string::npos){
        cnt++;
        pos = s.find(t, pos + 1);
    }
    cout << cnt << "\n";
   }
    return 0;
}
