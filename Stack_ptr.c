#include <stdio.h>
#include <stdlib.h>
#include <limits.h>  // For INT_MAX
#define MAX 5

int *stack_ptr;  // Dynamically allocated stack array
int top = -1;    // Index of the top element in the stack

// Function to check if the stack is empty
int isEmpty() {
    return top == -1;
}

// Function to check if the stack is full
int isFull() {
    return top == MAX - 1;
}

// Function to push an element onto the stack
void push(int value) {
    if (isFull()) {
        printf("Stack Overflow\n");
    } else {
        stack_ptr[++top] = value;
        printf("%d pushed onto stack.\n", value);
    }
}

// Function to pop an element from the stack
int pop() {
    if (isEmpty()) {
        printf("Stack Underflow\n");
        return INT_MAX;
    } else {
        return stack_ptr[top--];
    }
}

// Function to peek the top element without popping it
int peek() {
    if (isEmpty()) {
        printf("Stack is empty.\n");
        return INT_MAX;
    } else {
        return stack_ptr[top];
    }
}

// Function to return the third element from the top
int thirdFromTop() {
    if (top < 2) {
        printf("Not enough elements in the stack.\n");
        return INT_MAX;
    } else {
        return stack_ptr[top - 2];
    }
}

// Function to return the bottom element of the stack
int bottom() {
    if (isEmpty()) {
        printf("Stack is empty.\n");
        return INT_MAX;
    } else {
        return stack_ptr[0];
    }
}

// Function to delete all occurrences of a specific value from the stack
void deleteOccurrences(int value) {
    int tempStack[MAX];
    int tempTop = -1;

    // Pop elements from the original stack, push to tempStack if they are not equal to the value
    while (!isEmpty()) {
        int poppedValue = pop();
        if (poppedValue != value) {
            tempStack[++tempTop] = poppedValue;
        }
    }

    // Push remaining elements back to the original stack
    while (tempTop != -1) {
        push(tempStack[tempTop--]);
    }
}

// Main function with a menu-driven program
int main() {
    stack_ptr = (int *)malloc(MAX * sizeof(int));  // Allocate memory for the stack
    int choice, value;

    do {
        printf("\nMenu:\n");
        printf("1. Push\n");
        printf("2. Pop\n");
        printf("3. Peek (Top Element)\n");
        printf("4. Third from Top\n");
        printf("5. Bottom Element\n");
        printf("6. Delete Occurrences of a value\n");
        printf("7. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter value to push: ");
                scanf("%d", &value);
                push(value);
                break;
            case 2:
                value = pop();
                if (value != INT_MAX) {
                    printf("Popped value: %d\n", value);
                }
                break;
            case 3:
                value = peek();
                if (value != INT_MAX) {
                    printf("Top element: %d\n", value);
                }
                break;
            case 4:
                value = thirdFromTop();
                if (value != INT_MAX) {
                    printf("Third element from top: %d\n", value);
                }
                break;
            case 5:
                value = bottom();
                if (value != INT_MAX) {
                    printf("Bottom element: %d\n", value);
                }
                break;
            case 6:
                printf("Enter value to delete: ");
                scanf("%d", &value);
                deleteOccurrences(value);
                printf("Deleted all occurrences of %d\n", value);
                break;
            case 7:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice!\n");
        }
    } while (choice != 7);

    free(stack_ptr);  // Free the dynamically allocated memory
    return 0;
}

