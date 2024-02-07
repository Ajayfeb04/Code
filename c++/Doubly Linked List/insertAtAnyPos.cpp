#include <iostream>
using namespace std;
class Node{
    public:
    int val;
    Node* next;
    Node* prev;
    Node (int data){
        val = data;
        prev=NULL;
        next=NULL;
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
    void display(){
        Node* temp = head;
        while(temp != NULL ){
            cout<<temp->val<<"<->";
            temp = temp->next;
        }
        cout<<endl;
    }
    void insertAtHead(int val){
        Node* new_node = new Node(val);
        if(head == NULL){
            head = new_node;
            tail =new_node;
            return;
        }
        new_node->next= head;
        head->prev= new_node;
        head = new_node;
        return;
    }
    void insertAtAnyPos(int val, int k){
        //assuming k is less or equal to length of doubly linked list 
        Node* temp = head;
        //assume 1 base indexing 
        int count = 1;
        while(count < (k-1)){
            temp = temp->next;
            count++;
        } 
        //now temp will be pointing to the node at k-1 position
        Node* new_node = new Node(val);
        new_node->next = temp->next;
        temp->next = new_node;
        new_node->prev = temp;
        new_node->next->prev=new_node;
        return;
    }
};

int main(){
    DoublyLinkedList dll;
    dll.insertAtHead(1);
    dll.insertAtHead(2);
    dll.insertAtHead(3);
    dll.insertAtAnyPos(4,3);
    dll.display();
    return 0;
}