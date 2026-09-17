#include<iostream>
using namespace std;

class Node{
public:
    string data;
    Node* prev;
    Node* next;

    Node(string value){
        data = value;
        prev = nullptr;
        next = nullptr;
    }
};

int main(){
    Node* head = nullptr;
    Node* tail = nullptr;

    string s;
    while(cin >> s){
        if(s == "add_front"){
            string x;
            cin >>x;
            Node* newNode = new Node(x);
            if(head == nullptr){
                head = newNode;
                tail = newNode;
            } else{
                newNode -> next = head;
                head -> prev = newNode;
                head = newNode;
            }
            cout << "ok" << endl;
        }
        else if(s == "add_back"){
            string x;
            cin >> x;
            Node* newNode = new Node(x);
            if(head == nullptr){
                head = newNode;
                tail = newNode;
            } else{
                tail -> next = newNode;
                newNode -> prev = tail;
                tail = newNode;
            }
            cout << "ok" << endl;
        }
        else if ( s == "erase_front"){
            if(head == nullptr){
                cout << "error" << endl;
            } else{
                cout << head -> data << endl;
                head = head -> next;
                if(head == nullptr) tail = nullptr;
                else head -> prev = nullptr;
            }
        }
        else if(s == "erase_back"){
            if(tail == nullptr){
                cout << "error" << endl;
            } else{
                cout << tail -> data << endl;
                tail = tail -> prev;
                if(tail == nullptr) head = nullptr;
                else tail -> next = nullptr;
            }
        }
        else if(s == "front"){
            if(head == nullptr) cout << "error"<< endl;
            else cout << head-> data << endl;
        }
        else if ( s == "back"){
            if(tail == nullptr) cout << "error" << endl;
            else cout << tail -> data << endl;
        }
        else if(s == "clear"){
            head = nullptr;
            tail = nullptr;
            cout << "ok" << endl;
        }
        else if(s == "exit"){
            cout << "goodbye" << endl;
            break;
        }
    }
    return 0;
}
