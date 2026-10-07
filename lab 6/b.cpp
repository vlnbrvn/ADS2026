#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    vector<long long> a(n), b(m);
    for (auto &x : a) cin >> x;
    for (auto &x : b) cin >> x;

    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    int i = 0, j = 0;
    while (i < n && j < m) {
        if (a[i] == b[j]) {          
            cout << a[i] << " ";
            i++;
            j++;
        }
        else if (a[i] < b[j]) i++;   
        else j++;                    
    }
    cout << endl;
    return 0;
}
