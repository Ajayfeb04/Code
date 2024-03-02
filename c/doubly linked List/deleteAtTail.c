#include <stdio.h>
#include <stdlib.h>

struct Node {
    int val;
    struct Node *prev;
    struct Node *next;
};

struct DoublyLinkedList {
    struct Node *head;
    struct Node *tail;
};

struct Node *createNode(int data) {
    struct Node *new_node = (struct Node *)malloc(sizeof(struct Node));
    new_node->val = data;
    new_node->prev = NULL;
    new_node->next = NULL;
    return new_node;
}

void insertAtHead(struct DoublyLinkedList *dll, int val) {
    struct Node *new_node = createNode(val);
    if (dll->head == NULL) {
        dll->head = new_node;
        dll->tail = new_node;
        return;
    }
    new_node->next = dll->head;
    dll->head->prev = new_node;
    dll->head = new_node;
}

void deleteAtTail(struct DoublyLinkedList *dll) {
    if (dll->tail == NULL) {
        return;
    }
    struct Node *second_last = dll->head;

    while (second_last->next->next != NULL)
    {
        second_last = second_last->next;
    }

    struct Node *temp = second_last->next;
    second_last->next = NULL;
    free(temp);

}

void display(struct DoublyLinkedList *dll) {
    struct Node *temp = dll->head;
    while (temp != NULL) {
        printf("%d<->", temp->val);
        temp = temp->next;
    }
    printf("\n");
}

int main() {
    struct DoublyLinkedList dll;
    dll.head = NULL;
    dll.tail = NULL;

    insertAtHead(&dll, 1);
    insertAtHead(&dll, 2);
    insertAtHead(&dll, 3);
    display(&dll);

    deleteAtTail(&dll);
    deleteAtTail(&dll);
    display(&dll);

    return 0;
}
