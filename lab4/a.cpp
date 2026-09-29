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
Node* insert(Node* root, int value){
    if(root == nullptr)
    return new Node(value);

    if (value <= root -> data)
    root -> left = insert(root -> left, value);
    else
    root -> right = insert(root -> right, value);
    return root;
}
int main(){
   ios::sync_with_stdio(false);
   cin.tie(nullptr);

   int n, q;
   cin >> n >> q;

   Node* root = nullptr;

   for(int i=0; i<n; i++){
    int x;
    cin >> x;
    root = insert(root, x);
   }

   while(q--){
    string s;
    cin >> s;

    Node* cur = root;

    for(char c:s){
        if(cur == nullptr)
        break;

        if(c == 'L'){
            cur = cur -> left;
        } else{
            cur = cur -> right;
        }
    }
    if(cur != nullptr)
    cout << "YES\n";
    else
    cout << "NO\n";
   }
   return 0;
}
