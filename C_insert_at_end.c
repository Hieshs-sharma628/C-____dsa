#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

// insert at end: pass head and tail by pointer so we can update them
void insert_at_end(struct node **head, struct node **tail, int value) {
    struct node *newnode = (struct node *)malloc(sizeof(struct node));
    if (newnode == NULL) {
        printf("Memory allocation failed\n");
        exit(1);
    }
    newnode->data = value;
    newnode->next = NULL;

    if (*head == NULL) {
        *head = newnode;
        *tail = newnode;
    } else {
        (*tail)->next = newnode;
        *tail = newnode;
    }
}

void display(struct node *head) {
    struct node *ptr = head;
    while (ptr != NULL) {
        printf("%d ", ptr->data);
        ptr = ptr->next;
    }
}

void free_list(struct node *head) {
    struct node *cur = head;
    while (cur != NULL) {
        struct node *next = cur->next;
        free(cur);
        cur = next;
    }
}

int main(void) {
    struct node *head = NULL;
    struct node *tail = NULL;
    int i, n, value;

    printf("Enter number of nodes: ");
    if (scanf("%d", &n) != 1 || n < 0) {
        printf("Invalid input\n");
        return 1;
    }

    for (i = 0; i < n; i++) {
        printf("Enter value: ");
        if (scanf("%d", &value) != 1) {
            printf("Invalid input\n");
            return 1;
        }
        insert_at_end(&head, &tail, value);
    }

    printf("\nLinked List: ");
    display(head);
    free_list(head);
    return 0;
}
