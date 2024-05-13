//Simulation of pop() and push() functions

#include <stdio.h>
#include <myheaders/boolean.h>


#define STACK_SIZE 80

char stack[STACK_SIZE];
bool stack_empty, stack_full;
int top_of_stack;

void push(char pushed_char){
    if(stack_full){
        printf("Error - Stack is full\n");
        return;
    }else{
        ++top_of_stack;
        stack[top_of_stack] = pushed_char;
        stack_empty = false;
    }

    if(top_of_stack == STACK_SIZE)
        stack_full = true;
}

char pop() {
    char temp;
    if(stack_empty){
        printf("Error - Stack is empty\n");
        return(' ');
    }else{
        temp = stack[top_of_stack];
        --top_of_stack;
        if (top_of_stack <= 0) 
            stack_empty = true;
        return(temp);
    }
}

int main() {
    char chara1, chara2, chara3;
    printf("Enter a character 1: ");
    scanf("%c", &chara1);
    push(chara1);
    push('B');
    pop();
    printf("\n%c", stack[top_of_stack]);  //First Test: pushing a character and then printing it.
    return 0;
}