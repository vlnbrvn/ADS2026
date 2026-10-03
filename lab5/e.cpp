#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int q, k;
    cin >> q >> k;

   
    priority_queue<long long, vector<long long>, greater<long long>> pq;
    long long sum = 0;

    while (q--) {
        string cmd;
        cin >> cmd;
        if (cmd == "insert") {
            long long x;
            cin >> x;
            pq.push(x);
            sum += x;
            if ((int)pq.size() > k) {
                sum -= pq.top();
                pq.pop();
            }
        } else {
            cout << sum << "\n";
        }
    }
    return 0;
}
