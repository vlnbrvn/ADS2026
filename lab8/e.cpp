#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;

int main() {
string s;
cin >> s;
int n = s.size();
const ull B = 131;
vector<ull> h(n + 1, 0), p(n + 1, 1);
for(int i=0; i<n; i++){
    h[i+1] = h[i] * B + s[i];
    p[i + 1] = p[i] * B;
}
long long ans = 0;
for(int L = 1; L <=n; L++){
    vector<ull> v;
    for(int i=0; i+L <=n; i++)
    v.push_back(h[i+L] - h[i] *p[L]);
    sort(v.begin(), v.end());
    ans+= unique(v.begin(), v.end()) - v.begin();
}
cout << ans << endl;
    return 0;
}
