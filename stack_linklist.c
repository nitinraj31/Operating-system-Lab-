#include <stdio.h>
#include <stdlib.h>
struct node {
    int data;
    struct node *next;
};
struct node *top = NULL;
void push() {
    int x;
    printf("Enter the element to push: ");
    struct node *n = malloc(sizeof(struct node));
    scanf("%d", &x);
    n->data = x;
    n->next = top;
    top = n;
    printf("Element pushed successfully!\n");
}
void pop() {
    if (top == NULL) printf("Underflow! Stack is empty.\n");
    else {
        struct node *t = top;
        printf("Popped element: %d\n", t->data);
        top = top->next;
        free(t);
    }
}
void display() {
    if (top == NULL) {
        printf("Stack is empty!\n");
    } else {
        printf("Stack elements (top to bottom): ");
        struct node *temp = top;
        while (temp != NULL) {
            printf("%d ", temp->data);
            temp = temp->next;
        }
        printf("\n");
    }
}
int main() {
    int ch;
    printf("\n===== STACK using Linked List =====\n");
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