#include <stdio.h>
#define MAX 100
int stack[MAX];
int top = -1;

void push(int value) {
    if (top == MAX - 1) {
        printf("Stack Overflow\n");
    } 
    else {
        top++;
        stack[top] = value;
    }
}
void peek() {
    if(top == -1)
    {
        printf("Stack is empty");
    }
    else  printf("Top element: %d\n", stack[top]);

}
void Telement()
{
    printf("Number of Elemet in stack: %d",top+1);
}

int main() {
    push(10);
    push(20);
    push(40);
    peek();
    Telement();
    return 0;
}
