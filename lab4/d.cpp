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
vector<long long> sums;

void go(Node* root, int depth){
    if(root == nullptr) return;
    if(depth == (int)sums.size()) sums.push_back(0);
    sums[depth] += root -> data;
    go(root -> left, depth +1);
    go(root -> right, depth + 1);

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
    go(root, 0);

    cout <<  sums.size() << endl;
    for(long long s : sums)
    cout << s << " ";
}
