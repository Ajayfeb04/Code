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

void deleteAtStart(struct DoublyLinkedList *dll) {
    if (dll->head == NULL) {
        return; // if linked list is empty
    }

    struct Node *temp = dll->head;
    if (dll->head == dll->tail) { // if doubly linked list has only one node
        dll->tail = NULL;
    } else {
        dll->head->prev = NULL;
    }

    dll->head = dll->head->next;
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

    deleteAtStart(&dll);
    display(&dll);

    return 0;
}
