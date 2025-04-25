#include <stdio.h>
#include <stdlib.h>
#define size 100

int top = -1, stack[size];

void push(int data);
void pop();
int peek();
void printAll();

int main() {
    int choice = -1;

    while(choice != 0){
        system("clear");  // On Windows use: system("cls");
        printf("Stack: ");
        printAll();

        printf("\n1. Push\n");
        printf("2. Pop\n");
        printf("3. Peek\n");
        printf("0. Exit\n");
        printf("Enter your choice : ");
        scanf("%d", &choice);

        if(choice == 1){
            int x;
            printf("Enter a number: ");
            scanf("%d", &x);
            push(x);
        }
        else if(choice == 2){
            pop();
        }
        else if(choice == 3){
            int topValue = peek();
            if (topValue != -1)
                printf("Peek: %d\n", topValue);
        }
        else if(choice == 4){
            printAll();
        }
        else if(choice == 0){
            printf("Exiting...\n");
        }
        else {
            printf("Invalid choice.\n");
        }

        printf("Press Enter to continue...");
        getchar(); getchar();  // Clear input buffer
    }

    return 0;
}

void push(int data) {
    if (top == size - 1) {
        printf("Stack Overflow\n");
        return;
    }
    stack[++top] = data;
    printf("%d pushed to stack.\n", data);
}

void pop() {
    if (top == -1) {
        printf("Stack Underflow\n");
        return;
    }
    printf("%d popped from stack.\n", stack[top--]);
}

int peek() {
    if(top == -1){
        printf("Stack is empty.\n");
        return -1;
    }
    return stack[top];
}

void printAll() {
    if (top == -1) {
        printf("Stack is empty.\n");
        return;
    }
    for(int i = 0; i <= top; i++) {
        printf("%d ", stack[i]);
    }
    printf("\n");
}
