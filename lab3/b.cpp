#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<long long> a;

int countSeg(long long l, long long r){
    int hi = upper_bound(a.begin(), a.end(), r) - a.begin();
    int lo = lower_bound(a.begin() , a.end(), l) - a.begin();
    return hi - lo;
}
int main(){
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

        if(l2 <= r1 && l1 <= r2)
        cout << countSeg(min(l1,l2), max(r1,r2)) << "\n";
        else
        cout << countSeg(l1, r1) + countSeg(l2, r2) << "\n";
    }
    return 0;
}
