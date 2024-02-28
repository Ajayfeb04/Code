#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int val;
    struct Node *next;
};

struct Node* createNode(int data)
{
    struct Node *new_node = (struct Node*)malloc(sizeof(struct Node));
    new_node->val = data;
    new_node->next = NULL;
    return new_node;
}

void insertAtHead(struct Node** head, int val)
{
    struct Node *new_node = createNode(val);
    new_node->next = *head;
    *head = new_node;
}

void deleteAtTail(struct Node** head)
{
    struct Node *second_last = *head;

    while (second_last->next->next != NULL)
    {
        second_last = second_last->next;
    }

    struct Node *temp = second_last->next;
    second_last->next = NULL;
    free(temp);
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

    deleteAtTail(&head);
    display(head);

    return 0;
}
