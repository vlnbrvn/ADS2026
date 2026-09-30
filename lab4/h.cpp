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

long long sum = 0;
vector<long long> res;

void go(Node* root){
    if (root == nullptr) return;
    go(root -> right);
    sum += root -> data;
    res.push_back(sum);
    go(root -> left);
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
        go(root);
        for (long long x : res)
        cout << x << " ";
    }
