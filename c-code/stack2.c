#include <stdio.h>

#define MAX 5

struct Stack {
    int arr[MAX];
    int top;
};

void initStack(struct Stack* s) {
    s->top = -1;
}

int isFull(struct Stack* s) {
    return s->top == MAX - 1;
}

int isEmpty(struct Stack* s) {
    return s->top == -1;
}

void push(struct Stack* s, int value) {
    if (isFull(s)) {
        printf("Stack Overflow! Cannot push %d\n", value);
    } else {
        s->arr[++s->top] = value;
        printf("%d pushed to stack.\n", value);
    }
}

void pop(struct Stack* s) {
    if (isEmpty(s)) {
        printf("Stack Underflow! No element to pop.\n");
    } else {
        printf("%d popped from stack.\n", s->arr[s->top--]);
    }
}

void display(struct Stack* s) {
    if (isEmpty(s)) {
        printf("Stack is empty.\n");
    } else {
        printf("Stack elements: ");
        for (int i = 0; i <= s->top; i++) {
            printf("%d ", s->arr[i]);
        }
        printf("\n");
    }
}

int main() {
    struct Stack s;
    initStack(&s);

    // Push 3 elements
    push(&s, 10);
    push(&s, 20);
    push(&s, 30);

    display(&s);

    // Pop 2 elements
    pop(&s);
    pop(&s);

    display(&s);

    return 0;
}
