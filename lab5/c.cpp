#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    long long m;
    cin >> n >> m;

    priority_queue<long long> pq;  
    for (int i = 0; i < n; i++) {
        long long a;
        cin >> a;
        pq.push(a);
    }

    long long ans = 0;
    for (long long i = 0; i < m; i++) {
        long long k = pq.top();
        pq.pop();
        ans += k;                 
        if (k - 1 > 0) pq.push(k - 1);
    }

    cout << ans << "\n";
    return 0;
}
