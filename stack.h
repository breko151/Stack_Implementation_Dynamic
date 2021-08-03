#include <stdio.h>
#include <stdlib.h>

typedef struct tNode {
    struct tNode *ptrNextNode;
    int value;
} Node;

typedef struct {
    Node *list;
    int top;
} Stack;

Stack *createStack();

int pop(Stack *myStack);

void push(Stack *myStack, int value);

int top(Stack *myStack);

void clear(Stack *myStack);