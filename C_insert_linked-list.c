#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

// Function to insert at beginning
struct Node* insertAtBeginning(struct Node* head, int value) {
    struct Node* newNode;

    newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->next = head;
    head = newNode;

    return head;
}

// Function to display list
void display(struct Node* head) {
    struct Node* temp = head;

    while(temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

int main() {
    struct Node* head = NULL;
    int n, value, i;

    printf("Enter number of nodes: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        printf("Enter value: ");
        scanf("%d", &value);

        head = insertAtBeginning(head, value);
    }

    printf("\nLinked List: ");
    display(head);

    return 0;
}