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

void deleteAtAnyPos(struct DoublyLinkedList* dll, int k) {
    // assuming the pos is less than or equal to the length of dll
    struct Node* temp = dll->head;
    int count = 0;
    while (count != k - 1) {
        temp = temp->next;
        count++;
    }
    temp->prev->next = temp->next;
    temp->next->prev = temp->prev;
    free(temp);
}

void display(struct DoublyLinkedList* dll) {
    struct Node* temp = dll->head;
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

    deleteAtAnyPos(&dll, 2);
    display(&dll);

    return 0;
}
