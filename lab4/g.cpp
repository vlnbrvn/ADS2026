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

    if(value == root -> data) 
    return root;

    if(value < root -> data) 
    root -> left = insert(root -> left, value);
    else
     root -> right = insert(root -> right, value);
     return root;
}
int best = 0;
int height(Node* root){
    if(root == nullptr) 
    return 0;

    int l = height(root -> left);
    int r = height(root -> right);
    best = max(best, l + r + 1);
    return max(l,r) + 1;
}
int main(){
    int n;
    cin >> n;
    Node* root = nullptr;
    for(int i=0; i<n; i++){
        int v;
        cin >> v;
        root = insert(root, v);
    }
    height(root);
    cout << best;
}
