#include <stdio.h>
#include <stdlib.h>

struct Node {
    int val;
    struct Node* next;
    struct Node* prev;
};

struct DoublyLinkedList {
    struct Node* head;
    struct Node* tail;
};

struct Node* createNode(int data) {
    struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
    new_node->val = data;
    new_node->prev = NULL;
    new_node->next = NULL;
    return new_node;
}

void display(struct DoublyLinkedList* dll) {
    struct Node* temp = dll->head;
    while (temp != NULL) {
        printf("%d<->", temp->val);
        temp = temp->next;
    }
    printf("\n");
}

void insertAtHead(struct DoublyLinkedList* dll, int val) {
    struct Node* new_node = createNode(val);
    if (dll->head == NULL) {
        dll->head = new_node;
        dll->tail = new_node;
        return;
    }
    new_node->next = dll->head;
    dll->head->prev = new_node;
    dll->head = new_node;
}

void insertAtEnd(struct DoublyLinkedList* dll, int val) {
    struct Node* new_node = createNode(val);
    if (dll->tail == NULL) {
        dll->head = new_node;
        dll->tail = new_node;
        return;
    }
    dll->tail->next = new_node;
    new_node->prev = dll->tail;
    dll->tail = new_node;
}

int main() {
    struct DoublyLinkedList dll;
    dll.head = NULL;
    dll.tail = NULL;

    insertAtEnd(&dll, 1);
    insertAtEnd(&dll, 2);
    insertAtEnd(&dll, 3);
    display(&dll);

    return 0;
}
