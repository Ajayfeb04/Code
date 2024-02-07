#include <iostream>
using namespace std;
class Node
{
public:
    int val;
    Node *next; // pointing to the next node
    Node(int data)
    {
        val = data;
        next = NULL;
    }
};
void insertAtHead(Node* &head, int val)
{
    Node *new_node = new Node(val);
    new_node->next = head;
    head = new_node;
}
 void insertAtTail(Node* &head, int val){
    Node* new_node = new Node (val);
    Node* temp = head;
    while(temp->next!= NULL){
        temp=temp->next;
    }
    temp->next = new_node;  //temp has reach last node
     new_node->next=NULL;  // this line is not necessary that is auto consider new_node->next=NULL because of making own constructor                                                                      
 }
void display(Node *head)
{
    Node *temp = head;
    while (temp != NULL)   //traversal of linked list
    {
        cout << temp->val << "->";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}
int main()
{

    Node* head = NULL;
    insertAtHead(head, 4);
    // display(head);
    // insertAtHead(head, 1);
    // display(head);
    // insertAtTail(head, 3);
    // display(head);
    insertAtTail(head, 1);
    display(head);
    insertAtTail(head, 2);
    display(head);
    insertAtTail(head, 3);
    display(head);

    return 0;
}