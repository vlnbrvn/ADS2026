#include<iostream>
using namespace std;

class Node{
public:
     int data;
     Node* next;

     Node(int value){
        data = value;
        next = nullptr;
     }
};

Node* readlist(){
    int n;
    cin >> n;

    Node* head = nullptr;
    Node* tail = nullptr;

    for(int i=0; i<n; i++){
        int x;
        cin >> x;

        Node* newNode = new Node(x);

        if(head == nullptr){
            head = newNode;
            tail = newNode;
        } else{
            tail -> next = newNode;
            tail = newNode;
        }
    }
    return head;
}
int main(){
    Node* a = readlist();
    Node* b = readlist();

    Node* head = nullptr;
    Node** t = &head;

    while(a && b){
        if (a -> data <= b -> data){
            *t =a; a= a-> next;
        } else{
            *t = b; b = b-> next;
        } t = &(*t) -> next;
    }
    *t = a ? a:b;

    for(Node* p=head; p; p=p-> next)
    cout << p -> data << (p-> next ? " " : " ");
    cout << endl;

    return 0;
}
