#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin >> s;
    int n = s.size();

    vector<int> z(n, 0);
    for(int i = 1, l=0, r=0; i<n; i++){
        if( i < r) z[i] = min(r - i, z[i - l]);
        while (i + z[i] < n && s[z[i]] == s[i+z[i]]) z[i]++;
        if(i + z[i] > r) l = i, r = i + z[i];
    }
    int ans = 0;
    for(int L = 1; 2 * L < n; L++)
    if (z[L] >= L ) ans++;

    cout << ans << "\n";
    return 0;
