#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int val;
    struct Node *next; // pointing to the next node
};

void insertAtHead(struct Node **head, int val)
{
    struct Node *new_node = (struct Node *)malloc(sizeof(struct Node));
    if (new_node == NULL)
    {
        printf("Memory allocation failed.\n");
        exit(1);
    }

    new_node->val = val;
    new_node->next = *head;
    *head = new_node;
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

void printAlternateNode(struct Node* head){
    int count = 0;
    while(head != NULL){
        if(count%2 == 0){
            printf("%d ", head->val);
        }
            count++;
            *head= *head->next;
    }
}

int main()
{
    struct Node *head = NULL;

    insertAtHead(&head, 4);
    display(head);
    insertAtHead(&head, 3);
    insertAtHead(&head, 2);
    insertAtHead(&head, 1);
    display(head);
    printAlternateNode(head);

    return 0;
}
