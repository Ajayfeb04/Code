#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int val;
    struct Node *next; // pointing to the next node
};

struct Node* createNode(int data)
{
    struct Node *new_node = (struct Node *)malloc(sizeof(struct Node));
    if (new_node == NULL)
    {
        printf("Memory allocation failed.\n");
        exit(1);
    }

    new_node->val = data;
    new_node->next = NULL;
    return new_node;
}

void insertAtHead(struct Node **head, int val)
{
    struct Node *new_node = createNode(val);
    new_node->next = *head;
    *head = new_node;
}

void insertAtTail(struct Node **head, int val)
{
    struct Node *new_node = createNode(val);
    struct Node *temp = *head;
    
    if (*head == NULL)
    {
        *head = new_node;
        return;
    }

    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    
    temp->next = new_node;
    new_node->next = NULL;
}

void display(struct Node *head)
{
    struct Node *temp = head;
    while (temp != NULL)
    {
        printf("%d->", temp->val);
        temp = temp->next;
    }
    printf("NULL\n");
}

int main()
{
    struct Node *head = NULL;

    insertAtHead(&head, 4);
    insertAtTail(&head, 1);
    display(head);
    
    insertAtTail(&head, 2);
    display(head);
    
    insertAtTail(&head, 3);
    display(head);

    return 0;
}
