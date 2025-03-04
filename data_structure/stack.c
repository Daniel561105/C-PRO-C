#include <stdio.h>
#include <stdbool.h>

// LIFO -> last in first out is the features of stack
// usually there are these usage
// push : put it inside
// pop : get it out from the top
// top : see the top value but no operations
// isEmpty : check if stack is empty
// size : count elements in stack

#define MAX 10

struct stack
{
    int arr[MAX];
    int top;
};

// initial stack
void init (struct stack* test) {
    test->top == -1;
}

bool isEmpty (struct stack* test) {
    return test->top == -1;
}

bool isFull (struct stack* test) {
    return test->top == MAX - 1;
}

void push (struct stack* test, int value) {
    if (isFull(test)) {
        printf("stack is full\n");
    }
    else {
        test->arr[++test->top] = value;
    }
}

int pop (struct stack* test) {
    if (isEmpty(test)) {
        printf("stack is empty\n");
        return -1;
    }
    else {
        return test->arr[test->top--];
    }
}

int peek (struct stack* test) {
    if (isEmpty(test)) {
        printf("stack is empty\n");
        return -1;
    }
    else {
        return test->arr[test->top];
    }
}

int main() {
    struct stack test;
    init(&test);
    push(&test, 123);
    push(&test, 987);
    push(&test, 111);
    push(&test, 999);

    int check_up = peek(&test);
    printf("%d",check_up);
    return 0;
}