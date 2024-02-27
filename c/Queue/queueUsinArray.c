#include <stdio.h>
#include <stdlib.h>

struct Queue {
    int front;
    int back;
    int* v;
    int size;
};

void initQueue(struct Queue* qu, int capacity) {
    qu->front = -1;
    qu->back = -1;
    qu->v = (int*)malloc(capacity * sizeof(int));
    qu->size = capacity;
}

void enqueue(struct Queue* qu, int data) {
    qu->back++;
    qu->v[qu->back] = data;
    if (qu->back == 0) {
        qu->front = 0;
    }
}

void dequeue(struct Queue* qu) {
    if (qu->front == qu->back) {
        qu->front = -1;
        qu->back = -1;
    } else {
        qu->front++;
    }
}

int getFront(struct Queue* qu) {
    if (qu->front == -1) {
        return -1;
    }
    return qu->v[qu->front];
}

int isEmpty(struct Queue* qu) {
    return qu->front == -1;
}

int main() {
    struct Queue qu;
    initQueue(&qu, 100);

    enqueue(&qu, 10);
    enqueue(&qu, 20);
    enqueue(&qu, 30);
    dequeue(&qu);
    dequeue(&qu);
    enqueue(&qu, 40);

    while (!isEmpty(&qu)) {
        printf("%d ", getFront(&qu));
        dequeue(&qu);
    }

    free(qu.v);

    return 0;
}
