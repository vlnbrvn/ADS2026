#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    long long k;
    cin >> n >> k;

    priority_queue<long long, vector<long long>, greater<long long>> pq;
    for (int i = 0; i < n; i++) {
        long long x;
        cin >> x;
        pq.push(x);
    }

    long long ops = 0;
    while (pq.top() < k) {
        if (pq.size() < 2) {      
            cout << -1 << "\n";
            return 0;
        }
        long long a = pq.top(); pq.pop();  
        long long b = pq.top(); pq.pop();  
        pq.push(a + 2 * b);                
        ops++;
    }

    cout << ops << "\n";
    return 0;
}
