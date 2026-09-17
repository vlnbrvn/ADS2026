#include<iostream>
#include<vector>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;
        vector<char> v(n);
        for(int i=0; i< n; i++) cin >> v[i];

        int cnt[26] = {0};
        int ptr = 0;

        for(int i=0; i<n; i++){
            cnt[v[i] - 'a']++;

            while(ptr <=i && cnt[v[ptr] - 'a']>1){
                ptr++;
            }
            if(i>0) cout << ' ';
            if(ptr <= i) cout << v[ptr];
            else cout << -1;
        }
        cout << "\n";
    }

    return 0;
}
