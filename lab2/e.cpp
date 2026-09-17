#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<long long> v(n);
    for(int i=0; i<n; i++){
        cin >> v[i];
    }

    int mid = n/2;

    bool first = true;

    for(int i=0; i<n; i++){
        if(i == mid) continue;
        if(!first) cout<< " ";
        cout << v[i];
        first = false;
    }
    cout << "\n";
    return 0;

}
