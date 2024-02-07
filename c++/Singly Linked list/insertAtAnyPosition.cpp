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
void insertAtHead(Node *&head, int val)
{
    Node *new_node = new Node(val);
    new_node->next = head;
    head = new_node;
}
void insertAtAnyPosition(Node *&head, int val, int pos)
{
    if (pos == 0)
    {
        insertAtHead(head, val);
        return;
    }
    Node *new_node = new Node(val);
    Node *temp = head;
    int current_pos = 0;
    while (current_pos != pos - 1)
    {
        temp = temp->next;
        current_pos++;
    }
    // temp is pointing to node at pos-1
    new_node->next = temp->next;
    temp->next = new_node;
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
    insertAtAnyPosition(head, 4, 1);
    display(head);

    return 0;
}