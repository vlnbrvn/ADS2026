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
    if(root == nullptr) return new Node(value);
    if(value <= root -> data)
    root -> left = insert(root -> left, value);
    else root -> right = insert(root -> right , value);
    return root;
}

int leaves(Node* root){
    if(root == nullptr) return 0;
    if (root -> left == nullptr && root -> right == nullptr) return 1;
    return leaves(root -> left) + leaves(root -> right);
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
    cout << leaves(root);
}
