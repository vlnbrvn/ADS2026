#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<long long> a(n);
    for (auto &x : a) cin >> x;
    sort(a.begin(), a.end());

    long long best = a[1] - a[0];            
    for (int i = 1; i < n; i++)
        best = min(best, a[i] - a[i - 1]);

    for (int i = 1; i < n; i++)
        if (a[i] - a[i - 1] == best)
            cout << a[i - 1] << " " << a[i] << " ";

    cout << endl;
    return 0;
}
