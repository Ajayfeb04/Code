#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int val;
    struct Node *next; // pointing to the next node
};

struct Node* createNode(int data)
{
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    if (newNode == NULL)
    {
        printf("Memory allocation failed\n");
        exit(1);
    }

    newNode->val = data;
    newNode->next = NULL;
    return newNode;
}

void insertAtHead(struct Node** head, int val)
{
    struct Node* new_node = createNode(val);
    new_node->next = *head;
    *head = new_node;
}

void deleteAtHead(struct Node** head)
{
    if (*head == NULL)
    {
        printf("List is empty, cannot delete from head\n");
        return;
    }

    struct Node* temp = *head;
    *head = (*head)->next;
    free(temp);
}

void deleteAtAnyPos(struct Node** head, int pos)
{
    if (pos == 0)
    {
        deleteAtHead(head);
        return;
    }

    int curr_pos = 0;
    struct Node* prev = *head;
    while (curr_pos != pos - 1)
    {
        prev = prev->next;
        curr_pos++;
    }

    // if (prev == NULL || prev->next == NULL)
    // {
    //     printf("Position out of bounds\n");
    //     return;
    // }

    struct Node* temp = prev->next;
    prev->next = prev->next->next;
    free(temp);
}

void display(struct Node* head)
{
    struct Node* temp = head;
    while (temp != NULL)
    {
        printf("%d->", temp->val);
        temp = temp->next;
    }
    printf("NULL\n");
}

int main()
{
    struct Node* head = NULL;
    insertAtHead(&head, 2);
    display(head);
    insertAtHead(&head, 1);
    display(head);
    deleteAtAnyPos(&head, 1);
    display(head);

    return 0;
}
