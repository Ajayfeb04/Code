#include<iostream>
#include<limits.h>
using namespace std;
class Node{
    public:
    int data; 
    Node* next;
    Node (int d){
        data = d;
        next = NULL;
    }
};

class Stack {
    Node* head;
    int capacity;
    int currSize;
    public:
    Stack(int c){
        capacity = c;
        currSize = 0;
        head = NULL;
    }
    bool isEmpty(){
        return head == NULL;
    }
    bool isFull(){
        return currSize == capacity;
    }
    void push(int data){
        if(currSize == capacity){
            cout<<"Overflow\n";
            return;
        }
        Node* new_node = new Node(data);
        new_node->next = head;
        head = new_node;
        currSize++;
    }
    // int  pop(){
    //     if (head == NULL){
    //         cout<<"Underflow\n";
    //         return INT_MIN;
    //     }
    //     Node* new_head = head->next;
    //     Node* tobeRemoved = head;
    //     int result = tobeRemoved->data;
    //     // free (tobeRemoved);
    //     head = new_head;
    //     return result;
    // }

    // int size(){
    //     return currSize;
    // }
void  pop(){
        if (head == NULL){
            cout<<"Underflow\n";
            return ;
        }
        Node* temp = head;
        head = head->next;
        free(temp);
        return;
    }

    int getTop (){
        if(head == NULL){
            cout<<"Underflow\n";
            return INT_MIN;
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

int main(){
    Stack st(5);
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    // st.size();
    st.push(5);
    st.display();
    st.pop();
    st.pop();
    st.pop();
    // st.display();
    cout << st.getTop() << endl;
    st.push(6);
    // cout << st.getTop() << endl;
    return 0;
}