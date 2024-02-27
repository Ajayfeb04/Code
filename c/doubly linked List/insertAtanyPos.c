#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int val;
    struct Node *next;
    struct Node *prev;
};

struct DoublyLinkedList
{
    struct Node *head;
    struct Node *tail;
};

struct Node *createNode(int data)
{
    struct Node *new_node = (struct Node *)malloc(sizeof(struct Node));
    if (new_node == NULL)
    {
        printf("Memory allocation failed.\n");
        exit(1);
    }

    new_node->val = data;
    new_node->prev = NULL;
    new_node->next = NULL;
    return new_node;
}

void display(struct Node *head)
{
    struct Node *temp = head;
    while (temp != NULL)
    {
        printf("%d<->", temp->val);
        temp = temp->next;
    }
    printf("\n");
}

void insertAtHead(struct DoublyLinkedList *dll, int val)
{
    struct Node *new_node = createNode(val);
    if (dll->head == NULL)
    {
        dll->head = new_node;
        dll->tail = new_node;
        return;
    }

    new_node->next = dll->head;
    dll->head->prev = new_node;
    dll->head = new_node;
}

void insertAtAnyPos(struct DoublyLinkedList *dll, int val, int k)
{
    //assuming k is less or equal to the length of the doubly linked list
    struct Node *temp = dll->head;
    //assume 1 base indexing
    int count = 1;
    while (count < (k - 1))
    {
        temp = temp->next;
        count++;
    }
    //now temp will be pointing to the node at k-1 position
    struct Node *new_node = createNode(val);
    new_node->next = temp->next;
    temp->next = new_node;
    new_node->prev = temp;
    new_node->next->prev = new_node;
}

int main()
{
    struct DoublyLinkedList dll;
    dll.head = NULL;
    dll.tail = NULL;

    insertAtHead(&dll, 1);
    insertAtHead(&dll, 2);
    insertAtHead(&dll, 3);
    insertAtAnyPos(&dll, 4, 3);
    display(dll.head);

    return 0;
}
