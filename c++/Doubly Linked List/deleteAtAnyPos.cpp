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
    void deleteAtAnyPos( int k ){
        //assuming the pos is less than or equal to length of dll
        Node* temp = head;
        int count = 0;
        while(count != k-1){
            temp=temp->next;
            count++;
        }
        temp->prev->next = temp->next;
        temp->next->prev = temp->prev;
        free(temp);
        return;

    }
    void display(){
        Node* temp = head;
        while(temp != NULL ){
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
    dll.deleteAtAnyPos(2);
    dll.display();
    return 0;
}
