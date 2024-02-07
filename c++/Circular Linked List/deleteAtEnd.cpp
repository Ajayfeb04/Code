#include <iostream>
using namespace std;
class Node{
    public:
    int val;
    Node* next;
    Node (int data){
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
        if(head==NULL){
            head = new_node;
            new_node->next = head;
            return;
        }
        Node* tail = head;
        while(tail->next != head){
            tail = tail->next;
        }
        tail->next = new_node;
        new_node->next = head;
        head = new_node;

    }
    void display(){
        Node* temp = head;
        do{
            cout<<temp->val<<"->";
            temp = temp->next;
        }while(temp != head);
        cout<<endl;

    }
    void deleteAtEnd(){
        if(head==NULL){
            return;
        }
        Node* tail= head;
        while(tail->next->next != head){
        tail = tail->next;
    }
    //here tail is pointing to the second last node
    Node* temp = tail->next;
    tail->next= head;
    free(temp);
    }
};
int main(){
    circularLinkedList cll;
    cll.insertAtHead(1);
    cll.insertAtHead(2);
    cll.insertAtHead(3);
    cll.deleteAtEnd();
    cll.display();
    return 0;
}
