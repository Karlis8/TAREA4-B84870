#include "stack.h"
#include <stdlib.h>

#define MAX_SIZE 100

static int stack[MAX_SIZE];
static unsigned int top = 0;

void stack_init() {
    top = 0;
}

int stack_push(unsigned int data) {
    if (stack_is_full()) {
        return -1;
    }
    stack[top++] = data;
    return 0;
}

int stack_pop() {
    if (stack_is_empty()) {
        return -1;
    }
    return stack[--top];
}

unsigned int stack_size() {
    return top;
}

int stack_is_full() {
    return top == MAX_SIZE;
}

int stack_is_empty() {
    return top == 0;
}