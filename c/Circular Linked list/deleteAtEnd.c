#include <stdio.h>
#include <stdlib.h>

struct Node {
    int val;
    struct Node *next;
};

struct CircularLinkedList {
    struct Node *head;
};

struct Node *createNode(int data) {
    struct Node *new_node = (struct Node *)malloc(sizeof(struct Node));
    new_node->val = data;
    new_node->next = NULL;
    return new_node;
}

void insertAtHead(struct CircularLinkedList *cll, int val) {
    struct Node *new_node = createNode(val);
    if (cll->head == NULL) {
        cll->head = new_node;
        new_node->next = cll->head;
        return;
    }
    struct Node *tail = cll->head;
    while (tail->next != cll->head) {
        tail = tail->next;
    }
    tail->next = new_node;
    new_node->next = cll->head;
    cll->head = new_node;
}

void display(struct CircularLinkedList *cll) {
    struct Node *temp = cll->head;
    do {
        printf("%d->", temp->val);
        temp = temp->next;
    } while (temp != cll->head);
    printf("\n");
}

void deleteAtEnd(struct CircularLinkedList *cll) {
    if (cll->head == NULL) {
        return;
    }
    struct Node *tail = cll->head;
    while (tail->next->next != cll->head) {
        tail = tail->next;
    }

    // here tail is pointing to the second last node
    struct Node *temp = tail->next;
    tail->next = cll->head;
    free(temp);
}

int main() {
    struct CircularLinkedList cll;
    cll.head = NULL;

    insertAtHead(&cll, 1);
    insertAtHead(&cll, 2);
    insertAtHead(&cll, 3);
    deleteAtEnd(&cll);
    display(&cll);

    return 0;
}
