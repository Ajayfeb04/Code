#include <iostream>
using namespace std;
class Node
{
public:
    int val;
    Node *next;
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
void deleteAtTail(Node* &head)
{
    Node *second_last = head;
    while (second_last->next->next != NULL)
    {
        second_last = second_last->next;
    }
    // now second_last point to second_last node
    Node *temp = second_last->next; // which is node to be deleted
    second_last->next = NULL;
    free(temp);
}
void display(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->val << "->";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}
int main()
{
    Node *head = NULL;
    insertAtHead(head, 3);
    display(head);
    insertAtHead(head, 2);
    display(head);
    insertAtHead(head, 1);
    display(head);
    deleteAtTail(head);
    display(head);
    return 0;
}
