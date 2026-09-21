#include<bits/stdc++.h>
using namespace std;

vector<long long> a;

int cnt(long long l, long long r){
    if(l > r) return 0;
    return upper_bound(a.begin(), a.end(), r) - lower_bound(a.begin(), a.end(), l);
}

int main (){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, q;
    cin >> n >> q;
    a.resize(n);

for(auto &x : a) cin >> x;
sort(a.begin(), a.end());

while(q--){
    long long l1, r1, l2, r2;
    cin >> l1 >> r1 >> l2 >> r2;
    int ans = cnt(l1, r1) + cnt(l2, r2) - cnt(max(l1, l2), min(r1, r2));
    cout << ans << "\n";
}
return 0;
}
