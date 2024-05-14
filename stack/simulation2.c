#include <stdio.h>
#include <myheaders/boolean.h>
#include <stdlib.h>

#define MAX 4
#define POPPED_MARK -1

int stack[MAX];
int top_of_stack = -1;
bool stack_full, stack_empty;

void push(int pushed_int) {
    if (top_of_stack == MAX-1)
    {
        stack_full = true;
    }

    if (stack_full)
    {
        printf("Error : Stack is full");
        exit(1);
    }else {
        ++top_of_stack;
        stack[top_of_stack] = pushed_int;
        stack_full = false;
    }
}

int pop() {
    int temp;
    if (top_of_stack <= 0)
    {
        stack_empty = true;
    }else {
        temp = stack[top_of_stack];
        stack[top_of_stack] = POPPED_MARK;
        --top_of_stack;
    }
    return temp;
}

int main() {
    int num[MAX];
    printf("Enter a number: ");
    for (int i = 0; i < MAX; i++)
    {
        scanf("%d", &num[i]);
        push(num[i]);
    }
    
    printf("\nElements in stack: \n");
    for (int i = 0; i < MAX; i++)
    {
        printf("%d\n", stack[i]);
    }
    
    pop();

    printf("\nStack after pop: \n");
    for(int i = 0; i < MAX; i++) {
        if (stack[i] != POPPED_MARK)
        {
            printf("%d\n", stack[i]);
        }else {
            printf("Popped!");
        }
        
    }
    return 0;
}