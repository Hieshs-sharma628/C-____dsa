#include <stdio.h>
#include <stdlib.h>

// Structure for Node
struct node {
    int data;
    struct node *next;
};

int main() {
    struct node *head = NULL, *temp, *newnode;
    int n, i;

    printf("Enter number of nodes: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        // Allocate memory for new node
        newnode = (struct node*)malloc(sizeof(struct node));

        printf("Enter data: ");
        scanf("%d", &newnode->data);

        newnode->next = NULL;

        if(head == NULL) {
            head = temp = newnode;
        }
        else {
            temp->next = newnode;
            temp = newnode;
        }
    }

    // Display Linked List
    temp = head;
    printf("Linked List: ");

    while(temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }

    printf("NULL");

    return 0;
}