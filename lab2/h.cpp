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

int main(){
    int n;
    cin >> n;

    Node* head = nullptr;
    Node* tail = nullptr;

    for(int i =0; i<n; i++){
        long long x;
        cin >> x;

        Node* node = new Node(x);

        if(head == nullptr){
            head = node;
            tail = node;
        } else{
            tail -> next = node;
            tail = node;
        }
    }
    long long curSum = head -> data;
    long long best = head -> data;

    Node* current = head -> next;

    while(current!= nullptr){
        if(curSum < 0){
            curSum = current -> data;
        } else{
            curSum += current -> data;
        }
        best = max(best, curSum);
        current = current -> next;
    }
    cout << best << endl;
    return 0;
}
