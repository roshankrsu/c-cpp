#include <stdio.h>
#include <stdlib.h>

struct Stack {
    int size;
    int top;
    int *arr;
};

void push(struct Stack *s, int val) {
    if (s->top == s->size - 1)
        printf("Overflow!\n");
    else
        s->arr[++s->top] = val;
}

int pop(struct Stack *s) {
    if (s->top == -1) {
        printf("Underflow!\n");
        return -1;
    }
    return s->arr[s->top--];
}

int main() {
    struct Stack s;
    s.size = 5;
    s.top = -1;
    s.arr = (int*)malloc(s.size * sizeof(int));

    push(&s, 10);
    push(&s, 20);

    printf("Pop: %d\n", pop(&s));
    printf("Pop: %d\n", pop(&s));
    printf("Pop: %d\n", pop(&s)); // underflow

    free(s.arr);
    return 0;
}
