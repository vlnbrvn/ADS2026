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

    if(value <= root -> data)
    root -> left = insert(root -> left, value);
    else
    root -> right = insert(root -> right, value);
    return root;
}
int size(Node* root){
    if(root == nullptr) return 0;
    return 1 + size(root -> left) + size(root -> right);
}
int main(){
    int n, x;
    cin >> n;
    Node* root = nullptr;
    for(int i=0; i<n; i++){
        int v;
        cin >> v;
        root = insert(root, v);

    }
  cin >> x;

  Node* current = root;
  while(current -> data != x){
    if(x < current -> data) current = current -> left;
    else current = current -> right;
  }
  cout << size(current);
}
