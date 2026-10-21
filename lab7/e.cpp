#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    scanf("%d", &n);
    vector<long long> a(n), res(n);
    for(auto &x : a) scanf("%lld", &x);

    int l=0, r = n - 1;
    for(int k = n - 1; k>= 0; k--){
        if(llabs(a[l]) > llabs(a[r])){
            res[k] = a[l]  * a[l];
            l++;
        } else {
            res[k] = a[r] * a[r];
            r--;
        }
    }
    for(int i = 0; i < n; i++)
    printf("%lld ", res[i]);
    printf("\n");
}
