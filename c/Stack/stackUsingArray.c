#include<stdio.h>
#include<stdlib.h>
#include<limits.h>

struct Node {
    int data;
    struct Node* next;
};

struct Stack {
    struct Node* head;
    int capacity;
    int currSize;
};

struct Node* createNode(int d) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = d;
    newNode->next = NULL;
    return newNode;
}

struct Stack* createStack(int c) {
    struct Stack* stack = (struct Stack*)malloc(sizeof(struct Stack));
    stack->capacity = c;
    stack->currSize = 0;
    stack->head = NULL;
    return stack;
}

int isEmpty(struct Stack* stack) {
    return stack->head == NULL;
}

int isFull(struct Stack* stack) {
    return stack->currSize == stack->capacity;
}

void push(struct Stack* stack, int data) {
    if (stack->currSize == stack->capacity) {
        printf("Overflow\n");
        return;
    }
    struct Node* new_node = createNode(data);
    new_node->next = stack->head;
    stack->head = new_node;
    stack->currSize++;
}

void pop(struct Stack* stack) {
    if (stack->head == NULL) {
        printf("Underflow\n");
        return;
    }
    struct Node* temp = stack->head;
    stack->head = stack->head->next;
    free(temp);
    return;
}

int getTop(struct Stack* stack) {
    if (stack->head == NULL) {
        printf("Underflow\n");
        return INT_MIN;
    }
    return stack->head->data;
}

void display(struct Stack* stack) {
    struct Node* temp = stack->head;
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

int main() {
    struct Stack* st = createStack(5);
    push(st, 1);
    push(st, 2);
    push(st, 3);
    push(st, 4);
    push(st, 5);
    display(st);
    pop(st);
    pop(st);
    pop(st);
    printf("%d\n", getTop(st));
    push(st, 6);
    return 0;
}
