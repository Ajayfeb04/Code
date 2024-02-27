#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int val;
    struct Node *next; // pointing to the next node
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
    new_node->next = NULL;
    return new_node;
}

void insertAtHead(struct Node **head, int val)
{
    struct Node *new_node = createNode(val);
    new_node->next = *head;
    *head = new_node;
}

void insertAtAnyPosition(struct Node **head, int val, int pos)
{
    if (pos == 0)
    {
        insertAtHead(head, val);
        return;
    }

    struct Node *new_node = createNode(val);
    struct Node *temp = *head;
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

    insertAtHead(&head, 3);
    display(head);

    insertAtHead(&head, 2);
    display(head);

    insertAtHead(&head, 1);
    display(head);

    insertAtAnyPosition(&head, 4, 1);
    display(head);

    return 0;
}
