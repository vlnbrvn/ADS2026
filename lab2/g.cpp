#include<iostream>
using namespace std;

class Node{
public:
    string data;
    Node* next;

    Node(string s){
        data = s;
        next = nullptr;
    }
};

int main(){
    int n, k;
    cin >> n >> k;

    Node* head = nullptr;
    Node* tail = nullptr;

    for(int i =0; i<n; i++){
        string w;
        cin >> w;
        Node* node = new Node(w);
        if(head == nullptr){
            head = node;
            tail = node;
        }else{
            tail -> next = node;
            tail = node;
        }
    }
        if(k>0){
            Node* boundary = head;
            for(int i = 0; i<k-1; i++){
            boundary = boundary -> next;
            }
            
            Node* newHead = boundary -> next;
            tail -> next = head;
            boundary -> next = nullptr;
            head = newHead;
        }
        Node* current = head;
        while(current != nullptr){
            if(current != head) cout << ' ';
            cout << current-> data;
            current = current -> next;
        }
        cout << "\n";
       
    }
