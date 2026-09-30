#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node* left;
    Node* right;

    Node(int value){
        data = value;
        left = nullptr;
        right = nullptr;
    }
};
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    

    vector<Node*> t(n+1);
    for(int i =1; i<=n; i++){
      t[i] = new Node(i);
    }
    for(int i=0; i<n-1; i++){
        int p, c, f;
        cin >> p >> c >> f;
        if ( f == 1) t[p] -> left = t[c];
        else t[p] -> right = t[c];
            }
            queue<Node*> q;
            q.push(t[1]);
            int best = 0;

            while(!q.empty()){
                int sz = q.size();
                best = max(best, sz);
                while(sz--){
                    Node* cur = q.front();
                    q.pop();
                    if(cur -> left) q.push(cur -> left);
                    if(cur -> right) q.push(cur-> right);
                }
            }
            cout << best;
}
