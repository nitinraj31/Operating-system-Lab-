#include <stdio.h>
#define MAX 5
int stack[MAX], top = -1;
void push() {
    int x;
    if (top == MAX - 1) printf("Overflow! Stack is full.\n");
    else {
        printf("Enter the element to push: ");
        scanf("%d", &x);
        stack[++top] = x;
        printf("Element pushed successfully!\n");
    }
}
void pop() {
    if (top == -1) printf("Underflow! Stack is empty.\n");
    else printf("Popped element: %d\n", stack[top--]);
}
void display() {
    if (top == -1) {
        printf("Stack is empty!\n");
    } else {
        printf("Stack elements (top to bottom): ");
        for (int i = top; i >= 0; i--) {
            printf("%d ", stack[i]);
        }
        printf("\n");
    }
}
int main() {
    int ch;
    printf("\n===== STACK using Array =====\n");
    do {
        printf("\n1. Push\n2. Pop\n3. Display\n4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &ch);
        if (ch == 1) push();
        else if (ch == 2) pop();
        else if (ch == 3) display();
        else if (ch == 4) printf("Exiting...\n");
        else printf("Invalid choice! Try again.\n");
    } while (ch != 4);
    return 0;
}