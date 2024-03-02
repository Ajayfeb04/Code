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

void deleteAtHead(struct Node** head)
{
    struct Node *temp = *head;
    *head = (*head)->next;
    free(temp);
}
void deleteLinkedList(struct Node** head){
    struct Node* temp = *head;
    struct Node* next;
    while (temp != NULL){
        next = temp->next;
        free(temp);
        temp = next;
    }
    *head = NULL;
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

    deleteAtHead(&head);
    display(head);
    deleteLinkedList(&head);
    display(head);

    return 0;
}
