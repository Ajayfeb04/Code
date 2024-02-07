#include<iostream>
using namespace std;
class Node{
    public:
    int val;
    Node* next;
    Node(int data){
        val = data;
        next = NULL;
    }
};
class circularLinkedList{
        public:
        Node* head;
         circularLinkedList(){
            head = NULL;
         }

void insertAtHead(int val){
    Node* new_node = new Node(val);
        if(head == NULL){
            head = new_node;
            new_node->next = head; //in circular linked list this line represent tail
            return;
        }
        Node* tail = head;
        while(tail->next != head){
            tail = tail->next;
        }
        //now tail is pointed to the last node
        tail->next = new_node;
        new_node->next = head;
        head = new_node;
    }
    void insertAtEnd(int val){
        Node* new_node = new Node(val);
        if(head == NULL){
            head = new_node;
            new_node->next = head;
            return;
        }
        Node* tail = head;
        while(tail->next != head){
            tail = tail->next;
        }
        //here tail will be pointing to last node
        tail->next = new_node;
        new_node->next = head;
    }

    void display(){
    Node* temp = head;
    do{
        cout<<temp->val<<"->";
        temp = temp->next;
    }
    while(temp != head);
    cout<<endl;
}
};
int main(){
    circularLinkedList cll;
    cll.insertAtHead(3);
    cll.insertAtHead(2);
    cll.insertAtHead(1);
    cll.display();
    cll.insertAtEnd(4);
    cll.display();
    return 0;
}