
#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node(int d){
        data = d;
        next = NULL;
    }
};
class Queue{
    public:
    Node* head;
    Node* tail;
    int size;
    Queue(){
        head = NULL;
        tail = NULL;
        size = 0;
    }
    void enqueue(int data){
        Node* newNode = new Node(data);
        if(head == NULL){
            //linked list is empty
            head = tail = newNode; 
            //head = newNode;
            // tail = newNode;
        }else{
            tail->next = newNode;
            tail = newNode;
        }
        size++;
    }
    void deque(){
        if(head == NULL){
            //ll is empty;
            return;
        }
        else{
            Node* oldHead = head;
            Node* newHead = head->next;
            head = newHead;
            if(head == NULL){
                tail = NULL;
            }
            delete oldHead;
            size--;
        }
    }
    int getSize(){
        return size;
    }
    bool isEmpty (){
        return head == NULL;
    }
    int front(){
        if(head == NULL){
            return -1;
        }
            return head->data;
    }
    void display(){
        Node* temp = head;
        while(temp != NULL){
            cout<<temp->data<<" ";
            temp = temp->next;
        }
        cout<<endl;
    }
};

int main (){
    Queue qu;
    qu.enqueue(10);
    qu.enqueue(20);
    qu.enqueue(30);
    qu.deque();
    qu.enqueue(40);
    qu.display();//for printing the ele of queue or below of this line loop use
    // while(not qu.isEmpty()){
    //     cout<<qu.front()<<" ";
    //     qu.deque();
    // }
    return 0;
}