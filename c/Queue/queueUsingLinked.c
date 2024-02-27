#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

struct Queue {
    struct Node* head;
    struct Node* tail;
    int size;
};

void initQueue(struct Queue* queue) {
    queue->head = NULL;
    queue->tail = NULL;
    queue->size = 0;
}

void enqueue(struct Queue* queue, int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;

    if (queue->head == NULL) {
        queue->head = queue->tail = newNode;
    } else {
        queue->tail->next = newNode;
        queue->tail = newNode;
    }

    queue->size++;
}

void dequeue(struct Queue* queue) {
    if (queue->head == NULL) {
        // Queue is empty
        return;
    } else {
        struct Node* oldHead = queue->head;
        struct Node* newHead = queue->head->next;
        queue->head = newHead;

        if (queue->head == NULL) {
            queue->tail = NULL;
        }

        free(oldHead);
        queue->size--;
    }
}

int getSize(struct Queue* queue) {
    return queue->size;
}

int isEmpty(struct Queue* queue) {
    return queue->head == NULL;
}

int front(struct Queue* queue) {
    if (queue->head == NULL) {
        return -1;
    }
    return queue->head->data;
}

void display(struct Queue* queue) {
    struct Node* temp = queue->head;
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

int main() {
    struct Queue qu;
    initQueue(&qu);

    enqueue(&qu, 10);
    enqueue(&qu, 20);
    enqueue(&qu, 30);
    dequeue(&qu);
    enqueue(&qu, 40);
    display(&qu);

    return 0;
}
