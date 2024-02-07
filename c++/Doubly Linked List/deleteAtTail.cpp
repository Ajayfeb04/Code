#include<iostream>
using namespace std;
class Node {
    public:
    int val;
    Node* prev;
    Node* next;
    Node(int data){
        val = data;
        prev = NULL;
        next = NULL;
    }
};
class DoublyLinkedList{
    public:
    Node* head;
    Node* tail;
    DoublyLinkedList(){
        head = NULL;
        tail = NULL;
    }
    void insertAtHead(int val){
        Node* new_node = new Node(val);
        if(head==NULL){
            head = new_node;
            tail = new_node;
            return;

        }
        new_node->next = head;
        head->prev = new_node;
        head = new_node;
        return;
    }
    void deleteAtTail(){
        // if(head == NULL){
        //     return;
        // }
        Node* temp = tail;
        tail = tail->prev;
        // if(tail== NULL){
        //     head== NULL;
        // }else{
        //     tail->next = NULL;
        // }
        tail->next = NULL;
        free(temp);
        return ;
    }
    void display(){
        Node* temp = head;
        while(temp != NULL){
            cout<<temp->val<<"<->";
            temp = temp->next;
        }
        cout<<endl;
    }
};

int main(){
    DoublyLinkedList dll;
    dll.insertAtHead(1);
    dll.insertAtHead(2);
    dll.insertAtHead(3);
    dll.display();
    dll.deleteAtTail();
    dll.display();
    return 0;
}