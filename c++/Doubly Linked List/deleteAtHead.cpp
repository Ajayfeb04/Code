#include <iostream>
using namespace std;
class Node
{
public:
    int val;
    Node *prev;
    Node *next;
    Node(int data)
    { // constructor
        val = data;
        prev = NULL;
        next = NULL;
    }
};
class DoublyLinkedList
{ // create class for doubly linked list
public:
    Node *head;
    Node *tail;
    DoublyLinkedList()
    { // constructor
        head = NULL;
        tail = NULL;
    }
    void insertAtHead(int val)
    {
        Node *new_node = new Node(val);
        if (head == NULL)
        {
            head = new_node;
            tail = new_node;
            return;
        }
        new_node->next = head;
        head->prev = new_node;
        head = new_node;
        return;
    }
    void deleteAtStart()
    {
        if (head == NULL) // if linked list is empty
        {
            return;
        }
        Node *temp = head;
        if (head == NULL) // if doubly linked list has only one node
        {
            tail = NULL;
        }
        else
        {
            head->prev = NULL;
        }
        free(temp); //or delete temp;
        return;
    }
    void display()
    {
        Node *temp = head;
        while (temp != NULL)
        {
            cout << temp->val << "<->";
            temp = temp->next;
        }
        cout << endl;
    }
};

int main()
{
    DoublyLinkedList dll;
    dll.insertAtHead(1);
    dll.insertAtHead(2);
    dll.insertAtHead(3);
    dll.display();
    dll.deleteAtStart();
    dll.display();
    return 0;
}