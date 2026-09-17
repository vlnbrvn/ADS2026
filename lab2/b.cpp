#include<iostream>
using namespace std;

class Node{
public:
    int data;
    Node* next;

    Node (int value){
        data = value;
        next = nullptr;
    }
};
int main(){
    int n;
    cin >> n;

    Node* head = nullptr;
    Node* tail = nullptr;

    for (int i=0; i<n; i++){
        int x;
        cin >> x;

        Node* newNode = new Node(x);

        if(head == nullptr){
            head = newNode;
            tail = newNode;
        } else {
            tail -> next = newNode;
            tail = newNode;
        }

    }
    Node* current = head;

    while(current != nullptr){
        if(current -> next != nullptr){
        Node* nodeRemove = current->next;
        current -> next = nodeRemove -> next;
        delete nodeRemove;
    }
    current = current -> next;
}
current = head;

while(current != nullptr){
    cout << current -> data << " ";
    current = current -> next;
}
cout << endl;
return 0;
}
